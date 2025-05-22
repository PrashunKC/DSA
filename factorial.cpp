#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;
int n,i;
int fact(int i);
int main()
{
	printf("\n Enter the number to find factorial: ");
	cin>>n;
	cout<<"\n"<<fact(n);
	getch();
	return 0;
}

 int fact(int i)
 {
	if(i==0||i==1) return 1;
	else return i*fact(i-1);
 }