//
//  main.cpp
//  LAB 9
//
//  Created by jana hegazy on 12/05/2023.
//
#include <iostream>
#include "hash.h"
#include "BST.h"
using namespace std;
int main()
{
    BinaryST b;
       BinaryST *root = nullptr;
           root = b.insertValue(root, 9); //creates the first node of the tree and the root points to this first node which stores the value 5
           b.insertValue(root, 11);    //create new nodes on the correct side depending on the value, 11 would go to the right for the root node 9 since it is greater.
           b.insertValue(root, 18);
           b.insertValue(root, 3);
           b.insertValue(root, 4);
           b.insertValue(root, 12);
           b.insertValue(root, 3);
           b.insertValue(root, 4);
           b.insertValue(root, 2);
           b.insertValue(root, 20);
      BinaryST *temp = b.search(root, 12);
       //temp will either point to Null showing that the search function has went through the entire tree and not found the value or it will point to the node that stores the value we are searching for.
       
       if(temp)        //checks if the temp pointer is not pointing to NULL, then the value has been found
           cout<<"Value found"<<endl;
       else
           cout<<"value not found"<<endl;
       cout<<endl;
    
    hashTable hash;
    hash.insertVal(1);
    hash.insertVal(4);
    hash.insertVal(7);
    hash.insertVal(1);
    hash.insertVal(5);
    hash.insertVal(2);
    hash.insertVal(4);
    hash.insertVal(1);
    hash.insertVal(3);
    hash.insertVal(5);
    hash.printHash();
    
}
