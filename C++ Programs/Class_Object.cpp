#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int rollNumber;
        float percent;
    public:
        Student(string name="",int rollNumber=-1,float percent=0){
            cout<<"const";
            name=name;
            rollNumber=rollNumber;
            percent=percent;
        }
        void display(){
            cout<<name<<"    "<<rollNumber<<"     "<<percent<<endl;
        }

};
int main()
{
    Student obj= Student("sai",2,22.3);
    obj.display();
    return 0;
}

