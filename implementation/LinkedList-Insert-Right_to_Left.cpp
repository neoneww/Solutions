#include<bits/stdc++.h>
using namespace std;

//CREATING A LINKED LIST

struct node{
    int key;
    node* next;

    node(int x)
    {
        key=x;
        next=NULL;
    }
};
//BELOW IS MY MY FUNCTION TO INSERT A LINKED LIST AT THE END WE WILL RETURN A POINTER POINTING TO A NODE
node* insert_end(node* head,int key)
{
    node* temp = new node(key);
    temp->next = head;
    return temp;  //TEMP HOLD THE NEW NODE ADRESS
}

void print_node(node* head)
{
    while(head!=NULL)
    {
        cout<<head->key<<" ";
        head = head->next;
    }
}

int main()
{
    node* head = NULL;

    head = insert_end(head,20);
    head = insert_end(head,210);
    head = insert_end(head,220);
    head = insert_end(head,2120);

    print_node(head);

}

