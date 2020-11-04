#include <stdio.h> 
  
int main() 
{  
    int age;
    
    cout << "Let's see if you are eligible to vote..." << endl << endl;
    
    cout << "Enter your age : ";
    cin >> age;

    if(age > 18) {
        cout << endl << "You are eligible to vote!"
    } else {
       cout << endl << "Yor are ineligible to vote!"
    }
    
    cout << endl;
  
    return 0; 
} 
