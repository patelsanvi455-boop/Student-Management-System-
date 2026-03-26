/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:

    void addStudent()
    {
        cout<<"\nEnter Roll Number: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void displayStudent()
    {
        cout<<"\nRoll Number: "<<roll;
        cout<<"\nName: "<<name;
        cout<<"\nMarks: "<<marks<<endl;
    }

    int getRoll()
    {
        return roll;
    }
};

int main()
{
    Student s[50];
    int total = 0;
    int choice;

    do
    {
        cout<<"\n STUDENT MANAGEMENT SYSTEM";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display All Students";
        cout<<"\n3. Search Student";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                s[total].addStudent();
                total++;
                cout<<"Student Added Successfully!\n";
                break;

            case 2:
                if(total==0)
                    cout<<"No Records Found!\n";
                else
                {
                    for(int i=0;i<total;i++)
                        s[i].displayStudent();
                }
                break;

            case 3:
            {
                int searchRoll;
                bool found=false;

                cout<<"Enter Roll Number to Search: ";
                cin>>searchRoll;

                for(int i=0;i<total;i++)
                {
                    if(s[i].getRoll()==searchRoll)
                    {
                        s[i].displayStudent();
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Student Not Found!\n";

                break;
            }

            case 4:
                cout<<"Program Ended.";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    } while(choice!=4);

    return 0;
}
