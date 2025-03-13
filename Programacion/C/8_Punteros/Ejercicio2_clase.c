#include <stdio.h>
#include <stdlib.h>


int main (){
	int array[4]={10, 20, 30, 40};
	int *p=array;
	int suma=0;

	for(int i=0;i<4;i++){
	suma+=*(p+i);
	//nivel pro: suma += *(p++)	
	}
	printf("%d",suma);


	return 0;
} 
