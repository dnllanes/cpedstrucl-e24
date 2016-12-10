#include <iostream>

using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
  
};

void menu(){

	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	cout<<"\nEnter choice:";
}
	



int main() {
	
	int choice,number; 
	Stack * s = new Stack(100);
	menu();
	cin>>choice;
	
	while (choice!=4){
	
	switch (choice){
		case 1: 
			cout<<"Enter number:";
			cin>>number;
			s->push(number);
			s->display(); 
			
			break;
			
			
		case 2:
			s->pop();
			break;
			
		case 3:
			s-> display();
			break;
			
		default:
			cout<<"Invalid";
			exit(0);
		}
	}
}
  

