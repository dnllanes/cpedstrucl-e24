#include<iostream>
using namespace std;

int main(){
	int A[]={30,40,20,50,10}, index,n,j;
	for(int i=7;i>1;i--)
		for (int i=0; i<7-1;i++){
		int min=A[i], index =i;
		for(int j=i+1; j<6;j++){
			if(A[j]<min){
				min=A[j];
				index=j;
			}
		}
		A[index]=A[i];
		A[i]=min;
	} 
	cout<<"Sorted array:\n";
		for (int i=1; i<7-1;i++)
		cout<<A[i]<<""<<endl;
		
	
return 0;
}
