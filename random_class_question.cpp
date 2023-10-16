//random question done in class
//run and see

#include <iostream>
using namespace std;

class grade
{
    public:
    int marks;
    int out;
    //int out;
    //nt marks1 = marks;
    // grade(int marks,int out)
    // {
    //     this->marks = marks;
    //     this->out = out;
    // }
    
    string gradeCalc(int marks, int out,string &str)
    {
        //string ans;
        int percent = (marks/out)*100;
        if(percent>=90)
        {
            str = "A+";
            //return str;  
        }
        if(percent>=80)
        {
            str = "A";
            //return str;  
        }
        if(percent>=70)
        {
            str = "B";
            //return str;  
        }
        if(percent>=60)
        {
            str = "C";
            //return str;  
        }
        if(percent>=50)
        {
            str = "D";
            //return str; 
        }
        if(percent<50)
        {
            str = "E";
            //return str;  
        }
        
        
        cout<<"marks of the student are "<<marks<<" out of "<<out<<endl;
        cout<<"grade of the student is: "<<str<<endl;
        
        
    }
    // void grade(marks)
    // {
    //     cout<<marks<<endl;
    //     cout<<marks1<<endl;
    // }
    
};


int main()
{
    grade grade;
    string str = "nothing";
    grade.gradeCalc(12,100,str);
    
}