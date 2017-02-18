#include<iostream>
using namespace std;

int main(){
	int i,n,A[6]={40,30,20,50,10},j;

		for (i=1;i<6;i++){
			int tmp=A[i];
			for (j=i-1;j>=0 && tmp<A[j];j--){
			A[j+1]=A[j];
		}
		A[j+1]=tmp;
	}
	cout<<"Sorted array:\n";
	for (i=1;i<6;i++)
	cout<<A[i]<<""<<endl;

return 0;	
}
