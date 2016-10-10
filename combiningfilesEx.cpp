/*Main File*/
/*based on three other files: dotprod.cpp, scalarmult.cpp, and vectors.txt*/

#include <iostream>
//This next line allows us to access other files.
#include <fstream>
//Also need to include the dotprod.cpp program so we can access it in this code
#include "dotprod.cpp"
//Also include scalarmult.cpp
#include "scalarmult.cpp"
using namespace std;
int main() {

  //Declare vectors
  double vector1[3];
  double vector2[3];
  int scalar;

  //Open input file, that we will call "infile" in this program and its 
  //operations. Could call it anything, as long as we're consistent.
  ifstream infile;
  infile.open("vectors.txt");

  //Store and print vectors for the user.
  infile>>vector1[0]>>vector1[1]>>vector1[2];
  cout<<" Vector 1 is ("<<vector1[0]<<","<<vector1[1]<<","<<vector1[2]<<")"<<endl;
  infile>>vector2[0]>>vector2[1]>>vector2[2];
  cout<<" Vector 2 is ("<<vector2[0]<<","<<vector2[1]<<","<<vector2[2]<<")"<<endl;
  infile>>scalar;
  cout<<" The scalar is "<<scalar<<endl;

  //Close input file.
  infile.close();

  //Call "dot_prod" function from dotprod.cpp, using this code's variables
  //"vector1" and "vector2"
  dot_prod(vector1,vector2);

  //Call "scalar_mult" function from scalarmult.cpp, using this code's
  //variables "vector1" "vector2" and "scalar"
  scalar_mult(vector1,vector2,scalar);

  return 0;
}
