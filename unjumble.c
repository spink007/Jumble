#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char**argv)
{

  int fact();
  int len;
  int prod;

  if (argc < 2)
    {
      fprintf(stderr, "unjumble what?\n");
      exit(0);
    }
  else
    {
      len = atoi(argv[1]);
     
      printf("The number of columns is %d\n", len);
      prod = fact(len);

      if (prod < 0)
	  exit(-1);
      
	
      else
	printf("The number of rows is %d\n", prod);
    }
}



int fact(int number)
{
 
if (number < 0)
    {
      printf("Can't take factorial of a negative number!\n");
      // return -1;
      exit(0);
    }
 
  if (number == 0)
    return 1;

  else return (number * (fact(number - 1)));


}

	
	
	
