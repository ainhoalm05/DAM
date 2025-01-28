#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */
#define MAX_TITULO 80
#define MAX_AUTORES 50
typedef enum{
    FICCION,
    POESIA,
    NO_FICCION,
    TEATRO,
    ENSAYO
}Categorias;

typedef struct{
    int id;
    char titulo_libro[MAX_TITULO];
    char autor_libro[MAX_AUTORES];
    float precio_libro;
    Categorias categoria;
    int cantidadDispo;
}Biblioteca;//IMPORTANTE SEGUIR EL ORDEN DE LOS DATOS DEL ARRAY DE LIBROS

const char* obtenerNombreCategoria(Categorias categoria) {
//declaro una variable constante dado que el valor de las categorias no va a cambiar en nungun caso
//y lo hago en una funcion para poder reutilizarla en todos los printf de las categorias y para la funcion de buscar por categorias
    switch (categoria) {
    case FICCION: return "FICCION";
    case POESIA: return "POESIA";
    case NO_FICCION: return "NO_FICCION";
    case TEATRO: return "TEATRO";
    case ENSAYO: return "ENSAYO";
    default: return "No hay esa categoria";
    }
}
const Categorias  stringToEnum(char categoria[30]) {
//declaro una variable constante dado que el valor de las categorias no va a cambiar en nungun caso
//y lo hago en una funcion para poder reutilizarla en todos los printf de las categorias y para la funcion de buscar por categorias

    if (strcmp(categoria,"FICCION")==0) return FICCION;
    else if (strcmp(categoria,"POESIA")==0) return POESIA;
    else if (strcmp(categoria,"NO_FICCION")==0) return NO_FICCION;
    else if (strcmp(categoria,"TEATRO")==0) return TEATRO;
    else if (strcmp(categoria,"ENSAYO")==0) return ENSAYO;
    else {
        printf("ERROR");
    }
}
/*PRINTEA LA INFORMACION DE LOS LIBROS*/



void imprimirLibro(const Biblioteca * const catalogo);   
/*IMPRIME TODA LA BIBLIOTECA*/
void mostrarLibros( Biblioteca *  catalogo, int * total_libros); 
/*IMPRIME EL LIBRO CORRESPONDIENTE AL ID QUE INTRODUCE EL USUARIO*/
void buscarId(const Biblioteca * const catalogo, int id, int * total_libros);
/*AUMENTA LA DISPONIBILIDAD DEL LIBRO QUE ELIJA EL USUARIO*/
void aumentarstock(Biblioteca *  catalogo, int id, int cantidad_aumentar,const int * total_libros);
/*MUESTRA LOS LIBROS DE LA MISMA CATEGORIA*/
void mostrarLibrosCategoria(const Biblioteca * const catalogo, const char* categoria, int * total_libros);
/*MUESTRA LOS LIBROS DE UN AUTOR*/
void mostrarLibrosAutor(const Biblioteca * const catalogo, char * autor, int * total_libros);
/*FUNCION PARA INICIALIZAR UN LIBRO*/
Biblioteca inicializarLibro(const int id, char * titulo_libro,const char * autor_libro,const float precio_libro,Categorias categoria,const int cantidadDispo, int * total_libros);//Le pasamos todos los parametros que maneja un libro
/*AÑADIR UN LIBRO AL CATALOGO*/
void añadirlibro(Biblioteca ** catalogo, int * total_libros);

