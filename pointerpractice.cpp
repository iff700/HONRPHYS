#include <iostream>
using namespace std;
int main() {
  double* p1=new double(3.14);
  double* p2=p1;
  //Note that putting in double* p2=&p1 will not work because p1 is already 
  //an address. Adding the & is only necessary to find the address of a defined
  //variable, like double i=3.14. Then you would need &i to find the address.
  cout<<"p1 points at "<<p1<<endl;
  cout<<"p2 points at "<<p2<<endl;

  return 0;
}
