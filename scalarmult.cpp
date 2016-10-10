/*Note: this is meant for use with combiningfilesEx.cpp*/
/*Will not work on its own*/
/*To call this program, put #include "scalarmult.cpp" before the body of the 
 host code. Then call it in the code body using this command:               
 scalar_mult(name of first vector, name of second vector, name of scalar)*/


#include <iostream>
using namespace std;

//First, define a program called scalar_mult, which uses three inputs, which
//are input in the full program.
double scalar_mult(double v1[3],double v2[3],double s) {
  double s1[3];
  double s2[3];

  //Define each term of the new vetors, s1 and s2, then list them.
  s1[0]=v1[0]*s,s1[1]=v1[1]*s,s1[2]=v1[2]*s;
  cout<<" The scalar multiple is ("<<s1[0]<<","<<s1[1]<<","<<s1[2]<<")"<<endl;

  s2[0]=v2[0]*s,s2[1]=v2[1]*s,s2[2]=v2[2]*s;
  cout<<" The scalar multiple is ("<<s2[0]<<","<<s2[1]<<","<<s2[2]<<")"<<endl;

  return 0;
}
