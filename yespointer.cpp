#include <iostream>
using namespace std;
int main() {
  int i=10;
  int* p=&i;
  cout<<"i="<<i<<" and *p="<<*p<<"\n";

  i=5;
  cout<<"i="<<i<<" and *p="<<*p<<"\n";
  //Notice that in this code, both i and *p are now five.
  *p=1;
  cout<<"i="<<i<<" and *p="<<*p<<"\n";
  //Now, they are both 1. Both change whenever one is changed.
  //This is different from doing i=10, i=j, because that just sets j's inital
  //value. Here, both variables are linked, so they change together.
  int k=6.5;
  int* n=&k;
  cout<<"k="<<k<<" and *n="<<*n<<"\n";
  double j=7.563;
  double* o=&j;
  cout<<"j="<<j<<" and *o="<<*o<<"\n";
  return 0;
}
