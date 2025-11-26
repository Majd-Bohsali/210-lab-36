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

int menuSelection() { 
    int selection; 
    do { 
    cout << "Select Action" <, endl;
    cout << "1. Insert new code" << endl
         << "2. Delete a code" << endl 
         << "3. Search for code" << endl 
         << "4. Modify a code" << endl 
         << "5. Display Tree in postorder" << endl 
         << "6. Quit" << endl; 
    cin >> "Enter choice: "; 
    } while (selection != 6); 
    return selection; 
}