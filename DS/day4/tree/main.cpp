#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *Left;
    Node *Right;
    Node()
    {
        Data = 0;
        Left = Right = NULL;
    }
    Node(int data)
    {
        Data = data;
        Left = Right = NULL;
    }
};

class Tree
{
    Node *Root;

public:
    Tree()
    {
        Root = NULL;
    }
    void Add(int data)
    {
        Node *newNode = new Node(data);
        if (Root == NULL)
        {
            Root = newNode;
        }
        else
        {
            Node *PCurrent = Root;
            Node *Parent = PCurrent;

            while (PCurrent != NULL)
            {
                Parent = PCurrent;
                if (newNode->Data < PCurrent->Data)
                {
                    PCurrent = PCurrent->Left;
                }
                else
                {
                    PCurrent = PCurrent->Right;
                }
            }
            if (newNode->Data < Parent->Data)
            {
                Parent->Left = newNode;
            }
            else
            {
                Parent->Right = newNode;
            }
        }
    }

    Node *SearchNode(int PSearch)
    {
        Node *PCurrent = Root;
        while (PCurrent != NULL)
        {
            if (PCurrent->Data == PSearch)
            {
                return PCurrent;
            }
            else if (PSearch > PCurrent->Data)
            {
                PCurrent = PCurrent->Right;
            }
            else
            {
                PCurrent = PCurrent->Left;
            }
        }

        return NULL;
    }
    Node *ParentNode(Node *ChildNode)
    {
        Node *PCurrent = Root;
        while (PCurrent != NULL)
        {
            if (PCurrent->Left == ChildNode || PCurrent->Right == ChildNode)
            {
                return PCurrent;
            }
            else if (ChildNode->Data > PCurrent->Data)
            {
                PCurrent = PCurrent->Right;
            }
            else
            {
                PCurrent = PCurrent->Left;
            }
        }
        return NULL;
    }

    void Display()
    {
        Display(Root);
    }

    void DeleteNode(Node *PDelete)
    {
        // Root
        if (PDelete == Root)
        {

            if (Root->Left == NULL && Root->Right == NULL)
            { // 1.1Root with no Childs
                Root = NULL;
            }
            else if (Root->Right == NULL)
            {
                // 1.2.Root with Left child only
                Root = Root->Left;
            }
            else if (Root->Left == NULL)
            {
                // 1.3 Root with Right child only
                Root = Root->Right;
            }
            else
            {
                // 1.4 Root with Left and Right
                Node *Pcurrent = Root->Right;
                while (Pcurrent->Left != NULL)
                {
                    Pcurrent = Pcurrent->Left;
                }
                Node *Parent = ParentNode(Pcurrent);
                Pcurrent->Right = Root->Right;
                Pcurrent->Left = Root->Left;
                Root = Pcurrent;
                Parent->Left = NULL;
            }
        }
        else
        {
            Node *Parent = ParentNode(PDelete);
            if(PDelete->Left==NULL && PDelete->Right==NULL){
                // 2.1Not Root with no Childs
                if(Parent->Left==PDelete){
                    Parent->Left=NULL;
                }else{
                    Parent->Right=NULL;
                }
            }else if(PDelete->Right==NULL){
                // 2.2.Not Root with Left child only
                if(Parent->Left==PDelete){
                    Parent->Left=PDelete->Left;
                }else{
                    Parent->Right=PDelete->Left;
                }
            }else if(PDelete->Left==NULL){
               //2.3 Not Root with Right child only
               if(Parent->Left==PDelete){
                   Parent->Left=PDelete->Right;
               }else{
                   Parent->Right=PDelete->Right;
               }
            }else{
                // 2.4 Not Root with Left and Right
                Node* Pcurrent=PDelete->Right;
                 while (Pcurrent->Left != NULL)
                {
                    Pcurrent = Pcurrent->Left;
                }
                Pcurrent->Left=PDelete->Left;

                if(Parent->Right==PDelete){
                    Parent->Right=PDelete->Right;
                }else{
                    Parent->Left=PDelete->Right;
                }
            }
        }

        delete PDelete;
    }



private:
    void Display(Node *PDisplay)
    {
        if (PDisplay == NULL)
        {
            return;
        }
        Display(PDisplay->Right);
        cout << PDisplay->Data << endl;
        Display(PDisplay->Left);
    }
};

int main()
{
    Tree t;
    t.Add(15);
    t.Add(10);
    t.Add(20);
    t.Add(30);
    t.Add(50);
    t.Add(18);
    t.Add(11);
    t.Add(1);
    t.Add(3);
    t.Add(4);




    Node* founded=t.SearchNode(10);
    t.DeleteNode(founded);
    t.Display();

    return 0;
}
