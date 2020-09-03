/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* Sort the first 'n' integers values in 'vector'. */

//algoritmo: bubble sort

void sort (int* vector, int n)
{
  int i, k, aux;                              //duas variáveis de iteração e auxiliar
  for (i = 0; i < n; i++)                     //repete até todos os elementos estarem ordenados
  {
    for (k = 0; k < n - i - 1; k++)           //ordena um elemento por vez
    {
      if (vector[k] > vector[k+1])            //compara o valor do k-ésimo elemento com o do k+1-ésimo
      {
        aux = vector[k];
        vector [k] = vector [k+1];
        vector [k+1] = aux;                   //se o elemento for menor que o próximo, trocar
      }
    }
  }
}

#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */
