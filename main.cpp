#include <iostream>;
#include <fstream>;
#include "BST.h";
using namespace std;


int main( ) {
 
  
  string file;
  BST tree;
  node* find;
  int distinctWords;
  int total =0;
  
  cout<< "Welcome to this program."<< endl;
  cout<< "Please enter a file name: "<< endl;
  cin>> file;
  
  ifstream input;
  
  input.open( file );

  if(!input){
    cout<< "File not found!"<< endl;
    exit( 1 );
  }

  ofstream output;
  string word;
  string string;


  while( input >> string){
    distinctWords = tree.distinctWords;
    tree.find(string);
    total++;
    }
  
  cout << "Total words in the file: " << total << endl;
  cout << "Total distinct words in the file: " << distinctWords << endl;
  tree.print();
  input.close();
}