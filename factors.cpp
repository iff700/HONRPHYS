#include <iostream>

using namespace std;
int main() {

  for(int n=1; n<=100; n++) {
    cout<<"The factors of "<<n<<" are: ";
    for(int m=1; m<=n; m++) {
      if(n%m==0) {
	cout<<m<<" "; }
    }
    cout<<endl;
  }

  return 0;
}
