import java.util.Scanner;

public class sumarSecuencia {
	public static void main (String[] args) {
		int numero=0, resultado, digitos, total=0, temp=0;
		String frase="";
		Scanner entrada= new Scanner(System.in);
		
		System.out.println("Introduce numero >=0");
		numero=entrada.nextInt();
		while(numero>0) {
			digitos=0;
			resultado=0;
			temp=numero;
			
			while(temp>0) {
				resultado += temp%10;
				digitos+=1;
				temp/=10;
			}
			if(resultado==digitos) {
				frase+=numero+"+";
				total+=numero;
			}
			System.out.println("Introduce numero >=0");
			numero=entrada.nextInt();
		}
		frase+=numero+"=";
		System.out.println("El resultado es: "+frase+total);
		
		entrada.close();
	}
}
