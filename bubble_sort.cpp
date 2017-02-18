#include<iostream>
using namespace std;

int main(){
	int i,n,A[]={35,10,55,20,5},swap,j;
	
	for (int i=5; i>1; i--)
		for (int j=0; j<5-1; j++)
			if(A[j]>A[j+1])
			{
					swap =A[j];
					A[j]= A[j+1];
					A[j+1]=swap;
			}
			  cout << "Sorted Array\n";
			  	for (int j=0; j<6-1; j++)
   			    cout << A[j]<<""<<endl ;
   			  
  				  
return 0;
}
 
			
    
