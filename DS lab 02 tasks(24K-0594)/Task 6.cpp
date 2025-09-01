#include <iostream>
using namespace std;

class SafePointer{

private:

    int* ptr;

public:


    SafePointer(){
        ptr = new int;
    }


    void setValue(int val){
        *ptr = val;
    }
    int getValue(){
        return *ptr;
    }
    void release(){
        delete ptr;
        ptr = nullptr;
    }
    ~SafePointer() {
        if (ptr != nullptr)
            delete ptr;
    }
};

int main() {

    int size = 5;
    SafePointer students[size];

    for (int i = 0; i < size; i++) {
        int mark;
        cout << "Enter marks for student "<<i + 1  <<":" << endl;
        cin >> mark;

        students[i].setValue(mark);
    }

    cout << endl;

    cout << "Marks of students:" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << students[i].getValue() << " ";
    }

    cout << endl;

    for(int i = 0; i <size;   i++){
        
        students[i].release();
    }




    return 0;
}
