import java.util.Scanner;

public class Ejercicio1 {

    public static int contar(int n) {
        if (n < 10) {
            return 1;
        } else {
            return 1 + contar(n / 10);
        }
    }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("Introduce un número: ");
        int numero = entrada.nextInt();

        int cantidad = contar(numero);
        System.out.println("El número " + numero + " tiene " + cantidad + " dígitos.");
       

        entrada.close();
    }
}
