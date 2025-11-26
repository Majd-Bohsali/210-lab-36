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
        cout << endl;
        menuSelection(); 
        cout << "Selection -> ";
        cin >> selection; 
        if(selection == 1) { 
            string newCode; 
            cout << "Enter code to add to tree: "; 
            cin >> newCode; 
            tree.insertNode(newCode); 
            cout << "Code was added to tree"; 
        } else if (selection == 2) {
            string delCode; 
            cout << "Enter a code to delete: "; 
            cin >> delCode; 
            if(tree.searchNode(delCode)) { 
                tree.remove(delCode);
                cout << "Code deleted from tree"; 
            } else { 
                cout << "Code was not found in the tree"; 
            }
        } else if (selection == 3) { 
            string searchCode; 
            cout << "Enter a code to search: "; 
            cin >> searchCode; 
            
            if(tree.searchNode(searchCode)) { 
                cout << "Searched code was found in the tree" << endl; 
            } else { 
                cout << "Searched code was not found in the tree" << endl; 
            }
        } else if (selection == 4) { 
            string originalCode, newCode; 
            cout << "Enter code to Modify: "; 
            cin >> originalCode; 
            cout << "Enter new code value: ";
            cin >> newCode; 
            if(tree.searchNode(originalCode)) { 
                tree.remove(originalCode);
                tree.insertNode(newCode);
            } else {
                cout << "Code to modify was not found in the tree" << endl; 
            }
        } else if (selection == 5) { 
            tree.displayPostOrder();
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