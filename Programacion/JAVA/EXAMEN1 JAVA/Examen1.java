package Package;

import java.util.Scanner;

public class Examen1 {

	static int[] notas = null;

	public static void main(String[] args) {
		menu();
	}

	public static void menu() {
		Scanner entrada = new Scanner(System.in);
		int decision = 0;
		int[] notas = null;

		do {
			System.out.println("1. Introducir notas.");
			System.out.println("2. Media.");
			System.out.println("3. Aprobado.");
			System.out.println("4. Salir.");

			decision = entrada.nextInt();

			if (decision < 5) {
				switch (decision) {
				case 1:
					introducirNotas();
					break;
				case 2:
					calcularMedia();
					break;
				case 3:
					estaAprobado();
					break;
				case 4:
					System.out.println("Saliendo...");
					entrada.close();
					break;
				default:
					System.out.println("Parametro incorrecto");
					break;
				}

			}
		} while (decision >4);
		entrada.close();
	}

	public static void introducirNotas() {
		Scanner entrada = new Scanner(System.in);
		System.out.println("Cuantas notas vas a introducir: ");
		int n = entrada.nextInt();
		notas = new int[n];

		for (int i = 0; i < n; i++) {
			System.out.println("Introducir nota.");
			notas[i] = entrada.nextInt();
		}

	}

	public static void calcularMedia() {
		int suma = 0;
		for (int i = 0; i < notas.length; i++) {
			suma += notas[i];
		}
		double media = suma / notas.length;
		System.out.println("Media: " + media);
	}
	
	public static void estaAprobado() {
		for (int i = 0; i < notas.length; i++) {
			if(notas[i]>=5) {
				System.out.println("Estas aprobado.");
			}else {
				System.out.println("Estas suspenso.");
			}
		}
	}
}
