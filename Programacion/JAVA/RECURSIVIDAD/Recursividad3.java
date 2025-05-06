import java.util.Scanner;

public class Ejercicio3 {

	    public static void invertirNumero(int numero, int numeroInvertido) {
	        if (numero == 0) {
	            System.out.println("El número invertido es: " + numeroInvertido);
	            return;
	        }

	        int digito = numero % 10;
	        numeroInvertido = numeroInvertido * 10 + digito;
	        invertirNumero(numero / 10, numeroInvertido);
	    }

	    public static void main(String[] args) {
	        Scanner entrada = new Scanner(System.in);
	        System.out.print("Introduce un número entero positivo: ");
	        int numero = entrada.nextInt();

	        if (numero < 0) {
	            System.out.println("Introduce un número: ");
	        } else if (numero == 0) {
	            System.out.println("El número invertido es: 0");
	        }
	         else {
	            invertirNumero(numero, 0);
	        }
	        entrada.close();
	    }
	}


