#include <bits/stdc++.h>
using namespace std;


class employee
{
    public:
    string name;
    string email;
    int age;
    float salary;
    string phone_number;
    string address;
    
    void create();
    void update();
    void deleterec();
    void show_all();
};

class book
{
    public:
    string name;
    string author;
    int num_pages;
    string publish_date;

    void create();
    void update();
    void deleterec();
    void show_all();
};

vector<employee> emp;
vector<book> b;

void employee::create()
{
    employee ne;
    cout<<"\nenter employee name, email,age, salary, phone number, address\n";
    cin>>ne.name>>ne.email>>ne.age>>ne.salary>>ne.phone_number>>ne.address;
    emp.push_back(ne);
    cout<<"\ndone\n";
}

void employee::update()
{
    string q;
    cout<<"\nenter employee name\n";
    cin>>q;
    for(auto &employee:emp)
    {
        if(employee.name==q)
        {
                cout<<"\nenter employee name, email,age, salary, phone number, address\n";
                cin>>employee.name>>employee.email>>employee.age>>employee.salary>>employee.phone_number>>employee.address;
                cout<<"\ndone\n";
                return;

        }
    }
    cout<<"\nnot found\n";
}

void employee::show_all()
{
    for(auto &employee:emp)
    {
        cout<<"\nname: "<<employee.name<<"\n";
        cout<<"email: "<<employee.email<<"\n";
        cout<<"age: "<<employee.age<<"\n";
        cout<<"salary: "<<employee.salary<<"\n";
        cout<<"phone no: "<<employee.phone_number<<"\n";
        cout<<"address: "<<employee.address<<"\n";
    }
}

void book::create()
{
    book nb;
    cout<<"\nenter book name, author,no of pages, publish date\n";
    cin>>nb.name>>nb.author>>nb.num_pages>>nb.publish_date;
    b.push_back(nb);
    cout<<"\ndone\n";
}

void book::update()
{
    string q;
    cout<<"\nenter book name\n";
    cin>>q;
    for(auto &book:b)
    {
        if(book.name==q)
        {
            cout<<"enter book name, author,no of pages, publish date\n";
            cin>>book.name>>book.author>>book.num_pages>>book.publish_date;
                return;

        }
    }
    cout<<"\nnot found\n";
}

void book::show_all()
{
    for(auto &book:b)
    {
        cout<<"\nname: "<<book.name<<"\n";
        cout<<"author: "<<book.author<<"\n";
        cout<<"no of pages: "<<book.num_pages<<"\n";
        cout<<"publish date: "<<book.publish_date<<"\n";
    }
}

int main()
{
    int c;
    do
    {
        cout<<"\n1. employee\n";
        cout<<"2. book\n";
        cout<<"3. return\n";
        cin>>c;

        switch (c)
        {
        case 1:
        {
            int ec;
            employee e;
            do
            {
                cout<<"\n1. create\n2. update\n3.show\n4.return\n";
                cin>>ec;
                switch (ec)
                {
                case 1:
                    e.create();
                    break;
                
                case 2:
                    e.update();
                    break;
                
                case 3:
                    e.show_all();
                
                case 4:
                    break;
                }
                
            }while(ec!=4);
        }
        case 2:
        {
            int bc;
            book bb;

            do
            {
                cout<<"\n1. create\n2. update\n3.show all\n4. return\n";
                cin>>bc;
                switch (bc)
                {
                case 1:
                    bb.create();
                    break;
                
                case 2:
                    bb.update();
                    break;
                
                case 3:
                    bb.show_all();
                    break;
                
                case 4:
                    break;
                }
            } while(bc!=4);
            break;
        }
        case 3:
        break;
        }
    }while(c!=3);
    return 0;
}