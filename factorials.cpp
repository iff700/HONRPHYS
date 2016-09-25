#include <iostream>
using namespace std;
int main() {
  int factorial=1;
  for(int n=1; n<=10; n++) { 
    for(int m=1; m<=n; m++) {
      factorial*=m;
    }
    cout<<"Factorial of "<<n<<" = "<<factorial<<endl;
    factorial/=factorial;
  }
  return 0;
}
