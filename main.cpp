
///calculating GPA.cpp
// Reza salmanian, CISP 400
// 09/22/2019

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


// Specification A1 - OOP
//Code this assignment using at least one class. Put this //comment
//above the class declaration.
class GPA 
{
  private:
  //declare Variables
    string name;
    int ID_string[8];
    int calculation=0;
    float final_grade;
    float midterm_grade; 
    
  public:
  //constractor
    GPA()
    {
      name="name";
      
      final_grade=0;
      midterm_grade=0;

    }
    //destructor 
     ~GPA()
    {
      cout<<"object has been destroyed"<<endl;
    }
    void setName(string n)
    {
      name=n;
    }
    string getName()
    {
      return name;
    }
    //Function with SEted information
    void setInfo()
    {
      int j=8;
      cout<<"Enter student name :"<<endl;
      cin>>name;
      //Specification B2 - Validate Student ID
      cout<<"enter student ID :";
      cin>>ID_string[j];

      cout<<"Enter  your score :"<<endl;
      cin>>final_grade;
      // Specification C4 - Validate Test Scores
      while(final_grade<0 ||  final_grade>100)
      {
        cout<<"You enter the wrong number re-enter it again :" <<endl;
        cin>>final_grade;
      }
      // Specification B3 - Letter Grades
       if (final_grade<=100 && final_grade>=90)
      {
        cout<<" A"<<endl;
      }
      else if (final_grade<90 && final_grade>=80)
      {
        cout<<"B"<<endl;
      }
        else if (final_grade<80 && final_grade>=70)
      {
        cout<<"C"<<endl;
      }
      else if (final_grade<70 && final_grade>=60)
      {
        cout<<"D"<<endl;
      }
      else
        cout<< "F"<<endl;
      // Specification B3 - Letter Grades
      cout<<"Enter  your score :"<<midterm_grade<<endl;
      cin>>midterm_grade;
      // Specification C4 - Validate Test Scores
      if (midterm_grade<0 ||  midterm_grade>100)
      {
        cout<<"You enter the wrong number re-enter it again :" <<endl;
        cin>>midterm_grade;
      }
      else if (midterm_grade<=100 && midterm_grade>=90)
      {
        cout<<" A"<<endl;
      }
      else if (midterm_grade<90 && midterm_grade>=80)
      {
        cout<<"B"<<endl;
      }
      else if (midterm_grade<80 && midterm_grade>=70)
      {
        cout<<"C"<<endl;
      }
      else if (midterm_grade<70 && midterm_grade>=60)
      {
        cout<<"D"<<endl;
      }
      else
        cout<< "F"<<endl;
      
    }

    void calculateGpa()
    {
      // Specification C3 - Compute GPA
      calculation= (final_grade + midterm_grade) /2;
      cout<<"Your over all garde is "<<calculation<<endl;
      
      // Specification C5 - Print Letter Grade
      if (calculation<=100 && calculation>=90)
      {
        cout<<"Student GPA A"<<endl;
      }
      else if (calculation<90 && calculation>=80)
      {
        cout<<"Student GPA B"<<endl;
      }
        else if (calculation<80 && calculation>=70)
      {
        cout<<"Student GPA C"<<endl;
      }
      else if (calculation<70 && calculation>=60)
      {
        cout<<"Student GPA D"<<endl;
      }
      else
        cout<< "You faild"<<endl;
      
    }
    void desplayInfo()
    {
      cout<<"name "<< name <<endl;
      cout<<"student ID"<<ID_string<<endl;
      // Specification A2 - Sort Grades
      if(final_grade>=midterm_grade)
      {
        cout<<"grade :"<< final_grade<<endl;
        cout<<"grade :"<< midterm_grade<<endl;
      }
      else
      {
        cout<<" grade:"<< midterm_grade<<endl;
        cout<<" grade:"<< final_grade<<endl;
      }
    }
    
};

int main() 
{

  // Program Greeting
  cout<<"welcom to my GPA calculation program"<<endl;

 // "B" Specification Bundle.
 // Specification B1 - Dynamic Array
  GPA * G;
  int SIZE;
  cout<<"Enter number of student:"<<endl;
  cin>>SIZE;
  G = new GPA[SIZE];
  for(int i=0;i<SIZE;i++)
  {
    G[i].setName("GPA" + to_string(i+1));
    cout<<G[i].getName()<<endl;
    cout<<"---------------------------"<<endl;
    G[i].setInfo();
    G[i].calculateGpa();
  }

  for(int i=0;i<SIZE;i++)
  {
    G[i].setName("GPA" + to_string(i+1));
    cout<<G[i].getName()<<endl;
    G[i].desplayInfo();

  }
  delete[]G;
  
 //C1 - REPLACED
}