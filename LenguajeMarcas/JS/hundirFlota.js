let tableroJugador = [];
let tableroMaquina = [];
const filas = 10;
const columnas = 10;
const barcosJugadorConfig = [4, 3, 3, 2, 2, 2, 1, 1, 1, 1];
const barcosMaquinaConfig = [4, 3, 3, 2, 2, 2, 1, 1, 1, 1];
let turnoJugador = false; 
let barcosHundidosJugador = 0;
let barcosHundidosMaquina = 0;
let jugadorListo = false;

function crearTableros() {
    for (let i = 0; i < filas; i++) {
        tableroJugador[i] = Array(columnas).fill('');
        tableroMaquina[i] = Array(columnas).fill(0);
    }
    dibujarTableroJugador();
    dibujarTableroMaquina();
}

function dibujarTableroJugador() {
    const tableroHTML = document.getElementById('tableroJugador');
    tableroHTML.innerHTML = '';
    for (let i = 0; i < filas; i++) {
        const fila = tableroHTML.insertRow();
        for (let j = 0; j < columnas; j++) {
            const celda = fila.insertCell();
            celda.textContent = tableroJugador[i][j];
            celda.id = `jugador-${i}-${j}`;
        }
    }
}

function dibujarTableroMaquina() {
    const tableroHTML = document.getElementById('tableroMaquina');
    tableroHTML.innerHTML = '';
    for (let i = 0; i < filas; i++) {
        const fila = tableroHTML.insertRow();
        for (let j = 0; j < columnas; j++) {
            const celda = fila.insertCell();
            const boton = document.createElement('button');
            boton.dataset.fila = i;
            boton.dataset.columna = j;
            boton.classList.add('boton-maquina');
            boton.addEventListener('click', atacarMaquina);
            boton.id = `maquina-${i}-${j}`;
            boton.disabled = !jugadorListo;
            celda.appendChild(boton);
        }
    }
}

function parseCoordenadas(input) {
    const regex = /([A-J])(\d+)(x+)/gi;
    const barcos = [];
    let match;
    while ((match = regex.exec(input)) !== null) {
        const letra = match[1].toUpperCase();
        const numero = parseInt(match[2]) - 1;
        const longitud = match[3].length;
        const col = letra.charCodeAt(0) - 'A'.charCodeAt(0);
        const fila = numero;

        if (fila >= 0 && fila < filas && col >= 0 && col < columnas && longitud > 0) {
            barcos.push({ fila, col, longitud });
        } else {
            return null; 
        }
    }
    return barcos;
}

function colocarBarcoJugador(tablero, fila, col, longitud, horizontal) {
    if (horizontal) {
        if (col + longitud > columnas) return false;
        for (let i = 0; i < longitud; i++) {
            if (tablero[fila][col + i] === 'x') return false;
        }
        for (let i = 0; i < longitud; i++) {
            tablero[fila][col + i] = 'x';
        }
        return true;
    } else {
        if (fila + longitud > filas) return false;
        for (let i = 0; i < longitud; i++) {
            if (tablero[fila + i][col] === 'x') return false;
        }
        for (let i = 0; i < longitud; i++) {
            tablero[fila + i][col] = 'x';
        }
        return true;
    }
}

function procesarFlotaJugador() {
    const inputFlota = document.getElementById('flota-jugador').value;
    const barcosInput = parseCoordenadas(inputFlota);
    const errorFlota = document.getElementById('error-flota');
    tableroJugador = Array(filas).fill(null).map(() => Array(columnas).fill('')); 

    if (!barcosInput) {
        errorFlota.textContent = 'Formato de entrada inválido. Ejemplo: A1x, B3xxx';
        dibujarTableroJugador();
        return;
    }

    let barcosColocados = [];
    let barcosNecesarios = [...barcosJugadorConfig];

    for (const barco of barcosInput) {
        const { fila, col, longitud } = barco;
        let colocado = false;

        if (barcosNecesarios.includes(longitud)) {
            if (colocarBarcoJugador(tableroJugador, fila, col, longitud, true)) {
                const index = barcosNecesarios.indexOf(longitud);
                barcosNecesarios.splice(index, 1);
                colocado = true;
            }
        }
        if (!colocado && barcosNecesarios.includes(longitud)) {
            if (colocarBarcoJugador(tableroJugador, fila, col, longitud, false)) {
                const index = barcosNecesarios.indexOf(longitud);
                barcosNecesarios.splice(index, 1);
                colocado = true;
            }
        }

        if (!colocado) {
            errorFlota.textContent = 'No se pudo colocar un barco con las coordenadas proporcionadas.';
            dibujarTableroJugador();
            return;
        }
    }

    if (barcosNecesarios.length === 0) {
        errorFlota.textContent = '';
        jugadorListo = true;
        turnoJugador = true;
        document.getElementById('input-flota').style.display = 'none';
        dibujarTableroJugador();
        dibujarTableroMaquina(); 
        document.getElementById('mensajes').textContent = '¡Flota posicionada! Ataca el tablero enemigo.';
    } else {
        errorFlota.textContent = 'No se colocaron todos los barcos requeridos: ' + barcosNecesarios.join(', ');
        dibujarTableroJugador();
    }
}

