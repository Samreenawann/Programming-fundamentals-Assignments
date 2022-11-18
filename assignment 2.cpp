//Submitted by:Samreen Fatima
//Class: BSDS-1
//Submitted to:Mam Aisha Hakeem


#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"By using for loop"<<endl;
for(a =1;a<=10;a++)
{
	if(a==5)
	{
	continue ;
	}
	
	else
	{
	cout<<a*a;
	cout<<endl;
	}
}
cout<<endl;
cout<<"By using while loop"<<endl;

a=1;
while(a<=10)
{
	if(a==5)
	{
		a++;
	continue;
	}
	
	else 
	{
	cout<<a*a;
	cout<<endl;
	}
		a++;
}
cout<<endl;
cout<<"By using do while loop"<<endl;
a=1;
	do{
	if(a==5)
	{
	a++;
	continue ;
	}

	else 
	{
	cout<<a*a ;
	cout<<endl;
	}
	
	a++;
	}
	while(a<=10);
}