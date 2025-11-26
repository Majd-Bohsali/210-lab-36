// COMSC210 | Lab 36 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
#include "StringBinaryTree.h"
#include <string> 
#include <iostream>
#include <fstream>
using namespace std;

void menuSelection(); 

int main() {
    StringBinaryTree tree; 
    string code; 
    ifstream inputFile("codes.txt"); 
    int selection = 0; 

    if(inputFile.is_open()) { 
        while(getline(inputFile, code)) { 
            tree.insertNode(code); 
        }
        inputFile.close(); 
    } else { 
        cout << "File did not open" << endl; 
    }

    cout << "Outputing tree in postorder" << endl; 
    tree.displayPostOrder(); 

    while (selection != 6) { 
        menuSelection(); 
        cout << "Selection -> ";
        cin >> selection; 
        if(selection == 1) { 
            string newCode; 
            cout << "Enter code to add to tree: "; 
            cin >> newCode; 
            tree.insertNode(newCode); 
        } else if (selection == 2) {
            string delCode; 
            cout << "Enter a code to delete: "; 
            cin >> delCode; 
            tree.remove(delCode); 
        } else if (selection == 3) { 
            string searchCode; 
            cout << "Enter a code to search: "; 
            cin >> searchCode; 
            tree.searchNode(searchCode); 
        } else if (selection == 4) { 
            
        } else if (selection == 5) { 
        
        }
    }

    return 0;
}    

void menuSelection() { 
    cout << "Select Action" << endl;
    cout << "1. Insert new code" << endl
         << "2. Delete a code" << endl 
         << "3. Search for code" << endl 
         << "4. Modify a code" << endl 
         << "5. Display Tree in postorder" << endl 
         << "6. Quit" << endl; 
}