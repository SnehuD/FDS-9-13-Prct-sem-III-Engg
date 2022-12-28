//	Given String Pallindrome or Not

#include<iostream>
#include<string.h>
#define max 50

using namespace std;

class STACK
{
	char a[max];
	int top;
	
	public:
		STACK()
		{
			top=-1;
		}
		
		void push(char);
		void reverse();	
		void convert(char[]);
		void palindrome();
};
void STACK::push(char c)
{
	top++;
	a[top] = c;
	a[top+1]='\0';
	
	cout<<endl<<c<<" is pushed on stack ...";
}
void STACK::reverse()
{
	char reversedName[max];
	
	cout<<"\n\nReverse string is : ";
		
	for(int i = top,j=0; i>=0; i--,j++)
	{
		cout<<a[i];				// d a s a r p
		reversedName[j] = a[i];
	}
	cout<<endl;
}
void STACK::convert(char name[])
{
	int j,k,len = strlen(name);	//P r a s a d
	for(j=0, k=0; j < len; j++)
	{
		if( ( (int)name[j] >= 97 && (int)name[j] <= 122 ) || ( (int)name[j] >= 65 && (int)name[j] <=90 ))
		{
			if( (int)name[j] <= 90)
			{
				name[k] = (char)( (int)name[j] + 32 );
			}else
			{
				name[k] = name[j];				
			}
			k++;			
		}
	}
	name[k]='\0';
	cout<<endl<<"Converted String : "<<name<<"\n";
}
void STACK::palindrome()
{	
	char reversedName[max];
	int i,j;		
	for(i=top,j=0; i>=0; i--,j++)
	{
		reversedName[j] = a[i];
	}
	reversedName[j]='\0';
	if(strcmp(reversedName, a) == 0)
		cout<<"\n\nString is palindrome...";
	else
		cout<<"\n\nString is not palindrome...";
}

int main()
{
	STACK stack;
	
	char name[max];
	int i = 0;
	cout<<"\nEnter string to be reversed and check is it palindrome or not : \n\n";
	cin.getline(name , 50);
	stack.convert(name);
	
	while(name[i] != '\0')
	{
		stack.push(name[i]);
		i++;
	}
	stack.reverse();
	stack.palindrome();	
}


/*
1. start
2.declare var such as a, top, i,max
3.Take input as a string from user
4.call push() function
5.call push function of palllindrome to check string is pallindrome or not
6.call stack function
7.stop 
*/
