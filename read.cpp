#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  ofstream myOutFile("test.txt", ios::app);
  if (!myOutFile) {
    cerr << "Output file can not be opened" << endl;
    exit(0);
  }
  myOutFile << "This is some even newer stuff\n";
  myOutFile.close();

  ifstream myFile("test.txt");
  if (!myFile) {
    cerr << "Input file can not be opened" << endl;
    exit(0);
  }
  while (getline(myFile, line)) {
    // Append something to an array
    cout << line << endl;
  }
  myFile.close();

  return 0;
}
