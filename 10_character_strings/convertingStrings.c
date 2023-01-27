#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /*
    toupper()
    tolower()
    */

   char buf[] = "Hello";

   for (int i = 0; (buf[i] = (char)toupper(buf[i])) != '\0'; ++i);

   printf("%s\n", buf);




   /*
   Converting strings to numbers
   #include <stdlib.h>
    atof()
    atoi()
    atol()
    atoll()
    strtod()
    strtof()
    strtold()
   */
  double value = 0;
  char str[] = "3.5 2.5 1.26";
  char *pstr = str;
  char *ptr = NULL;

  while(true)
  {
    value = strtod(pstr, &ptr); //convert starting at pstr
    if(pstr == ptr)             // pstr stored if no convertion
    {
        break;                  // ... so we are done
    }
    else{
        printf("  %f", value);   //output the resultant value
        pstr = ptr;              //store start fot nest convertion
    }
  }



    return 0;
}
