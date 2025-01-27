# Bash

Comandos **ls**

```bash
ls # Muestra los archivos no ocultos de un directorio.
ls -a # Muestra todos los archivos, inclusive los ocultos.
ls -l # Muestra los datos del archivo (tipo, cantidad de carpetas, fecha de creación, nombre).
ls -la # 
```

Comandos **cd** 

```bash
cd directorio # Cambiar de directorio
cd # Cambia al directorio inicial.
```

Comandos **rm**

```bash
rm * # Borra todo lo que se encuentre en el directorio en el que estes situado.
rm *.extension # Borra todo lo que termine en alguna extension (.py, .c, .cpp, .css, .html, etc).
```

Comandos **cat**

```bash
cat archivo # Mostrar contenido del archivo.
```

Comandos **diff**

```bash
diff archivo1 archivo2 # Comparar el contenido del archivo.
diff -y archivo1 archivo2 # Mustra las diferencias entre dos archivos linea a linea.
```

Comandos **grep** (funciona con cualquier archivo de texto).

```bash
grep "Nombre" archivo # Buscar en el contenido del archivo una palabra en específico.
grep "^Nombre" archivo # Busca la las lineas del archivo que empiezan por esa palabra.
grep "Nombre$" archivo # Busca la las lineas del archivo que terminan por esa palabra.
grep "^$" archivo # Busca las lineas bacias

```

Añadido **—help**

```bash
comando --help # la ayuda del comando
```

Comando **man**

```bash
man comando # manual de un comando
```

Comando **head**

```bash
head archivo # Te muestra el principio de un archivo.
head -n 2 archivo # Te muestra las dos primeras lineas de un archivo.
```

Comando **tail**

```bash
tail archivo # Te muestra el final de un archivo.
```

Comando **less**

```bash
less archivo # Te permite irte moviendo por el archivo si es muy grande.
```

Enlazar comandos **PIPES**

```bash
cat archivo | grep "Nombre$" # Concatenar comandos.
grep "error" file1.txt | wc --word < archivo # Concatenar y crear archivo con el contenido de la salida de los comandos.
```

Comandos **sed**

```bash
sed 's/Palabra a remplazar/Remplazo/g' archivo # Reemplaza una palabra por otra de un archivo.
sed '/^$/d' archivo # Borra las lineas bacias
sed '/^$/d' | uniq archivo # Borra dos lineas seguidas que esten bacias
sed '/^$/d' archivo | sort | uniq # Ordenas y borras las lineas bacias que esten seguidas
sed '5,95d' archivo # Borra las lineas que hay entre las lineas 5 y 95 del archivo.

```

Comandos **wc**

Comando **sort**

```bash
sort 
```

Comando **pwd**

```bash
pwd # Ruta entera de donde te encuetras
```

**>**

```bash
archivo1 > archivo2 # Pasa la informacion del archivo1 al archivo2 (sobreescribe)
archivo3 >> archivo2 # Añade la informacion del archivo3 al archivo2 (a continuación))
```

- Ejercicios

Ejercicio 1

1. Encuentra todas las líneas que terminen con "error" en el archivo `file1.txt` y guarda el resultado en `output1.txt`.

```bash
grep "error" file1.txt > output1.txt
```

![image.png](image.png)

Ejercicio 2

1. Reemplaza todas las ocurrencias de "DEBUG" por "INFO" en el archivo `file1.txt` y guarda el resultado en `output2.txt`.

```bash
sed 's/DEBUG/INFO/g' file1.txt > output2.txt
```

![image.png](image%201.png)

Ejercicio 3

```bash
head -n 5 file.txt | grep "error" > output3.txt
```

Ejercicio 4

```bash
ls *.txt | wc -l > output4.txt
```

Ejercicio 5

