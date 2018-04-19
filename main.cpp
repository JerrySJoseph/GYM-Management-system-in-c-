#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include"Equipments.h"
#include"File.h"

using namespace std;

//Show Credits
 void ShowPreview()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t************************************************************************\n";
	cout<<"\t\t\t\t\t\tHEALTH CLUB";
	cout<<"\n\t\t\t***********************************************************************\n";
	cout<<"\n\n\nDeveloped by Jerin Sebastian";
	cout<<"\n\n\nPress Any Key to continue..";
	getch();
	
}

//Main Function
int main()
{
	ShowPreview();
	int opt;
	while(1)
	{
		system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t1.Add New Record"<<endl;
		cout<<"\t\t\t2.Display Trainer Record "<<endl;
		cout<<"\t\t\t3.Display Member Record "<<endl;
		cout<<"\t\t\t4.Display Schedules "<<endl;
		cout<<"\t\t\t5.Delete  Record "<<endl;
		cout<<"\t\t\t6.Equipments and Exercises"<<endl;
		cout<<"\t\t\t7.Exit "<<endl;
		cout<<"\t\t\tEnter your Option : ";
		cin>>opt;
		switch(opt)
		{
			case 1:
			{
				Add();
				cout<<"\nDisplay Main Menu"<<endl;
				getch();
				break;
			}
			case 2:
			{
				DisplayAllTrainer();
				cout<<"\nDisplay Main Menu"<<endl;
				getch();
				break;
			}
			case 3:
			{
				DisplayAllMember();
				cout<<"\nDisplay Main Menu"<<endl;
				getch();
				break;
			}
			case 4:
			{
				Schedule();
				cout<<"\nDisplay Main Menu"<<endl;
				getch();
				break;
			}
			case 5:
			{
				Delete();
				cout<<"\nDisplay Main Menu"<<endl;
				getch();
				break;
			}
			case 6:
			{
				Equipments();
				break;
			}
			case 7:
			{
				exit(0);
			}
			
			default:
			{
				cout<<"Wrong Choice....Press Key For View the Main Menu";
				getch();
				system("cls");
			}
		}
	}
}
 
//end of program
