#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main (){
	int condicion;
	char c;

	scanf("%d", &condicion);

	c = (condicion > 5) ? 'S' : 'N';
	
	/*Es equivalente a:
	 * 	if (condicion > 5){
	 *		c = 'S';
	 * 	}else{
	 *		c = 'N';	
	 * 	}*/
	
	printf("%c\n",c);
	
	return 0;
}
