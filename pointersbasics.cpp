#include <iostream>
using namespace std;
int main() {
  int i=10;
  cout<<"The memory address of i is "<<&i<<"\n";
  cout<<"The data stored at memory adress "<<&i<<" is "<<i<<"\n";
  //Think of the memory address as a mailbox. It's where the data is stored 
  //and the data are the contents of the mailbox.
  //In this example, we picked an empty mailbox, gave it a nickname "i",
  //told the computer to store a n umber in that mailbox, specifically 10.
  int* p=&i;
  cout<<"The value of p is"<<p<<"\n";
  cout<<"We say that p 'points at' the memory location referenced by address "<<p<<"\n";
  cout<<"The data stored at memory address "<<p<<" is "<<*p<<"\n";

  return 0;
}
