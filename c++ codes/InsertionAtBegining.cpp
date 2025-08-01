#include<iostream>
using namespace std;

class node {
public:

	int data;
	node* next;

	node(int val) {
		data=val;
		next= nullptr;
	}
};

void insertAthead(node* &head,int value) {
	node* newnode= new node(value);
	newnode->next=head;
	head=newnode;
}

void print(node* &head) {
	node* temp=head;
	while(temp!=nullptr) {
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main() {
	node* head= nullptr;

	insertAthead(head,1);
	insertAthead(head,2);
	insertAthead(head,3);

	print(head);
	return 0;
}
