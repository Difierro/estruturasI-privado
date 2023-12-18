#include <stdio.h>
#include <string.h>
 
struct Livros {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   id_livro;
};
 
void printLivro( struct Livros livro );

int main( ) {

   struct Livros Livro1;        /* Declaramos Livro1 do tipo Livro */
   struct Livros Livro2;        /* Declaramos Livro2 do tipo Livro */
 
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
 
   /* mostrando as informações do livro 1 */
   printLivro( Livro1 );
   
   /* mostrando as informações do livro 1 */
   printLivro( Livro2 );

   return 0;
}

void printLivro( struct Livros livro ) {
   printf( "Livro titulo : %s\n", livro.titulo); 
   printf( "Livro autor : %s\n", livro.autor);
   printf( "Livro assunto : %s\n", livro.assunto);
   printf( "Livro id_livro : %d\n", livro.id_livro);
}
// na funcao acima, temos livro, indicando q o livro1 ou 2 devem ser especificado no argumento, n no parametro