#include <iostream>
#include <string>
using namespace std;

// Self note: remember to adjust the categories after learning the jagged arrays from the lab manual

int main(){


    
    int categories;

    cout << "Enter number of categories: " << endl;
    cin >> categories;

    string* categoryNames = new string[categories];

    int** books = new int*[categories];

    int* bookCount = new int[categories];

    for(int i = 0; i < categories; i++){

        cout << "Enter category name: ";
        cin >> categoryNames[i];

        cout << endl;

        cout << "Enter number of books in " << categoryNames[i] << ": ";
        cin >> bookCount[i];

        books[i] = new int[bookCount[i]];

        for(int j = 0; j < bookCount[i]; j++){

            cout << "Enter Book ID: ";
            cin >> books[i][j];

        }
    }

    int search;

    cout << "\nEnter Book ID to search: ";
    cin >> search;

    bool found = false;

    for(int i = 0; i < categories; i++){

        for(int j = 0; j < bookCount[i]; j++){
            if(books[i][j] == search){

                cout << "Book found in category: " << categoryNames[i] << endl;

                found = true;



                break;
            }
        }
    }

    if (!found)
        cout << "Book not found." << endl;

    for (int i = 0; i < categories; i++) {
        delete[] books[i];
    }

    delete[] books;

    delete[] bookCount;
    
    delete[] categoryNames;














    return 0;
}
