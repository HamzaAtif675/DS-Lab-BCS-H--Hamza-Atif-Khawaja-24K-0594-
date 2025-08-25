#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Exam{
    private:

    char *studentName;
    char *date;
    int marks;

    public:

    Exam(char *name , char* Date , int Marks) : marks(Marks) {
        studentName = new char[strlen(name)+1];
        date = new char[strlen(Date)+1];
        strcpy(studentName , name);
        strcpy(date , Date);
    }

    void setAttributes(char *name , char *Date , int Marks){
        marks = Marks;
        strcpy(studentName , name);
        strcpy(date , Date);
    }

    void display(){
        cout << "Name: " << studentName << endl;
        cout << "Date: " << date << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Exam(){
        delete[] studentName;
        delete[] date; 
    }
    

};

int main(){
    Exam exam("Hamza" , "25-8-2025" , 88);

    exam.display();
    cout << endl;
    exam.setAttributes("Hamza" , "25-8-2025" , 90);
    cout << endl;
    exam.display();
  
    Exam exam1 = exam;
    cout << endl;
    exam1.display();

    return 0;
}