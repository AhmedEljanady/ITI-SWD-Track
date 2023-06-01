#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node*prev;

    Node()
    {
        data = 0;
        next=prev=NULL;
    }
    Node(int d)
    {
        data = d;
        next=prev=NULL;
    }
};
class LinkedList
{
    public:
    Node*first;
    Node*last;
    LinkedList()
    {
        first=last=NULL;
    }
    void addFirst(int data)
    {
        Node*newNode = new Node(data);
        if(last==NULL){
            first=last=newNode;
        }else {
            first->prev=newNode;
            newNode->next=first;
            first = newNode;
        }
    }
    void Display()
    {
        Node*DisNormal = first;
        while(DisNormal != NULL)
        {
            cout<<DisNormal->data<<endl;
            DisNormal = DisNormal->next;
        }
    }

    void DisplayReversed()
    {
        Node*DisRev = last;
        while(DisRev != NULL)
        {
            cout<<DisRev->data<<endl;
            DisRev=DisRev->prev;
        }
    }

    Node *SearchNode (int value)
    {
        Node *PSearch = first;
        while(PSearch!= NULL)
        {
            if(PSearch->data == value)
            {
                return PSearch;
            }
            else
            {
                PSearch = PSearch->next;
            }
        }
        return NULL;
    }
    void insertBefore(Node *PBefore,int data)
    {
        Node *newNode = new Node (data);
        if (PBefore == first)
        {
            addFirst(data);
        }
        else
        {
            newNode->next=PBefore;
            newNode->prev=PBefore->prev;
            PBefore->prev=newNode;
            newNode->prev->next=newNode;
        }
    }
    void deleteNode(Node* PDelete)
    {
        if(PDelete == first)
        {
            PDelete->next->prev = NULL;
            first = PDelete->next;
        }
        else if (PDelete == last)
        {
            PDelete->prev->next = NULL;
            last = PDelete->prev;
        }
        else
        {
            PDelete->prev->next = PDelete->next;
            PDelete->next->prev = PDelete->prev;
        }
    }

};

int main()
{
    LinkedList l;

    l.addFirst(5);
    l.addFirst(8);
    l.addFirst(14);
    l.addFirst(33);
    l.addFirst(24);

    //l.DisplayReversed();
    l.Display();
    cout<<"---------------"<<endl;
    Node *x = l.SearchNode(8);
    l.insertBefore(x,55);
    l.Display();
    //l.deleteNode(x);
    //.Display();
    //cout << x->data<<endl;
    return 0;
}
