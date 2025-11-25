// COMSC210 | Lab 36 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    StringBinaryTree tree; 

    tree.insertNode("A");
    tree.insertNode("B");
    tree.insertNode("C");
    tree.insertNode("D");
    tree.displayInOrder();
    cout << endl << endl; 
    tree.remove("C");
    tree.displayInOrder();

    return 0;
}