#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
class stack{
	struct node*top;
public:
	stack(){
		top=NULL;
	}
	
void push();
void pop();
void display();
};

void stack::push(){
	int val;
	struct node *ptr;
	system("cls");
	cout<<"\n PUSH OPERATION"
		<<"\n======================="
		<<"\n Enter number to push:";
	cin>>val;
	ptr=new node;
	ptr->data=val;
	ptr->next=NULL;
	if(top!=NULL)
	ptr->next=top;
		top=ptr;
	cout<<"\nNew item successfully inserted to the stack!";
}

void stack::pop(){
	struct node*temp;
	if(top==NULL){
		cout<<"\nStack is empty!";
	}
	temp=top;
	top=top->next;
	system("cls");
	cout<<"\nPOP OPERATION"
		<<"\n======================="
		<<"\n Poped value is "<<temp->data;
		delete temp;
}

void stack::display()
{
		system("cls");
    struct node *ptr1=top;
    cout<<"\nThe stack is: ";
    
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    
    cout<<"\nNULL";
    
}


int main(){
	stack st;
	int choice;

	while(1){
		cout<<"\n\n======================="
			<<"\nSTACK USING LINKED LIST\n"
			<<"=======================\n"
			<<"1.Push\n"
			<<"2.Pop\n"
			<<"3.Display\n"
			<<"4.Exit\n"
			<<"===============\n"
			<<"Enter choice:";
		cin>>choice;
	
		switch(choice){
		
			case 1:
                st.push();
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"\nEnter choices from 1-4";
                break;
              
		}
	}
	return 0;
}
	
	
