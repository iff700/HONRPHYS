#include <iostream>

using namespace std;

int main() {
  int n=0, m=0;

  while(n<10) {
    cout<<"n is "<<n<< ": ";
    m=0;

    while(m<=n) {
      cout<<m;
      m++;
    }
    cout<<endl;
    n++;
  }

  for(int n=0; n<10; n++) {
      cout<<"n is "<<n<<": ";

      for(int m=0; m<=n; m++) {
	cout<<m; }

      cout<<endl;
  }

  return 0;
}
