#include <iostream>
#include <stdio.h>
#include <stdlib.h>  /* gives acces to srand and rand functions */
#include <time.h>
using namespace std;

int main() {

  cout<<"Random Number: "<<rand()%100<<endl; /*Gives a number between [0,100)*/

  return 0;
}
