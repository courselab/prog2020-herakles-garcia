/* m011.c - Count words.
   This program takes the name of an ASCII text file passed as a command 
   line argument, and outputs the number of words in this file. A word is 
   a sequence of alphabetic characters delimited by blanks. A sample text 
   file i011.txt is provided for convenience (should you desire to test with
   another text file, make sure it is in pure ASCII format, not UTF-8 or 
   other milti-byte format.
   E.g.
      command line    : m011 i011.txt
      expected output : 98
   Directions:
      Please, edit function wordcount();
      do no not change function main().
 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m011 i011.txt\n"

/* Return the number of words in ascii text file 'filename'.*/

int wordcount (char *filename)
{
    FILE *fp;
    int n;
    int count = 0; //contagem de palavras
    int word = 0; //variável auxiliar para checar se é palavra ou espaço 
    
    fp = fopen (filename, "r");
    
    n = fgetc(fp);
   
     while (1) //loop para checar até chegar ao final do arquivo
     {
         if ((word == 0 && n == 32) || (word == 0 && n == 10))
            
            /* Se o caractere anterior não for um espaço ou quebra de linha, mudar a variável de checagem para 1
            e adicionar 1 à contagem de palavras. */
               
         {
            count++;
            word = 1;
         }

            /* Se o caractere anterior for um espaço ou quebra de linha, mudar a variável de checagem para 0 de novo,
            até chegar ao próximo espaço, quebra de linha ou fim do arquivo. */
            
         if ((word == 1 && n != 32) || (word == 1 && n != 10))
         {
           word = 0;
         }
        
        if ((n = EOF)
         {
           break;
         }
        
     }
    
  return count;
  fclose(fp);
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  int g;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = wordcount (argv[1]);

  printf ("%d\n", n);

  return 0;
}
