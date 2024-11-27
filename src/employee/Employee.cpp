#include <iostream>
using namespace std;

class Employee{
    private: 
        int id;
        string name;
    public:
        Employee(int id=0, string name="unknown"){
            this->id = id;
            this->name = name;
        }
        void display(){
            cout<<"ID: " << id << " Name: " << name <<endl;
        }
};