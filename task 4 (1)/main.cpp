#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
struct student
{
   string name;
   int age;
};



int main ()
{
  // student file
 ofstream out ;
 out.open("students.txt");
  int nustudent;
  cout<<"How many persons  to add : "<<endl;
  cin>>nustudent;
  vector<student> students;
   for (int i = 0; i < nustudent ; i++)
   {  
    student s ;
    
     cout<<"enter name for student "<<i+1<<endl;
     cin.ignore();
     getline(cin,s.name);
     cout<<"enter age for student "<<i+1<<endl;
     cin>>s.age;
     out<<s.name<<"  "<<s.age<<endl;
     students.push_back(s);
   }
   out.close();

    // in ifstrem
    ifstream in("students.txt");

    int minage = INT_MAX  ;
    int maxage = INT_MIN ;
    vector<student> yungr , older ;
    while (!in.eof())
    {
       
   
    
    student s ;
    in>>s.name>>s.age;
     
     if(s.age<minage)
     {
     minage=s.age;
     yungr.clear();
     yungr.push_back(s);
    }
    else if (s.age==minage)
    {
        yungr.push_back(s);

    }
    if (s.age>maxage)
    {
    maxage = s.age ;
    older.clear();
    older.push_back(s);
   }
   else if (s.age==maxage)
   {
    older.push_back(s);
   }
    }
   in.close();
   cout<<"max is : "<<maxage<<"////"<<endl;
    cout<<"min is : "<<minage<<"////"<<endl;

   //  result file //

   ofstream  result ;
   result.open("result.txt");
   result<<"max age is : "<<maxage<<endl;
   result<<"///////////////////////////"<<endl;
   result<<"min age is : "<<minage<<endl;
  
 return 0 ; 
}