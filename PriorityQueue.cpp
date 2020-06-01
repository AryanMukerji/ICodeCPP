#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Node
{
	int Priority;
	int Info;
	struct Node *Link;
};

class PriorityQueue // Class Priority Queue
{
    private:
    
        Node *Front;
        
    public:
    
        PriorityQueue()
        {
            Front = NULL;
        }
        
        void Insert(); // Insert into Priority Queue
        
        void Delete(); // Delete from Priority Queue
        
        void Display(); // Print Priority Queue
};

void PriorityQueue::Insert()
{
    Node *tmp, *q;
    int Item, Priority;
   
    cout<<"\n Input the item value to be added in the queue : ";
    cin>>Item;
    cout<<"\n Enter its priority : ";
    cin>>Priority;
   
    tmp = new Node;
    tmp->Info = Item;
    tmp->Priority = Priority;
   
    if(Front == NULL || Priority < Front->Priority)
    {
        tmp->Link = Front;
        Front = tmp;
    }
    else
    {
        q = Front;
        
        while(q->Link != NULL && q->Link->Priority <= Priority)
        {
            q = q->Link;
        }
        
        tmp->Link = q->Link;
        q->Link = tmp;
    }
}

void PriorityQueue::Delete()
{
    Node *tmp;
    
    if(Front == NULL)
    {
        cout<<"\n Queue Underflow !! \n";
    }
    else
    {
        tmp = Front;
        cout<<"\n Current Highest Priority : "<<tmp->Priority;
        cout<<"\n Deleted Item Is : "<<tmp->Info;
        Front = Front->Link;
        free(tmp);
    }
}

int main()
{
    int a;
    PriorityQueue PQ;
    
    while(1)
    {
        cout<<"\n\n Select An Option : \n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: PQ.Insert();
            break;
        
            case 2: PQ.Delete();
            break;
            
            case 3: PQ.Display();
            break;
            
            case 4: exit(0);
            break;
            
            default : cout<<"\n Option Not Available !! \n";
        }
    }
    return 0;
}