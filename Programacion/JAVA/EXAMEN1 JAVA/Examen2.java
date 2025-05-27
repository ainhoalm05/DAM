package Package;

import java.util.Scanner;

public class Examen2 {

	public static void main(String[] args) {
		menu();

	}

	public static void menu() {
		Scanner entrada=new Scanner(System.in);
		
		int decision=0;
		
		do {
			System.out.println("1. Suma ");
			System.out.println("2. Resta ");
			System.out.println("3. Multiplicacion ");
			System.out.println("4. Division ");
			System.out.println("5. Numero par");
			System.out.println("6. Numeros primos");
			System.out.println("7. Tabla de multiplicar");
			System.out.println("8. Calcular segundos");
			System.out.println("8. Salir");
			
			decision=entrada.nextInt();
			entrada.nextLine();
			
			if(decision <10) {
				switch (decision) {
				case 1:
					sumar();
					break;
				case 2:
					restar();			
					break;
				case 3:
					multiplicar();
					break;
				case 4:
					dividir();
					break;
				case 5:
					numeroPar();
					break;
				case 6:
					numerosPrimos();
					break;
				case 7:
					tablaMultiplicar();
					break;
				case 8:
					calcularSegundos();
					break;
				case 9:
					System.out.println("Saliendo...");
					entrada.close();	
					break;
				default:
					System.out.println("Parametro incorrecto");
					break;
				}
			}
		}while (decision !=10);
		entrada.close();
	}
	
		public static void sumar() {
			@SuppressWarnings("resource")
			Scanner entrada=new Scanner(System.in);

			System.out.print("Primer numero: ");
			double n1=entrada.nextDouble();
			System.out.print("Segundo numero: ");
			double n2=entrada.nextDouble();
			double sumar=n1+n2;
			System.out.println(sumar);
			
			entrada.nextLine();
			
		}
		public static void restar() {
			@SuppressWarnings("resource")
			Scanner entrada=new Scanner(System.in);

			System.out.print("Primer numero: ");
			double n1=entrada.nextDouble();
			System.out.print("Segundo numero: ");
			double n2=entrada.nextDouble();
			double restar=n1-n2;
			System.out.println(restar);
			
			entrada.nextLine();
			
			
		}
		public static void multiplicar() {
			@SuppressWarnings("resource")
			Scanner entrada=new Scanner(System.in);

			System.out.print("Primer numero: ");
			double n1=entrada.nextDouble();
			System.out.print("Segundo numero: ");
			double n2=entrada.nextDouble();
			double multiplicar=n1*n2;
			System.out.println(multiplicar);
			
			entrada.nextLine();
		}
		public static void dividir() {
			@SuppressWarnings("resource")
			Scanner entrada=new Scanner(System.in);

			System.out.print("Primer numero: ");
			double n1=entrada.nextDouble();
			System.out.print("Segundo numero: ");
			double n2=entrada.nextDouble();
			double dividir=n1/n2;
			System.out.println(dividir);
			
			entrada.nextLine();
		}
		
		public static void numeroPar() {
			Scanner entrada=new Scanner(System.in);
			System.out.print("Introduce un numero: ");
			int num=entrada.nextInt();
			if (num%2==0) {
				System.out.println(num+" Par");
			}else {
				System.out.println(num+" Impar");
			}
		}
		public static void numerosPrimos() {
			Scanner entrada=new Scanner(System.in);
			System.out.println("Introduce el limite: ");
			int num=entrada.nextInt();
			
			  for (int i = 2; i <= num; i++) {
		            boolean esPrimo = true;

		            for (int j = 2; j < i; j++) {
		                if (i % j == 0) {
		                    esPrimo = false;
		                    break;
		                }
		            }

		            if (esPrimo) {
		                System.out.println(i);
		            }
		        }
			}
		
		
		public static void tablaMultiplicar() {
			Scanner entrada=new Scanner(System.in);
			System.out.println("Introduce el numero de la tabla de multiplicar: ");
			int n=entrada.nextInt();
			for(int i=0;i<=10;i++) {
				int resultado=i*n;
				System.out.println(n+" x "+i+" = "+resultado);
				
			}
			
		}
		public static void calcularSegundos() {
			Scanner entrada=new Scanner(System.in);
	        System.out.print("Introduce los segundos para transformarlos: ");
	        int totalSegundos = entrada.nextInt();

	        int dias = totalSegundos / (24 * 3600);
	        totalSegundos %= (24 * 3600);
	        int horas = totalSegundos / 3600;
	        totalSegundos %= 3600;
	        int minutos = totalSegundos / 60;
	        int segundos = totalSegundos % 60;

	        System.out.println("Días: " + dias);
	        System.out.println("Horas: " + horas);
	        System.out.println("Minutos: " + minutos);
	        System.out.println("Segundos: " + segundos);
	    }
	}


