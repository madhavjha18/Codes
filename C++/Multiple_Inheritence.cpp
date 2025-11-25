#include <bits/stdc++.h>
using namespace std;

class Engineer
{
    protected :
    void money()
    {
        cout << "Hello Money" << endl;
    }

public:
    string specialization;

    Engineer()
    {
        cout << "Hello engineer\n";
    }

    void work()
    {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscriber;

    Youtuber()
    {
        cout << "Hello Youtuber\n";
    }
    void contentCreator()
    {
        cout << "I have  a subsscriber base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;
    CodeTeacher()
    {
        cout << "Hello CodeTeacher\n";
    }
    CodeTeacher(string name, string specialization, int subscriber)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
    }
    void money()
    {
        Engineer::money();
    }
    void showCase()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main()
{
    CodeTeacher A2("Madhav", "CS", 81);
    A2.showCase();

    CodeTeacher A1;
    A1.money();

    return 0;
}