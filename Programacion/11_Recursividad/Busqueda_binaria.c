#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int busqueda_binaria(int * arr, int a_buscar, int ini, int fin){//ini y fin son posiciones de array
    ini=arr[0];
    fin=arr[9];
    int medio=(ini+fin)/2;
    if(a_buscar==arr[mitad]){
        return mitad;
    }else if (ini>final){
        return 1;
    }else if(a_buscar>arr[mitad]){
            busqueda_binaria( arr, a_buscar, ini, medio-1);
    else{
        busqueda_binaria(arr, a_buscar, medio+1, fin);
    }

    }
}

int main (){
        int arr[10]={-5,1,9,10,11,12,17,120,150,1500}
        int a_buscar=120;
        int encontrado = busqueda_binaria(arr,10,a_buscar);
	return 0;
}

