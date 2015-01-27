#include <stdio.h>  // boilerplate for any input/output (C declarations for I/O library)
#include <assert.h> // lets you test if conditions are true (e.g. assert(2+2 == 5);)


/* testing other comment style here */

int
main(int argc, char **argv)   // declares main function -- every program has one
                              // takes two arguments: argc = number of args, while **argv provides a pointer
{
  int i;  // i holds an int

  puts("Now I will count from 1 to 10");
  for(i = 1; i <= 10; i++) {   
    printf("%d\n", i);           // body of loop also needs curly braces!
  }                              // this gives us decimal-formatted integers plus newline

  return 0;  // This will tell the OS the program worked if we get this far
}            // We could also return some kind of error message here in case of failure

                  
