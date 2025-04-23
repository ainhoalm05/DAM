
public class Prueba3 {
	public static void main(String[] args) {
		int s=0;
		int n[];
		n = new int[5];
		boolean suspensos;
		suspensos=false;
		
		for (int i=0;i<5;i++)
		{
		System.out.println("Introduzca nota (de 0 a 10): ");
		n[i]=i+2;
		if (n[i]<5) {
			suspensos=true;
			s++;
		}
		}
		if (suspensos)
			System.out.println("Hay alumnos suspensos "+s);
		else
			System.out.println("No hay suspensos");
		}
	}

