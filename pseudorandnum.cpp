#include <iostream>
#include <math.h>
using namespace std;

// this code is stolen from the book numerical recipes for fortran
// it relies on randomness generated from overflow of memory locations
// and is a pseudo random number generator
const int a = 7141;
const int c = 54773;
const int mmod=256200;
double getFlatRandom(int& inew) { //Removing that & makes code not work
  //All results go into first bin of histogram
  double mranflat = 0.;
  inew = inew%mmod;
  double aa = double(inew)/double(mmod);
  mranflat=aa;
  inew = a*inew+c;
  return mranflat;
}
// Learn some properties by filling and then displaying a histogram
int main() {
  int num;
  cout << "Enter the number of loop iterations: ";
  cin >> num;
  int inew = 7777;  // This is the "seed" for the random number generator
  // Each seed gives a guaranteed distribution, hence the pseudo.
  // Seed should be odd and large
  // we will put the results from the call into a histogram that we can look at
  // to learn some of its properties. This histogram has 10 bins. 
  int histo[10] = {0,0,0,0,0,0,0,0,0,0};

  double atmp;
  for (int i = 0; i<num; i++){
    atmp=getFlatRandom(inew);  // call the random number generator
    histo[int(atmp*10)]++;  // Add up results into histogram
  }

  // print the histogram to the screen
  for (int i = 0; i<10; i++){
    cout<<i<<": ";
    for (int j=0; j<int((double(100*histo[i])/double(num))+0.5); j++) {
      cout << "=";
    }
    cout << endl;
  }
  //This is supposed to list the first 10 nubers generated, but it doesnt work.
  /*cout<<"The first 10 numbers generated are:"<<endl;
  for (int k=0; k<10; k++) {
    atmp=getFlatRandom(inew);
    cout<<int(atmp*10)<<endl;
    }*/

  return 0;
}
