#include <stdio.h>
#include <string.h>
 
struct Livros {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   id_livro;
};

/* declaração da função */
void printLivro( struct Livros *livro );

int main( ) {

   struct Livros Livro1;        /* Declarando Livro1 do tipo Livro */
   struct Livros Livro2;        /* Declarando Livro2 do tipo Livro */
 
   /* especificações do livro 1 */
   strcpy( Livro1.titulo, "Título genérico");
   strcpy( Livro1.autor, "Blog Trybe"); 
   strcpy( Livro1.assunto, "Um livro bem genérico");
   Livro1.id_livro = 6495407;

   /* especificações do livro 2 */
   strcpy( Livro2.titulo, "Outro título genérico");
   strcpy( Livro2.autor, "Blog Trybe 2");
   strcpy( Livro2.assunto, "Mais um livro bem genérico");
   Livro2.id_livro = 6495700;
 
   /* mostrando informações do Livro1 passando o endereço da memória */
   printLivro( &Livro1 );

   /* mostrando informações do Livro2 passando o endereço da memória */
   printLivro( &Livro2 );

   return 0;
}

void printLivro( struct Livros *livro ) {
   printf( "Livro titulo : %s\n", livro->titulo);
   printf( "Livro autor : %s\n", livro->autor);
   printf( "Livro assunto : %s\n", livro->assunto);
   printf( "Livro id_livro : %d\n", livro->id_livro);
}