#include <iostream>

using namespace std;


// Node for use in the BinarySearchTree class
struct node
{
  public:
    string string;
    int data;
    node* left;
    node* right;
};


class BST
{
  private:
    // The root of the binary search tree.
    node* theRoot;

    void inOrder( node* root );


  public:
    BST( );

    void print( );

    int findSmallest( );

    node* find( string word );

    void insert( string word, int value );

    int distinctWords = 1;

    int totalNum( string n );
};
