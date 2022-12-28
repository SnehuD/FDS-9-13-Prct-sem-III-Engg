#include<iostream>
using namespace std;
#define SIZE 5
class dequeue
{
	int a[SIZE],front,rear,count;
	public:
		dequeue();
		void addf(int);
		void addr(int);
		void deletef();
		void deleter();
		void display();
};
dequeue::dequeue()
{
	front=-1;
	rear=-1;
	count=0;
}
void dequeue::addf(int item)
{
	int  i;
	if(front == -1)
	{
		front++;
		rear++;
		a[rear] = item;
		count++;
	}
	else if(rear >= SIZE-1)
	{
		cout<<"\nInsertion is not possible, overflow!!!!";
	}
	else
	{
		for(i = count; i >= 0; i--)
		{
			a[i] = a[i-1];
		}
		a[i] = item;
		count++;
		rear++;
	}
}

void dequeue::addr(int item)
{
	if(front == -1)
	{
		front++;
		rear++;
		a[rear] = item;
		count++;
	}
	else if(rear >= SIZE-1)
	{
		cout<<"\nInsertion is not possible,overflow!!!";
		return;
	}
	else
	{
		a[++rear] = item;
	}
}

void dequeue::display()
{
	cout<<"Elements in Queue : ";
	for(int i = front;i <= rear;i++)
	{
		cout<<a[i]<<" ";
	}
}

void dequeue::deletef()
{
	if(front == -1)
	{
		cout<<"Deletion is not possible:: Dequeue is empty";
		return;
	}
	else
	{
		if(front == rear)
		{
			front = rear = -1;
			return;
		}
		cout<<"The deleted element is "<<a[front];
		front = front + 1;
	}
}

void dequeue::deleter()
{
	if(front == -1)
	{
		cout<<"Deletion is not possible:Dequeue is empty";
		return;
	}
	else
	{
		if(front == rear)
		{
			front = rear = -1;
		}
		cout<<"The deleted element is "<< a[rear];
		rear = rear - 1;
	}
}

int main()
{
	int c,item;
	dequeue d1;

	do{
		cout<<"\n\n****DEQUEUE OPERATION****\n";
		cout<<"\n1 : Insert at beginning";
		cout<<"\n2 : Insert at end";
		cout<<"\n3 : Display";
		cout<<"\n4 : Deletion from front";
		cout<<"\n5 : Deletion from rear";
		cout<<"\nEnter your choice<1-5> : ";
		cin>>c;

		switch(c)
		{
			case 1:
				cout<<"Enter the element to be inserted : ";
				cin>>item;
				d1.addf(item);
				break;
	
			case 2:
				cout<<"Enter the element to be inserted : ";
				cin>>item;
				d1.addr(item);
				break;
	
			case 3:
				d1.display();
				break;
	
			case 4:
				d1.deletef();
				break;
				
			case 5:
				d1.deleter();
				break;
	
			default:
				cout<<"Invalid choice";
				break;
		}
	}while(c != 6);
	return 0;
}


/*
1. start
2.declare var such as arr data ch
3.Print menu - 
	a. insert front
	b. insert rear
	c. delete front
	d. delete rear
	e. print
	f. exit
	Enter ur choice
	
4.
case 1 :
	enter data for front end of queue and call addf()

5.	
case 2 :
	enter data for front end of queue and call addr()

6.	
case 3 :
	if isEmpty then dequeue is empty 
	otherwise
	call delf()

7.	
case 4 :
	if isEmpty then dequeue is empty 
	otherwise
	call delr()
	
8.
case 5 :
	if isEmpty then print dequeue is empty 
	otherwise
	call print(q) function

9. stop
	
*/
