#ifndef Schedule_H
#define Schedule_H

#include<iostream>
#include<string.h>

using namespace std;

//Defining new types for Time and string
typedef char Time[5];
typedef char String[100];

//Defining new types for Schedules
typedef struct 
{
 
	String Timing[7][7];
			
}TrainerSchedule;
typedef struct 
{
	Time Timing[7];
			
}MemberSchedule;

MemberSchedule AddMSchedule(void)
{
		MemberSchedule MS;
		cout<<"Monday:";scanf("%s",MS.Timing[0]);
		cout<<"Tuesday:";scanf("%s",MS.Timing[1]);
		cout<<"Wednesday:";scanf("%s",MS.Timing[2]);
		cout<<"Thursday:";scanf("%s",MS.Timing[3]);
		cout<<"Friday:";scanf("%s",MS.Timing[4]);
		cout<<"Saturday:";scanf("%s",MS.Timing[5]);
		cout<<"Sunday:";scanf("%s",MS.Timing[6]);
		return MS;
}

TrainerSchedule AddTSchedule(void)
{
	String DayNames[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	String Time[7]={"1-2","2-3","3-4","4-5","5-6","6-7"};
	TrainerSchedule TS;
	
		for(int i=0;i<7;i++)
		{
			cout<<"Schedule for "<<DayNames[i]<<endl;
				for(int j=0;j<7;j++)
				{ cout<<Time[j];
					scanf("%s",TS.Timing[i][j]);
				}
		
		}
		
		return TS;
}
void ShowTSchedule(void)
{
	
}
void ShowMSchedule(MemberSchedule Ms)
{
	cout<<"\n----------------------Schedule-------------------";
	cout<<"\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	for(int i=0;i<7;i++)
	cout<<Ms.Timing[i]<<"\t";	
	cout<<"\n-------------------------------------------------";
}
void ShowTSchedule(TrainerSchedule Ts)
{
	String Times[7]={"1-2","2-3","3-4","4-5","5-6","6-7","7-8"};
	cout<<"\n\tMon\t\tTue\t\tWed\t\tThu\t\tFri\t\tSat\t\tSun\n";
	cout<<"------------------------------------------------------------------------------------------------------------------\n";
	for(int i=0;i<7;i++)
	{cout<<Times[i]<<"->\t";
	for(int j=0;j<7;j++)
	cout<<Ts.Timing[j][i]<<"\t\t";
	cout<<"\n";
	}
	cout<<"\n-----------------------------------------------------------------------------------------------------------------";
	
}
#endif
