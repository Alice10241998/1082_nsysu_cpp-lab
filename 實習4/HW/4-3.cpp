#include<iostream>
using namespace std;

int arr_size=0;

void BubbleSort(int array[])
{
	int i,j,k;
	for(i=(arr_size-1);i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(array[j-1]>array[j])
			{
				k=array[j-1];
				array[j-1]=array[j];
				array[j]=k;
			}
		}
	}
	for(i=0;i<arr_size;i++)
		cout<<array[i]<<" ";
}

void SelectionSort(int array[])
{
	int i,j,k,min;
	for(i=0;i<=arr_size;i++)
	{
		min=i;
		for(j=i+1;j<arr_size;j++)
		{
			if(array[j]<array[min])
				min=j;
		}
		k=array[i];
		array[i]=array[min];
		array[min]=k;
	}
	for(i=0;i<arr_size;i++)
		cout<<array[i]<<" ";
}

int main()
{
	int input,i;
	int num[100];
	cout<<"Enter the sorting code: (1:bubble sort; 2:selection sort)"<<endl;
	cin >> input;
	cout<<"Enter the numbers :"<<endl;
	
	for(i=0;i<100;i++)
	{
		int a;
		cin >> a;
		if(a==-1) break;
		num[arr_size++]= a;
	}
	
	if(input==1)
	{
		cout<<"Bubble Sort:"<<endl;
		BubbleSort(num);
		cout<<endl;
	}

	if(input==2)
	{
		cout<<"Selection Sort:"<<endl;
		SelectionSort(num);
		cout<<endl;
	}
}
