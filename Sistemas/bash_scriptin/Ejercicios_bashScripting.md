# Ejercicios

### Ejercicio 1

**1. Detectar si un archivo está vacío o no**

```bash
#!/bin/bash

for archivo in *.txt
do
    if grep -q '.' "$archivo"; then
        echo "El archivo $archivo NO está vacio."
    else
        echo "El archivo $archivo está vacio."
    fi
done
```

![alt text](img/image-1.png)

### Ejercicio 2

```bash
#!/bin/bash

for (( i=1; i<=5; i++ ))
do
    if (( i % 2 == 0 ));
    then
        echo "El número $i es par"
    else
        echo "El número $i es impar"
    fi
done
```


![alt text](img/image-2.png)

### Ejercicio 3

```bash
#!/bin/bash

for ARCHIVO in l
do
    if grep -q "ERROR" "$ARCHIVO";
    then
        echo "El archivo $ARCHIVO contiene errores"
    else
        echo "El archivo $ARCHIVO está limpio"
    fi
done
```
![alt text](img/image-2.png)

### Ejercicio 4

```bash
#!/bin/bash

for (( i=1; i<=5; i++ ))
do
    if (( i == 3 ));
    then
        echo "Saltamos el numero 3"
        continue
    else
        echo "i = $i "
    fi
done
```
![alt text](img/image-4.png)

### Ejercicio 5

```bash
#!/bin/bash

for archivo in *.*
do
    if [[ $archivo == *.jpg ]];
    then
        mv $archivo `echo $archivo | sed 'sed/\(.*\.\)jpg/\1old'`
    fi
done
```

![alt text](img/image-5.png)


### Ejercicio 6
 **6. Contar líneas y decidir según longitud**

1. Crea un script `ej6.sh`.
2. Haz un `for` para iterar sobre todos los `.txt` en `test6/`.
3. Cuenta cuántas líneas tiene cada archivo usando `grep`:
    
    ```bash
    TOTAL_LINEAS=$(grep -c '^' "$archivo")
    
    ```
    
4. Si **el número de líneas** es mayor a **3**, muestra un mensaje `"El archivo X tiene más de 3 líneas"`.De lo contrario, `"El archivo X tiene 3 líneas o menos"`.
```bash
#!/bin/bash

for archivo in test6/*.txt;
do
       TOTAL_LINEAS=$(grep -c '^' "$archivo")
    if [ "$TOTAL_LINEAS" -gt 3 ]; then
        echo "El archivo $archivo tiene más de 3 líneas"
    else
        echo "El archivo $archivo tiene 3 líneas o menos"
    fi
done
```
![alt text](img/image-6.png)

### Ejercicio 7
**Reemplazar "localhost" en archivos `.conf`**

1. Crea un script `ej7.sh`.
2. Haz un bucle `for` que recorra `test7/*`.
3. Si el archivo termina en `.conf`, usa `sed` para reemplazar todas las ocurrencias de `"localhost"` por `"127.0.0.1"` **in place**:
    
    ```bash
    sed -i 's/localhost/127.0.0.1/g' "$archivo"
    
    ```
    
4. Imprime un mensaje confirmando que se ha modificado ese archivo.

```bash
#!/bin/bash

for archivo in test7/*;
do
    if [[ "$archivo" == *.conf ]]; then
        sed -i 's/localhost/127.0.0.1/g' "$archivo"
        echo "Se ha modificado el archivo $archivo"
    fi
done
```