#include <iostream>
using namespace std;

void passByValue(int a)
{
  a++;
}

void passByPointer(int *ptr)
{
  cout << "address stored in ptr: " << ptr << endl;
  *ptr = *ptr+1;
  (*ptr)++;
}

int main()
{
  int a = 5;
  cout << &a <<endl;

  // pointer and address it point to have to be of the same type
  int *b = &a; //b is a pointer it stores the address of a

  //* has twe meanings
  // use to declare the pointer
  //use to dereference the pointer
  //dereference - go to address stored in pointer and get the value at that address

  // address of b, address stored in b, value at address stored in b
  cout << &b << ", " << b << ", " << *b << endl; //*b prints 5

  a = 10; //what is the value of *b now? has it changed to 10?
  cout << &b << ", " << b << ", " << *b << endl; //*b prints 10

  int c = 20;
  b = &c; //change the address stored in b to the address of c (instead of b)
  cout << *b << endl; //prints 20

  int arrayA[5];
  cout << arrayA << endl; //it will print the address of the first element

  //functions
  passByValue(a);
  cout << a << endl; //prints 10, a is unchanged
  cout << "address stored in b: " << b << endl;
  passByPointer(b); //updates the value of the address stored in b
  cout << *b << endl; //prints 22 (20 was incremented twice)

  return 0;
}
