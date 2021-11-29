#include <stdio.h>


int main( int argc, char**argv ) 
{
int fib[3] = {0,1};
int counter = 0;
  printf("The %dth Fibonacci number is:\n", atoi(argv[1]));
while ( counter < atoi(argv[1]) ) {

    fib[2] = fib[0] + fib[1];
    fib[0] = fib[1];
    fib[1] = fib[2];
    counter++;
}
printf("%d\n", fib[0]);
getchar();
  return 0;
}
