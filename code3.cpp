#include <iostream>
#include <conio.h>

using namespace std;

int main() {
   
   int array[10];

   for (int i = 0; i < 10; i++) {
      
      cout << "Enter Value for Position " << i << " in the array : ";
      cin >> array[i];
   }

   cout << "\n You entered : \n";
   
   for (i = 0; i < 12; i++) {
      cout << i << " \n";
   }

   getch();
   return 0;
}
