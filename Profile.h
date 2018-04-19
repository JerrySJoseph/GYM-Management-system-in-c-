#ifndef Profiles_H
#define Profiles_H
#include"Schedule.h"

#include<string.h>
#include<iostream>
using namespace std;

//Defining new type for string
typedef char String[100];

//Defining new type for Personal Details
typedef struct 
{
	String ID;
	String Password;
	bool IsAdmin=false;
}PersonalDetails;

//Class for storing ProfileData
class Profile
{
	protected:
	PersonalDetails LoginDetails;
	public:
	String Name;
	String Phone;
	String Address; 

};

//inherited class for Trainer
class Trainer:public Profile
{
	public:
	int Experience;
	int Salary;
	int Height;
	int weight;	
	TrainerSchedule Schedule;

	
	//Default contructor manipulated for default input
	Trianer(bool GetInfo=true)
	{
		if(GetInfo)
		GetData();
	}
	//Function for reading input to objects
	void GetData()
	{
		fflush(stdin);
			cout<<"\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\tName:"; scanf ("%[^\n]%*c", &Name);
		cout<<"\t\t\tPhone:"; scanf ("%[^\n]%*c", &Phone);	
		cout<<"\t\t\tAddress:";scanf ("%[^\n]%*c", &Address);
		cout<<"\t\t\tExperience:";scanf ("%[^\n]%*c", &Experience);
		cout<<"\t\t\tSalary:"; cin>>Salary;
		cout<<"\t\t\tHeight:"; cin>>Height;
		cout<<"\t\t\tWeight:"; cin>>weight;
		cout<<"\t\t\tEnter the Schedule (Note:Write '0' in free time)\n";
		Schedule=AddTSchedule();
	}
	

};

//Inherited class for Members
class Member:public Profile
{
	public:
	double fee;
	MemberSchedule Schedule;
	String trainer;
	
		//Function to read inputs to objects
	void GetData()
	{
		fflush(stdin);
		cout<<"Name:"; scanf ("%[^\n]%*c", &Name);
		cout<<"Phone:"; scanf ("%[^\n]%*c", &Phone);	
		cout<<"Address:"; scanf ("%[^\n]%*c", &Address);
		cout<<"Trainer:"; scanf ("%[^\n]%*c", &trainer);
		cout<<"Fees:";cin>>fee;		
		cout<<"\nEnter the Schedule (Note:Write '0' in free time)\n";
		Schedule=AddMSchedule();
	}
	
};



#endif
