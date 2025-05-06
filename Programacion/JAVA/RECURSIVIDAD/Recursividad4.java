import java.util.Scanner;

public class Ejercicio4 {

	public static int esBinario(int numero) {
		if (numero == 0 || numero == 1) {
			return 1; 
		}
		
		int digito = numero % 10;
		
		if (digito != 0 && digito != 1) {
			return 0; 
		}
		
		return esBinario(numero / 10); 
	}
	
	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);

	        System.out.print("Introduce un número: ");
	        int numero = scanner.nextInt();
	        int resultado = esBinario(numero);
	        
	        if (resultado == 1) {
	            System.out.println("El numero " + numero + " es binario.");
	        } else {
	            System.out.println("El numero " + numero + " no es binario.");
	        }

	        scanner.close();
	    }

	}


