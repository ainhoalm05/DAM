import java.util.Scanner;

public class encontrarMayorMenor {
	@SuppressWarnings("resource")
	public static void main (String[] args) {
		Scanner entrada= new Scanner(System.in);
		
		int n;
		System.out.println("Introduce cuantos numeros vas a comparar");
		n=entrada.nextInt();
		int [] numeros = new int [n];
		
		int mayor = 0;
		int menor = 0;
		int encontradoMax = 0;
		int encontradoMin = 0;
		
		for(int i=0;i<n;i++) {
					
			System.out.println("Introduce un numero");
			numeros[i]=entrada.nextInt();
			entrada.nextLine();
			
			if(i==0) {
				mayor=numeros[i];
				menor=numeros[i];
			}
			
			if(numeros[i]>mayor) {
				mayor=numeros[i];
				encontradoMax=1;
			}else if(numeros[i]<menor) {
				menor=numeros[i];
				encontradoMin=1;
			}else if(mayor==numeros[i]){
				encontradoMax++;
			}else if(menor==numeros[i]) {
				encontradoMin++;
			}
				
		}
		System.out.println("El numero mayor es: "+mayor+" y se repite "+ encontradoMax +" veces.");
		System.out.println("El numero menor es: "+menor+" y se repite "+ encontradoMin +" veces.");
	}
}
