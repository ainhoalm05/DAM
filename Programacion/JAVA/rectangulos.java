import java.util.Scanner;

public class Rectangulo {
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		System.out.println("Introduce un numero para representar la base del rectangulo");
		int base = entrada.nextInt();
		System.out.println("Introduce un numero para representar la altura del rectangulo");
		int altura = entrada.nextInt();

		// Rectangulo macizo
		for (int i = 0; i < base; i++) {
			for (int j = 0; j < altura; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		System.out.println();

		// Rectangulo sin relleno
		for (int i = 0; i < base; i++) {
			for (int j = 0; j < altura; j++) {
				if (i > 0 && i < altura - 1) {
					if (j > 0 && j < base - 1) {
						System.out.print(" ");
					} else {
						System.out.print("*");
					}
				} else {
					System.out.print("*");
				}
			}
			System.out.println();
		}
	}
}
