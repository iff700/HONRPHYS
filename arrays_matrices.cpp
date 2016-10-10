#include <iostream>
using namespace std;
int main() {
  /************************************\
   *                                  *
   *              Arrays              *
   * This program demonstrates arrays *
   *                                  *
  \************************************/

  int ii[3]={1,2,3};
  int j=0;

  while (j<3) {
    cout<<" ii of "<<j<<" is "<<ii[j]<<endl;
    j++;
  }
  //The following lines of code create a 2 by 3 matrix with a top row of 1,2,3
  //and a bottom row of 4,5,6. Note: "0" refers to the first line/column.
  int LL[2][3]={1,2,3,4,5,6};
  j=0;
  int k;
  //These while statements use j to define the rows and k to define the columns
  //Eg. j starts at zero, then k loops through 0-2 to list the first row.
  //Then j increases to 1 to look at second row, and the k loop repeats.
  while (j<2) {
    k=0;
    while (k<3) {
      cout<<" LL of "<<j<<" "<<k<<" is "<<LL[j][k]<<endl;
      k++;
    }
    j++;
  }

  return 0;
}
