#include <bits/stdc++.h>

using namespace std;
class consumer{ //private class by default
    string name; 
    int account_number;
    int balance;
    int *a2;

    public:

    // different way for constructor
    consumer(){ // constructor without parameter it has no return type & no return value
        cout<<"constructor is called"<<endl;
    }
    //needs to be public to be accessable
    consumer(string name,int account_number,int balance){ //second constructor (parameterized constructor)
        this->name=name; //since variable name and class property name matches we use 'this' keyword.
        this->account_number=account_number;
        this->balance=balance;

    }

    //inline constructor
    inline consumer(int a,int b): name("keshav"),account_number(a),balance(b){ //store in brackets

    }

    // if we want we can create copy constructor manually but we don't need to
    // even if we do not create it the compiler creates it by default
    consumer(consumer &copy){
        name=copy.name;
        account_number=copy.account_number;
        balance=copy.balance;
        a2= new int;
        *a2=55;

        
    }
    void display(){
        cout<<"name: "<<name<<", account no.: "<<account_number<<", balance: "<<balance<<endl;
    }

    //destructor (can be created only once at the last of the class)
    ~consumer(){
        // it is used to close open files,deallocate resources and destroys properties that has acquired memory dynamically
        // by default destructor is called even if we don't call but it does not free up the dynamically allocated memory therefore we call it
        cout<<"destructor is called"<<endl;// since 5 object it will be called 5 times
    }

};

int main(){

    consumer a1; //it calls the constructor which is without parameter

    consumer a("Madhav",3399,2000); 
    a.display();

    //ensuring the constructor don't collide so we use defferent parameter to use different constructor.
    consumer b(2313,500); 
    b.display();

    consumer c(b); //copy constructor by default we do not need to create it in class 
    c.display();

    //another way to utilize  copy constructor
    consumer d;
    d=a;
    d.display();


}

