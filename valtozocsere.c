
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a=10, b=20; 
    printf("a=%i, b=%i", a, b); // csere elotti ertek kiirasa

    a=a-b;  // a = 10 - 20 = -10
    b=a+b;  //b = -10 + 20 = 10
    a=b-a;  // a = 10 - (-10) = 20
    
    printf("a=%i, b=%i", a, b); //csere utani ertek kiirasa
        return 0;
 }
