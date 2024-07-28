#include<iostream>
#include<string>
using namespace std;

const int max_tasks = 100; //maximum number of tasks
struct Task
{
   string description;
   bool isDone;
};
int main()
{
    Task tasks[max_tasks]; //array to store tasks
    int numtasks = 0;
   while(true)
   {
    cout<<"choose the operation that you want to do"<<endl;
    cout<<"1. Add task"<<endl;
    cout<<"2. List/view tasks"<<endl;
    cout<<"3. Mark task as Done"<<endl;
    cout<<"4. Quit"<<endl;
    int choice;
    cin>>choice;
    if(choice==1)
    {
        if(numtasks < max_tasks)
        {
            cout<<"Enter Task Decription:";
            cin.ignore(); //clear the newline character from the list
            getline(cin,tasks[numtasks].description);
            tasks[numtasks].isDone=false;
            numtasks++;
            cout<<"Task Add."<<endl;
        }
        else
        { 
         cout<<"Task list is full. you cannot add more task"<<endl;
        }
    }
    else if(choice == 2)
       {
        cout<<"Tasks:"<<endl;
        for(int i=0;i<numtasks;i++)
        {
            cout<<(i+1)<<".";
            if(tasks[i].isDone)
            {
                cout<<"[completed] ";
            }
        else
        {
            cout<<"[] ";
        }
        cout<<tasks[i].description<<endl;
       }
       }
       else if(choice == 3)
       {
         cout<<"Enter thr task number to mark as done:";
         int tasknumber;
         cin>>tasknumber;
         if(tasknumber > 0 && tasknumber <= numtasks)
        {tasks[tasknumber - 1].isDone = true;
        cout<<"Task marked as done."<<endl;
        }
        else
        { 
            cout<<" Invalid task number"<<endl;
        }
       }
       else if(choice == 4)
       {  //quite the code
       cout<<"You quit. Goodbye !"<<endl;
       break;
       }
       else
       {cout<<"Invalide choice number.Please try again"<<endl;
       }}
       return 0;
       
}
