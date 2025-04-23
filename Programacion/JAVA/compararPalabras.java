import java.util.Scanner;

public class compararPalabras {
	public static void main (String[] args) {
		@SuppressWarnings("resource")
		Scanner entrada= new Scanner(System.in);
		String[] palabras= new String[5];
		int max=0;
		
		for (int i=0; i<5; i++) {
			System.out.println("Introduce una palabra");
			palabras[i]= entrada.nextLine();
	
			if(palabras[i].length() > palabras[max].length() && i!=0) {
				max=i;
			}
		}
		System.out.println("Palabra con mayor longitud: "+palabras[max]);
		System.out.println("Tamaño: "+palabras[max].length());
	}
}