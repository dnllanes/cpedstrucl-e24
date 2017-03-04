#include<iostream>
using namespace std;
int main(){
	int A[]={6,5,3,1,8,7,2,4};
	int temp[8];
	int n=8, y=1;
	int l1, l2, h1, h2, i, j, e, size;
	
	cout<<"Array Elements: ";
	for(int e=0; e<n; e++)
		cout<<A[e]<<" ";
	cout<<endl<<endl;
		
	for(size=1; size<n; size=size*2){
		l1=0;
		e=0;
		while(l1+size<n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if (h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2){
				if (A[i]<=A[j])
					temp[e++]=A[i++];
				else
					temp[e++]=A[j++];
			}
			while (i<=h1)
				temp[e++]=A[i++];
			while (j<=h2)
				temp[e++]=A[j++];
			l1=h2+1;
		}
		
	
		for(i=l1; e<n; i++)
			temp[e++]=A[i];
			cout<<"Switches: "<<A[j]<<" and "<<A[j+1]<<endl;
		for(i=0; i<n; i++)
			A[i]=temp[i];

		cout<<"Pass no. "<<y++<<": ";
		for (int e=0; e<n; e++)
			cout<<A[e]<<" ";
		cout<<endl;
	
	}
	return 0;
}
//MERGESORT
