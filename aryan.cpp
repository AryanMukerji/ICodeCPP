#include<iostream>

struct student 
{
	int rollno;
	char name[20];
};

student data()
{
	student s;
	cout<<" Enter Roll Number : ";cin>>s.rollno;
	cout<<" Enter Name : ";gets(s.name);

	return s;
}

void main()
{ 
	student s1;
	cout<<" Enter student details : ";
	s1=data();

	cout<<" Details you entered are : ";
	cout<<" Roll Number : "<< s1.rollno;
	cout<<" Name : "<< s1.name;
}
