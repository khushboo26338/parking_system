#include<bits/stdc++.h>
using namespace std;
int main()
{
	
int m=0,r=0,c=0,b=0,amount=0,total_veh=0,choice;

while(true)
{
cout<<" Welcome To Parking System"<<endl;
cout<<"\n Press 1: For Motorbike"<<endl;
cout<<" Press 2: For Rickshaw"<<endl;
cout<<" Press 3: For Car"<<endl;
cout<<" Press 4: For Bus"<<endl;
cout<<" Press 5: For Show Record"<<endl;
cout<<" Press 6: For Delete Record"<<endl;
cout<<"\n Enter Choice : ";
cin>>choice;

switch(choice)
{
	// For Motorbike
case 1:   
	m++;
	amount += 50;
	total_veh++;
	cout<<"\n Add 1 Motorbike in Record \n"<<endl;
	system("pause");
	system("cls");
	break;
	
	// For Rickshaw
case 2:
	r++;
	amount += 100;
	total_veh++;
	cout<<"\n Add 1 Rickshaw in Record \n"<<endl;
	system("pause");
	system("cls");
	break;
	
	// For Car
case 3:
	c++;
	amount += 200;
	total_veh++;
	cout<<"\n Add 1 Car in Record \n"<<endl;
	system("pause");
	system("cls");
	break;
	
	// For Bus
case 4:
	b++;
	amount += 250;
	total_veh++;
	cout<<"\n Add 1 Bus in Record \n"<<endl;
	system("pause");
	system("cls");
	break;
	
	// Total Record
case 5:
	cout<<" Total Amount = "<<amount<<endl;
	cout<<" Total Vehicels = "<<total_veh<<endl;
	cout<<" Motorbikes = "<<m<<endl;
	cout<<" Rickshaws = "<<r<<endl;
	cout<<" Cars = "<<c<<endl;
	cout<<" Buses = "<<b<<endl;
	system("pause");
	system("cls");
	break;
	
	// Delete all Record
case 6:
	m=0;r=0;c=0;b=0;
	amount=0;
	total_veh=0;
	
	cout<<"\n\n  Delete Record "<<endl;
	system("pause");
	system("cls");
	break;
	
default:
	cout<<"\n\n  Invalid Input"<<endl;
	system("pause");
	system("cls");
}
}
return 0;
}
