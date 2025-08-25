#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Box{
    private:
    int *value;

    public:

    Box(int Value){
        value = new int(Value);
    }

    Box(const Box &other){
        value = new int(*other.value);
    }

    Box& operator=(const Box& other)
    {
        if(this != &other){  
             
            delete value;       
            value = new int(*other.value); 
        }

        return *this;          
    }
    void getValue(){
        cout << *value;
    }
    void changeValue(int num){
        *value = num;

    }
    

    ~Box(){
        delete value;
    }
};

int main(){
    Box box1(100);
    box1.getValue();
    cout << endl;
    Box box2 = box1;
    box2.getValue();
    cout << endl;
    box2.changeValue(90);
    box2.getValue();

    return 0;
}