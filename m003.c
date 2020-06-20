/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{
    int i;
    int n;
    int primo;
    n=0;
    
    for (i=2; i<=(a/2); i++) //o menor divisor possível de um número não-primo n é 2. Logo, o maior divisor possível será n/2, de modo que não é necessário testar além desse valor.
    {
        if (a%i == 0)
        {
            n++;
            break;
        }
    }
    
    if (n == 0)
        {
        primo = 1;
        }
    else
        {
        primo = 0;
        }
 
 return primo;
 
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
