#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float marks[]={78.40,90.60,45.90,72.20,54.40};
	char names[][20]={"Ajith","Wimal","Kanthi","Suranji","Kushmitha"};
	
	cout << setw(10)<<setprecision(5)<< "No"
	     << setw(20)<<setprecision(15)<< "Name" 
		 << setw(10)<<setprecision(10)<<"Marks" 
		 <<endl;
	
	for(int r=0;r<5;r++)
	{
		cout << setw(10)<<setprecision(5) << r+1
		     << setw(20)<<setprecision(15) << names[r]
		     << setw(10)<<setprecision(4)<< marks[r]<<endl;
	}
}
