#include <iostream>
#include <fstream>
using namespace std;
int main() {

  ofstream myfile;
  //Following command creates/opens a txt file called example.txt.
  myfile.open("example.txt");
  //This command tells emacs to write "write some junk" in the created file.
  myfile<<"write some junk.";
  //This ends the editing and closes and saves the file.
  myfile.close();

  return 0;
}
