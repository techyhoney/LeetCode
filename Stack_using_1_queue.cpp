#include <iostream>

using namespace std;
void push();
void pop();
void peek();
int q1[5],f=-1,rear=-1,c=0;
int main()
{
int i=0;

        int choice;
        cout<<("1. Push\n");
        cout<<("2. Pop\n");
        cout<<("3. Peek\n\n");

        while(1)
        {
            cout<<("Enter Choice: ");
            cin>>choice;

            switch(choice)
            {
                case 1: push();break;
                case 2: pop();break;
                case 3: peek();break;
                default : cout<<("Invalid Choice\n");
            }
        }
    }

    void push()
    {
            if(f==rear+1)
                cout<<("Stack Full\n");

            else if(f==-1 && rear==-1)
        {
            cout<<("Enter Element: ");
            rear=(rear+1)%5;
            f=(f+1)%5;
            cin>>q1[rear];
            c++;
        }
            else
            {
                cout<<("Enter Element: ");
                rear=(rear+1)%5;
                cin>>q1[rear];
                c++;
            }
        }

    void pop()
    {
        int i,data;
        if(f==-1 && rear==-1)
            cout<<("Stack Empty\n");

        else
        {
            for(i=1;i<c;i++)
            {
                data=q1[f];
                f=(f+1)%5;
                rear=(rear+1)%5;
                q1[rear]=data;
            }
             data=q1[f];
              f=(f+1)%5;
              cout<<"Element Deleted: "<<data<<endl;
              c--;
        }
    }

    void peek(){
           cout<<q1[rear]<<endl;
    }




