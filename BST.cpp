#include "BST.h"

void BST::inOrder( node* root ) {
    if ( root != NULL ) {
        inOrder( root->left );
        cout << root->string << " " << root->data << endl;
        inOrder( root->right );
    }
}


BST::BST( ) {
    theRoot = NULL;
}


void BST::print( ) {
    inOrder( theRoot );
    cout << endl;
}


int BST::findSmallest( ) {
    node* temp = theRoot;
    if ( temp == NULL ) {
        cout << "Error - tree is empty!" << endl;
        cout << "Returning 0." << endl;
        return 0;
    }
    while ( temp->left != NULL ) {
        temp = temp->left;
    }
    return temp->data;
}




node* BST::find( string word ) {
    node* temp = theRoot;

    while ( temp != NULL ) {
        if ( word == temp-> string ){
            temp->data ++;
          return temp;
          }
        else if ( word < temp->string ) 
            temp = temp->left;
        else
            temp = temp->right;
    }
    if(temp == NULL){
      BST::insert(word, 1);
      distinctWords ++;
    }
  return temp;
}


void BST::insert( string word, int value ) {
    node* add = new node;
    add->data = value;
    add->string = word;
    add->left = NULL;
    add->right = NULL;

    if ( theRoot == NULL ) {
        theRoot = add;
        return;
    }

    node* prev = theRoot;
    node* temp;

    if ( word < theRoot->string )
        temp = prev->left;
    else
        temp = prev->right;

    while ( temp != NULL ) {
        prev = temp;
        if ( word < temp->string )
            temp = temp->left;
        else
            temp = temp->right;  
    }

    if ( word < prev->string )
        prev->left = add;
    else
        prev->right = add;
}

