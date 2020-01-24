#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(n==0||r==0)
		return 1;
	else if(r==0)
		return n;
	else
	{
		return n*permutation(n-1,r-1);
	}
	
  return 0;
}

int combination(int n, int r)
{
	if(n==0||r==0)
		return 1;
	else if(r==0)
		return n;
	else
	{
		return 	n*combination(n-1,r-1)/r;
	}
	
  return 0;
}

int main()
{
	int n,r,choice;
	char y;
	
	try{
	
	do
	{
	cout<<"Enter 1 for permutation: \n";
	cout<<"Enter 2 for combination : ";

	cout<<"\n Enter your choice: ";
	cin>>choice;

	switch(choice)
	{
		case 1:
		cout<<"Enter the value n : ";
		cin>>n;
		cout<<"Enter the value r : ";
		cin>>r;
		if(n>0&&r>0&&n>r)
		{
			if(permutation(n,r)>0)
			cout<<permutation(n,r);
		}	
		else
		{
			throw -1;
		}
		break;
		case 2:
			cout<<"Enter the value n : ";
			cin>>n;
			cout<<"Enter the value r : ";
			cin>>r;
		if(n>0&&r>0&&n>r)
		{
			if(combination(n,r)>0)
			cout<<combination(n,r);
		}
		else 
		{
			throw -1;
		}
		break;
		default :
			cout<<"Invalid choice";
	}
	
	cout<<"\n Do you want to continue y/n ";
	cin>>y;
	
	}while(y=='y');
}

catch(int y)
{
	cout<<"Not defined for your input ";
}
  return 0;
}
