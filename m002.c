/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{

int x;
int y;
int z;
   
   x = *a;
   y = *b;
   z = *c;
      
if (x <= y && x <= z)
{
   *a = x;           //se x for o menor dos três, ocupará a posição a
   
      if (y <= z)
      {
         *b = y;     //se y for o segundo menor, ocupará a posição b
         *c = z;     //se z for o maior, ocupará a posição c
      }
   
      else
      {
         *b = z;     //caso contrário, y é o maior, então y ocupará a posição c
         *c = y;
      }
}
         
	else 
      
	if (y <= x && y <= z)
	{
		*a = y;
		
		if (x <= z)
		{
			*b = x;
			*c = z;
		}
		
		else
		{
			*b = z;
			*c = x;
		}
	}
	
	else
	{
		*a = z;
		
		if (x <= y)
		{
			*b = x;
			*c = y;
		}
		
		else
		{
			*b = y;
			*c = z;
		}
	}	
}
  

   
/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
