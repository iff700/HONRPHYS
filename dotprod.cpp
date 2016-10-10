/*Component of "combiningfilesEx.cpp"*/
/*Calculates the dot product of two three-component vectors*/
/*Note: will not work on its own because no vectors are defined*/
#include <iostream>
using namespace std;

double dot_prod(double v1[3],double v2[3]) {
  double dotdot;
  dotdot=v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];
  cout<<" The dot product is "<<dotdot<<endl;

  return 0;
}