int main(int argc, char ** argv){
    int total_libros=0;//Variable para almacenar todos los libros(nos servira tmbn para el ID)
    Biblioteca * libros=(Biblioteca*)malloc(sizeof(Biblioteca)*40); //Guardamos los libros en memoria dinamica
                                                                    //Cojemos el tamaño en bytes de la estructura de Biblioteca y lo mutiplicamos por 40 (los libros que hay en la biblioteca)
        libros[0] = inicializarLibro(1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10,&total_libros);//&total_libros: suma los libros a la variable;
        libros[1] = inicializarLibro(2, "1984", "George Orwell", 12.49, FICCION, 5,&total_libros);
        libros[2] = inicializarLibro(3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8,&total_libros);
        libros[3] = inicializarLibro(4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12,&total_libros);
        libros[4] = inicializarLibro(5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7,&total_libros);
        libros[5] = inicializarLibro(6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9,&total_libros);
        libros[6] = inicializarLibro(7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6,&total_libros);
        libros[7] = inicializarLibro(8, "The Odyssey", "Homer", 17.49, FICCION, 4,&total_libros);
        libros[8] = inicializarLibro(9, "Ulysses", "James Joyce", 25.00, FICCION, 2,&total_libros);
        libros[9] = inicializarLibro(10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3,&total_libros);
        libros[10] = inicializarLibro(11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11,&total_libros);
        libros[11] = inicializarLibro(12, "The Iliad", "Homer", 18.50, FICCION, 7,&total_libros);
        libros[12] = inicializarLibro(13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15,&total_libros);
        libros[13] = inicializarLibro(14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20,&total_libros);
        libros[14] = inicializarLibro(15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13,&total_libros);
        libros[15] = inicializarLibro(16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6,&total_libros);
        libros[16] = inicializarLibro(17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5,&total_libros);
        libros[17] = inicializarLibro(18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8,&total_libros);
        libros[18] = inicializarLibro(19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4,&total_libros);
        libros[19] = inicializarLibro(20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14,&total_libros);
        libros[20] = inicializarLibro(21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6,&total_libros);
        libros[21] = inicializarLibro(22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8,&total_libros);
        libros[22] = inicializarLibro(23, "Othello", "William Shakespeare", 10.99, TEATRO, 7,&total_libros);
        libros[23] = inicializarLibro(24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5,&total_libros);
        libros[24] = inicializarLibro(25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4,&total_libros);
        libros[25] = inicializarLibro(26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10,&total_libros);
        libros[26] = inicializarLibro(27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9,&total_libros);
        libros[27] = inicializarLibro(28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3,&total_libros);
        libros[28] = inicializarLibro(29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15,&total_libros);
        libros[29] = inicializarLibro(30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10,&total_libros);
        libros[30] = inicializarLibro(31, "Paradise Lost", "John Milton", 12.00, POESIA, 7,&total_libros);
        libros[31] = inicializarLibro(32, "Beowulf", "Anonymous", 15.00, POESIA, 5,&total_libros);
        libros[32] = inicializarLibro(33, "ENSAYOs", "Michel de Montaigne", 20.00, ENSAYO, 4,&total_libros);
        libros[33] = inicializarLibro(34, "Self-Reliance and Other ENSAYOs", "Ralph Waldo Emerson", 9.00, ENSAYO, 9,&total_libros);
        libros[34] = inicializarLibro(35, "Civil Disobedience and Other ENSAYOs", "Henry David Thoreau", 7.50, ENSAYO, 11,&total_libros);
        libros[35] = inicializarLibro(36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8,&total_libros);
        libros[36] = inicializarLibro(37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5,&total_libros);
        libros[37] = inicializarLibro(38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12,&total_libros);
        libros[38] = inicializarLibro(39, "The Republic", "Plato", 16.00, ENSAYO, 6,&total_libros);
        libros[39] = inicializarLibro(40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10,&total_libros);

//Libro * catalogo=(Libro*)malloc(sizeof(Libro)*total_libros);
        if (argc==1){
            printf("Uso de biblioteca: \n\
        ./biblioteca mostrar\n\
                Para mostrar todo el catálogo de libros\n\
        ./biblioteca mostrar ID\n\
                Para mostrar el libro cuyo identificador es ID.\n\
        ./biblioteca stock ID cantidad\n\
                Para aumentar el stock del libro que indicas\n\
        ./biblioteca categoria\n\
                Muestra todos los libros de una categoria\n\
        ./biblioteca autor\n\
                Muestra los libros de un autor\n\
        ./biblioteca añadir\n\
                Para añadir un libro nuevo\n\
        "); //Instrucciones del programa
        }else if(argc==2){
            //Mostrar o añadir
            if(strcmp(argv[1],"mostrar")==0){
                mostrarLibros(libros,&total_libros); //Llamar a la funcion de mostrar
            }else if(strcmp(argv[1],"añadir")==0){
               añadirlibro(&libros,&total_libros);//Llamar a la funcion de añadir(sin asignacion porque es una funcion void)

                mostrarLibros(libros,&total_libros); //Llamar a la funcion de mostrar

            }
        }else if(argc==3){
            if(strcmp(argv[1],"mostrar")==0){
                int id_buscar;
                id_buscar=atoi(argv[2]);
                buscarId(libros,id_buscar,&total_libros);//Llamar a la funcion de mostrar
            }else if(strcmp(argv[1],"autor")==0){
                char autor_ingresado[MAX_AUTORES];
                // fgets(autor_ingresado, MAX_AUTORES, stdin);//nombreVariable, tamañoVariable, stdin(mandarlo al programa)
                // strcpy(autor_ingresado[MAX_AUTORES],argv[2]);
                mostrarLibrosAutor(libros,argv[2],&total_libros);//Llamar a la funcion de añadir
            }else if(strcmp(argv[1],"categoria")==0){
                mostrarLibrosCategoria(libros, argv[2],&total_libros);//Llamar a la funcion de añadir
            }
        }else if(strcmp(argv[1],"stock")==0){
            int id_aumentar;
            id_aumentar=atoi(argv[2]);
            buscarId(libros,id_aumentar,&total_libros);
            int aumento;
            aumento=atoi(argv[3]);

            aumentarstock(libros,id_aumentar-1,aumento,&total_libros);
            buscarId(libros,id_aumentar,&total_libros);//Llamar a la funcion de añadir
        }
/////////////
//FUNCIONES//
/////////////

void imprimirLibro(const Biblioteca * const catalogo){
//Meto todos los printf para reutilizar esta funcion en el resto de la practica y hacerlo mas legible
    printf("ID: %d\n", catalogo->id);
    printf("Título del libro: %s\n", catalogo->titulo_libro);
    printf("Autor del libro: %s\n", catalogo->autor_libro);
    printf("Precio del libro: %.2f\n", catalogo->precio_libro);
    printf("Categoría del libro: %s\n", obtenerNombreCategoria(catalogo->categoria));
        //tambien se puede llamar con %d,catalogo[i].categoria, pero imprime el numero de la categoria (porque las almacenamos en un enum)
    printf("Disponibilidad del libro: %d\n", catalogo->cantidadDispo);
}
/*IMPRIME TODA LA BIBLIOTECA*/
void mostrarLibros(const Biblioteca * const  catalogo, int * total_libros) {
    for (int i = 0; i < *total_libros; ++i) {
       imprimirLibro(&catalogo[i]);
   }
}
/*IMPRIME EL LIBRO CORRESPONDIENTE AL ID QUE INTRODUCE EL USUARIO*/
void buscarId(const Biblioteca * const catalogo, int id, int * total_libros){
    for(int i=0;i<*total_libros;i++){//recorre todos los libros
        if (catalogo[i].id==id){//si coincide el id que ha introducido el usuario con el de la biblioteca, lo imprime
        //Si el id del array de los libros es igual al id que ha introducido el usuario lo imprime
            imprimirLibro(&catalogo[i]);
        return;//se sale
    }
}
printf("Ese ID no esta en la Biblioteca\n");

}
/*AUMENTA LA DISPONIBILIDAD DEL LIBRO QUE ELIJA EL USUARIO*/
void aumentarstock(Biblioteca *  catalogo, int id, int cantidad_aumentar,const int * total_libros){
   //Se ejecuta despues de la funcion buscarId
 catalogo[id].cantidadDispo+=cantidad_aumentar;
   //El id que indicamos(buscarId), de ese id, la disponibilidad que tiene le sumamos la cantidad que ingresa el usuario para aumentarla

 printf("La cantidad que has añadido es: %d\n", cantidad_aumentar);
}
/*MUESTRA LOS LIBROS DE LA MISMA CATEGORIA*/
void mostrarLibrosCategoria(const Biblioteca * const catalogo, const char* categoria, int * total_libros){ 
// Es la forma de llamar a las categorias de la funcion (NO SE PUEDE LLAMAR A LA FUNCION) de obtenerNombreCategoria
//Nos indica si se ha encontrado el autor, si se encuentra sera = 1 y si no = 0
    int encontrado=0;
    for(int i=0;i<*total_libros;i++){
        if (strcmp(obtenerNombreCategoria(catalogo[i].categoria), categoria) == 0){
        //Compara la entrada de texto que introduce el usuario con las categorias que hemos definido en obtenerNombreCategoria
        //y si no hay ninguna diferencia imprime los libros que tengan la misma cagoria
            imprimirLibro(&catalogo[i]);
            encontrado=1;
        }
    }
    if(encontrado ==0){
       printf("Esa categoria no existe\n");

   } 
}

void mostrarLibrosAutor(const Biblioteca * const catalogo, char * autor, int * total_libros){
    int encontrado;//Nos indica si se ha encontrado el autor, si se encuentra sera = 1 y si no = 0
    for(int i=0;i<*total_libros;i++){//Recorre todos los libros
        encontrado=0;//Reinicio la variable
        for (int j = 0; j < (MAX_AUTORES - (strlen(autor)-1)); ++j){//Recorre el bucle los caracteres que tenga el nombre del autor caracter a caracter  y se resta uno para ignorar los saltos de linea 

         if (strncmp(catalogo[i].autor_libro+j, autor,strlen(autor)-1) == 0){//va a ir comparando caracter a caracter y cuando encuentre uno igual lo guarda
            encontrado=1;
        };

        if (encontrado==1){//aqui imprime todas las coincidencias
            imprimirLibro(&catalogo[i]);
            break;//Se sale y vuelve a recorrer el el bucle caracter a caracter
        };
    };
};
};
Biblioteca inicializarLibro(const int id, char * titulo_libro,const char * autor_libro,const float precio_libro,Categorias categoria,const int cantidadDispo, int * total_libros){//Le pasamos todos los parametros que maneja un libro
    Biblioteca libro;//Declaramos un libro de tipo libro para que a la hora de añadir un nuevo libro tenga la misma estructura que el resto 

    //Indicamos a que pertenecera cada parametro del nuevo libro
    libro.id=id;
    strcpy(libro.titulo_libro, titulo_libro);//strcpy para copiar el espacio del string 
    strcpy(libro.autor_libro, autor_libro);
    libro.precio_libro = precio_libro;
    libro.categoria = categoria;
    libro.cantidadDispo = cantidadDispo;

    *total_libros+=1;//Se suma uno al total de libros cuando se añada un nuevo libro(40+1) 
    return(libro);//La funcion devuelbe un libro

}
void añadirlibro(Biblioteca ** catalogo, int * total_libros){

    int id=*total_libros+1;//Declaracion de las viriables del libro nuevo
    char titulo_libro[MAX_TITULO];
    char autor_libro[MAX_AUTORES];
    float precio_libro;
    char categoria[30];
    int cantidadDispo;

    *catalogo=(Biblioteca*)realloc(*catalogo,sizeof(Biblioteca)*(*total_libros+1));//Esta funcion duplica el espacio de la biblioteca para añadir los libros nuevos (*total_libros + 1)
    Biblioteca libro;
    //Pide los datos del libro nuevo
    printf("Introduce el titulo del libro:\n");
    fgets(titulo_libro, MAX_TITULO, stdin);
    printf("Introduce el autor del libro:\n");
    fgets(autor_libro, MAX_AUTORES, stdin);
    printf("Introduce el precio del libro:\n");
    scanf("%f",&precio_libro);
    printf("Introduce el nombre de la categoria a la que pertenece el libro(FICCION, POESIA, NO_FICCION, TEATRO, ENSAYO):\n");
    scanf("%s",categoria);
    printf("Introduce la disponibilidad del libro:\n");
    scanf("%d",&cantidadDispo);


    (*catalogo)[*total_libros]=inicializarLibro(id,titulo_libro,autor_libro,precio_libro,stringToEnum(categoria),cantidadDispo,total_libros);
    //Declaramos un libro de tipo libro para que a la hora de añadir un nuevo libro tenga la misma estructura que el resto
    //Llamamos a la funcion de incializar libro con los datos que ha introducido el usuario

    //return(libro);//Devuelbe un libro

    
}//Liberamos la memoria dinamica al final del programa para que no ocupe tiempo de mas
        return 0;
//MENU
/*
       int eleccion;
       printf("Elige una opcion: \n\
         1. Mostrar todos los libros.\n\
         2. Mostrar el libro que coincida con el ID o un mensaje de error.\n\
         3. Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente.\n\
         4. Mostrar todos los libros de la categoría dada como argumento.\n\
         5. Mostrar los libros del autor dado como argumento.\n\
         6. Salir\n");
       scanf("%d",&eleccion);

       switch (eleccion){
       case 1:
         mostrarLibros(libros);
         break;
     case 2:
         int id_buscar;
         printf("Intduce el ID del libro: \n");
         scanf("%d",&id_buscar);
         busacarId(libros,id_buscar);
         break;
     case 3:
         int id_aumentar;
         printf("Introduce el ID del libro del que quiere aumentar el stock:\n");
         scanf("%d", &id_aumentar);
         busacarId(libros,id_aumentar);
         int aumento;
         printf("¿Qué cantidad quires añadir?:\n");
         scanf("%d",&aumento);

         aumentarstock(libros,id_aumentar-1,aumento);
         busacarId(libros,id_aumentar);

         break;
     case 4:
         //ALTERNATIVA GROTESCA
         // int categoria_ingresada;
         // printf("Introduce la categoria (FICCION(1), POESIA(2), NO_FICCION(3), TEATRO(4), ENSAYO(5))\n");
         // scanf("%d", &categoria_ingresada);
         // mostrarLibrosCategoria(libros, obtenerNombreCategoria(categoria_ingresada-1));

         //ALTERNATVA ELABORADA
             char categoria_ingresada[MAX_TITULO];
             printf("Introduce la categoria (FICCION, POESIA, NO_FICCION, TEATRO ENSAYO)\n");
             scanf("%s", categoria_ingresada);
             mostrarLibrosCategoria(libros, categoria_ingresada);
             break;
         case 5:
             char autor_ingresado[MAX_AUTORES];
             printf("Introduce el autor: \n");
         scanf(" ");//Para que el fgets ignore el enter
         fgets(autor_ingresado, MAX_AUTORES, stdin);//nombreVariable, tamañoVariable, stdin(mandarlo al programa)
         mostrarLibrosAutor(libros,autor_ingresado);
         break;
         case 6:
            
         break;
     case 7:
         printf("Saliendo...\n");
         break;
     default:
         printf("Introduce un numero del 1-6 \n");
         break;
     }


     return 0;
*/
    }



