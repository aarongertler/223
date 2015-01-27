// Notes through 1/26/15
// 
// Debugging: Make sure you know what your program is supposed to do!

// How to debug (3.4.3.2): 
//  Put in a breakpoint before things go bad
//  Use display to watch things go bad after
//  Step through program to find failure point
//  (and restart if you miss that point the first time around)
//  
//  For giant, complex bugs, breakpoint at the 1000th loop, then
//  2000th, 4000th, and so on, until the bug hits -- then whittle down

// valgrind and gdb should be main Zoo debuggers
// Common errors: uninitialized variables, missing bytes

// Why not just use printf to view output? 
// Clunky, requires code editing, won't tell you what you SHOULD be getting


//Bearing in mind that this is a bad idea, here is an example of how one might do it as well as possible:

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* initialize the application */
void
init(void)
{
    int x;

    x = *((int *) 0xbad1dea); /* if we are lucky, maybe the optimizer will remove it? */
}

int
main(int argc, char **argv)
{
    init();

#ifdef DEBUGGING_OUTPUT
    /*
     * this type of debugging output is not recommended
     * but if you do it anyway:
     *
     * 1. Use stderr, which flushes automatically.
     * 2. Be wary of buffered data on stdout.
     * 3. Wrap your debugging statement in an #ifdef,
     *    so it is not active by default.
     */
    fputs("Returned from init() in main()\n", stderr);
#endif

    return 0;
}


// Include in all programs: <stdio.h>, <assert.h>


















// 1/26/15 (pointers)

int
twiceAndThrice(int x, int *x2, int *x3) // ought to initialize values first...
{
  *x2 = x*2;
  *x3 = x*3;   // use pointers to return multiple values

  printf(%d %d\n)
}

int 
main(int argc, char **argv)
{
  int a;
  int b;
  int c;

  a = 5;
}

// pointer + integer = go forward in memory by int*x positions,
// where x = the number of bits in the pointer's former location
// 
// *x = "get the actual value that x is pointing to"

int a[5]; // declare array of 5 ints
*a = 12; // declare a itself to be 12

a[0] = 12;
a[1] = 5;


// basic multiply-c-by-2-type-loop
// note: ugly syntax here, won't actually work if you plug it in

main()
{
  int a[5];
  int :,
  for(i=-, i<5; i++){
    a[i] = 2*i
  }
  printf("%\n", maximum(4, a+)); // returns the max of the function
}


// the program below will probably cause bad things to happen

int *bad (void)
{
  int x;
  int +p;
  p = &x;
  return p;
}

// return an array (bad syntax on my part)
// 
// malloc = request memory location, set pointer there
// returns a pointer, or NULL if request fails

int *iota(int n)
{
  int *a; int i;
  a = malloc(sizeof(int)*n);
  for(i=0, i<n; i++){a[i]=i*i,}
    return a;
}






// Todos
// 
// Fix Filezilla issue
// What is Xlaunch? How does one-click launch happen?

// Set up Github for 223
// play around with gdb or ddd debugger


// 3.1.6 (pipe test output to new files)



// Visual Studio registration key:
// 6VPJ7-H3CXH-HBTPT-X4T74-3YVY7
// 
// Using VS for C programs:
// https://msdn.microsoft.com/en-us/library/bb384838.aspx





