#include<iostream>
using namespace std;
class hotel {
	public:
	int id;
	char name[100];
	char type[100];
	char rating[100];
	char location[100];
	int establish_year;
	int staff_quantity;
	int room_quantity;
	
	void setter();
	void getter();

};
void hotel::setter()
{
	cout<<"Enter id:-";
	cin>>id;
	cout<<"Enter Name:-";
	cin>>name;
	cout<<"Enter type:-";
	cin>>type;
	cout<<"Enter rating:-";
	cin>>rating;
	cout<<"Enter location:-";
	cin>>location;
	cout<<"Enter establish_year:-";
	cin>>establish_year;
	cout<<"Enter staff_quantity:-";
	cin>>staff_quantity;
	cout<<"Enter room_quantity:-";
	cin>>room_quantity;
	cout<<endl;
}
void hotel::getter()
{
	cout<<"id:-";
	cout<<id<<endl;
	cout<<"Name:-";
	cout<<name<<endl;
	cout<<"type:-";
	cout<<type<<endl;
	cout<<"rating:-";
	cout<<rating<<endl;
	cout<<"location:-";
	cout<<location<<endl;
	cout<<"establish_year:-";
	cout<<establish_year<<endl;
	cout<<"staff_quantity:-";
	cout<<staff_quantity<<endl;
	cout<<"room_quantity:-";
	cout<<room_quantity<<endl<<endl;	
}
main()
{
	int n;
	cout<<"Enter hotel number:-";
	cin>>n;
	hotel obj[10];
	int i;
	for(i=0;i<n;i++)
	{
		obj[i].setter();
	}
	for(i=0;i<n;i++)
	{
		obj[i].getter();
	}
}