function colocarBarcoMaquina(tablero, longitud) {
    let colocado = false;
    while (!colocado) {
        const fila = Math.floor(Math.random() * filas);
        const col = Math.floor(Math.random() * columnas);
        const horizontal = Math.random() < 0.5;

        if (horizontal) {
            if (col + longitud > columnas) continue;
            let libre = true;
            for (let i = 0; i < longitud; i++) {
                if (tablero[fila][col + i] === 1) {
                    libre = false;
                    break;
                }
            }
            if (libre) {
                for (let i = 0; i < longitud; i++) {
                    tablero[fila][col + i] = 1;
                }
                colocado = true;
            }
        } else {
            if (fila + longitud > filas) continue;
            let libre = true;
            for (let i = 0; i < longitud; i++) {
                if (tablero[fila + i][col] === 1) {
                    libre = false;
                    break;
                }
            }
            if (libre) {
                for (let i = 0; i < longitud; i++) {
                    tablero[fila + i][col] = 1;
                }
                colocado = true;
            }
        }
    }
}

function posicionarBarcosMaquina() {
    for (const longitud of barcosMaquinaConfig) {
        colocarBarcoMaquina(tableroMaquina, longitud);
    }
    console.log("Tablero Máquina (interno):", tableroMaquina); 
}

function atacarMaquina(event) {
    if (!turnoJugador || !jugadorListo) return;

    const fila = parseInt(event.target.dataset.fila);
    const columna = parseInt(event.target.dataset.columna);
    const boton = event.target;

    if (tableroMaquina[fila][columna] === 1) {
        boton.textContent = '¡Tocado!';
        boton.classList.add('tocado');
        tableroMaquina[fila][columna] = 'T';
        document.getElementById('mensajes').textContent = '¡Tocado! Tu turno de nuevo.';
        if (haHundidoBarco(tableroMaquina, fila, columna)) {
            document.getElementById('mensajes').textContent += ' ¡Hundido!';
            barcosHundidosMaquina++;
            if (barcosHundidosMaquina === barcosMaquinaConfig.length) {
                alert('¡Has ganado!');
                deshabilitarTableroMaquina();
                return;
            }
        }
        turnoJugador = true;
    } else if (tableroMaquina[fila][columna] === 0) {
        boton.textContent = 'Agua';
        boton.classList.add('agua');
        tableroMaquina[fila][columna] = 'A';
        document.getElementById('mensajes').textContent = '¡Agua! Turno del ordenador.';
        turnoJugador = false;
        setTimeout(turnoOrdenador, 1500);
    } else if (tableroMaquina[fila][columna] === 'T' || tableroMaquina[fila][columna] === 'A') {
        document.getElementById('mensajes').textContent = 'Ya has atacado esta celda.';
    }
    boton.disabled = true;
}

function turnoOrdenador() {
    if (turnoJugador || !jugadorListo) return;
    document.getElementById('mensajes').textContent = 'Turno del ordenador...';

    setTimeout(() => {
        let fila, columna;
        do {
            fila = Math.floor(Math.random() * filas);
            columna = Math.floor(Math.random() * columnas);
        } while (tableroJugador[fila][columna] === 'A' || tableroJugador[fila][columna] === 'T');

        const celdaJugador = document.getElementById(`jugador-${fila}-${columna}`);

        if (tableroJugador[fila][columna] === 'x') {
            tableroJugador[fila][columna] = 'T';
            celdaJugador.classList.add('tocado');
            celdaJugador.textContent = 'T';
            document.getElementById('mensajes').textContent = `El ordenador ha tocado tu barco en la fila ${fila + 1}, columna ${String.fromCharCode(65 + columna)}!`;
            if (haHundidoBarco(tableroJugador, fila, columna)) {
                document.getElementById('mensajes').textContent += ' ¡Hundido!';
                barcosHundidosJugador++;
                if (barcosHundidosJugador === barcosJugadorConfig.length) {
                    alert('¡Has perdido!');
                    deshabilitarTableroMaquina();
                    return;
                }
            }
        } else {
            tableroJugador[fila][columna] = 'A';
            celdaJugador.classList.add('agua');
            celdaJugador.textContent = 'A';
            document.getElementById('mensajes').textContent = `El ordenador ha disparado en la fila ${fila + 1}, columna ${String.fromCharCode(65 + columna)} y ha fallado.`;
        }
        turnoJugador = true;
        document.getElementById('mensajes').textContent += ' Tu turno.';
    }, 2000);
}

function haHundidoBarco(tablero, fila, columna) {
    if (tablero[fila][columna] === 'T') {
        return true;
    }
    return false;
}

function deshabilitarTableroMaquina() {
    const botonesMaquina = document.querySelectorAll('.boton-maquina');
    botonesMaquina.forEach(boton => boton.disabled = true);
}

function load() {
    crearTableros();
    posicionarBarcosMaquina(); 
    document.getElementById('mensajes').textContent = 'Introduce las coordenadas de tu flota y haz clic en "Colocar Flota".';
}

window.addEventListener("DOMContentLoaded", load, false);