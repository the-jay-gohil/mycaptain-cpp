#include <stdio.h> 
  
int main() 
{ 
    int integerType; 
    char charType; 
    float floatType; 
    double doubleType; 
  
    printf("Size of int : %ld\n", sizeof(integerType)); 
    printf("Size of char : %ld\n", sizeof(charType)); 
    printf("Size of float : %ld\n", sizeof(floatType)); 
    printf("Size of double is: %ld\n", sizeof(doubleType)); 
  
    int a, b, mul;
    
    cout << "Enter two integers: ";
    cin >> a >> b;

    mul = a * b;
    cout << a << " * " <<  b << " = " << mul;     
  
    return 0; 
} 
