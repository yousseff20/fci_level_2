#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	/*  $$ task 1 $$
	string name;

	char name [100];

	int id ;

	cout<<"Enter your Full Name ?"<<endl;

	cin.getline(name,100);

	cout<<"Enter your ID Greed ?"<<endl;

	cin>>id;

	cout<<"your Full Name is : "<<name<<endl<<"your ID Greed is : "<<id<<endl;

	/*file...........................

	ofstream myfile;

	myfile.open("Students.txt");

	myfile<<"The students data on it"<<endl;

	myfile<<"your Full Name is : "<<name<<endl;

	myfile<<"your ID Greed is : "<<id<<endl;


	myfile.close();*/

	/*     task 2     */


	/*string x , y , z;
	ofstream out;
	out.open("fruit.txt");
	out<<"Apple\nOrange\nBanana";
	out.close();
	ifstream in ("fruit.txt");
	in>>x>>y>>z;
	in.close();
	cout<<x<<endl<<y<<endl<<z;*/


                  /*тям*/

	/*TELL(P) /SEEK(P) >>>>(OFSTREAM)*/



	/* ofstream out;
	out.open("f2.txt");
	cout<<out.tellp()<<endl;
	out<<"hello world";
	cout<<out.tellp()<<endl;
	out<<"123";
	cout<<out.tellp()<<endl;
	out.seekp(3,ios::beg);
	out<<"3";
	cout<<out.tellp()<<endl;
	out.seekp(5,ios::cur);
	out<<"h";
	cout<<out.tellp()<<endl;
	out.seekp(2,ios::end);
	out<<"d";
	cout<<out.tellp()<<endl;*/

   /*TELL(G) /SEEJ(G) >>>>(IFSTREAM)*/
   /* string t;
   ifstream in("gg.txt");
   cout<<in.tellg()<<endl;
   in.seekg(5);
   getline(in,t);
   cout<<t;*/




	return 0;
}
