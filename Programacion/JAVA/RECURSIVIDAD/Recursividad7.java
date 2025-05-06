import java.util.Scanner;

public class Ejercicio7 {

    public static int calcularSecuencia(int n) {
        if (n == 1) {
            System.out.print("1");
            return 1;
        }

        int suma = calcularSecuencia(n - 1); 
        System.out.print("+" + n);
        return suma + n;
    }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("Introduce un número entero N mayor que cero: ");
        int n = entrada.nextInt();

            int suma = calcularSecuencia(n);
            System.out.println(" = " + suma + ")");
        

        entrada.close();
    }
}
