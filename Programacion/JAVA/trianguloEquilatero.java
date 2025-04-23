import java.util.Scanner;

public class trianguloEquilatero {
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		System.out.println("Introduce un numero para representar la altura del triangulo");
		int altura = entrada.nextInt();

		// Triangulo macizo
		
		for (int i = 0; i < altura; i++) {
			
			for (int j = i; j - altura <= 0 ; j++) {
				System.out.print(" ");
			}
		for (int k = 0;k <= i*2;k++) {
			System.out.print("*");
		}
		System.out.println();
		}
		

		
	}
}
