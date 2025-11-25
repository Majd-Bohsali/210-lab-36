// COMSC210 | Lab 36 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
#include "StringBinaryTree.h"
#include <string> 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    StringBinaryTree tree; 
    string code; 
    ifstream inputFile("codes.txt"); 
    
    if(inputFile.is_open()) { 
        while(getline(inputFile, code)) { 
            tree.insertNode(code); 
        }
        inputFile.close(); 
    } else { 
        cout << "File did not open" << endl; 
    }

    cout << "Output tree using postorder" << endl; 

    tree.displayPostOrder(); 

    return 0;
}