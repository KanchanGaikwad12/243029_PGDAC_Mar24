//1:Write a program that accepts numbers continuously as long as the number 
//is positive and prints the sum of the given numbers.
#include<iostream>
using namespace std;
int main1(){
	int a;
	int sum=0;
	cout<<"Enter a numbers for sum : ";
	while(a>=0){
		cin>>a;
		sum+=a;
		
	}
	cout<<"Output including negativen : "<<sum;
	return 0;
}
