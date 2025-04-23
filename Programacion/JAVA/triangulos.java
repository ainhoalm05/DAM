import java.util.Scanner;

public class Triangulo {
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		System.out.println("Introduce un numero para representar la altura del triangulo");
		int altura = entrada.nextInt();

		// Triangulo macizo
		for (int i = 0; i <= altura; i++) {
			for (int j = 1; j <= i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		System.out.println();

		// Triangulo sin relleno
		for (int i = 0; i < altura; i++) {
			for (int j = 0; j <= i; j++) {
				if (i == altura - 1) {
					System.out.print("*");
				} else if (j == 0 || j == i) {
					System.out.print("*");
				} else {
					System.out.print(" ");

				}
			}
			System.out.println();
		}
	}
}
