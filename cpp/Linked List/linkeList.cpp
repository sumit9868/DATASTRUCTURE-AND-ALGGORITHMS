#include <iostream>
using namespace std;
template <typename T>
class LinkedList
{
    class node
    {
    public:
        T data;
        node *next;
        node(T t)
        {
            this->data = t;
        }

        node()
        {
        }
    };
    node *head;
    int size;

public:
    LinkedList()
    {
        this->head = nullptr;
        size = 0;
    }

    void addAtFirst(T t)
    {
        node *nn = new node();
        nn->data = t;
        nn->next = nullptr;
        if (this->size == 0)
        {
            this->head = nn;
        }else{
            nn->next=this->head;
            this->head=nn;
        }
        this->size++;
        display();
    }
    T deleteFirst()
    {
        T temp = this->head->data;
        this->head = this->head->next;
        display();
        return temp;

    }
    void display(){
        node *temp;
        temp=this->head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    LinkedList<int> list1;
    list1.addAtFirst(1);
    list1.addAtFirst(2);
    list1.addAtFirst(3);
    list1.addAtFirst(4);
    list1.addAtFirst(5);
    list1.addAtFirst(6);
    cout<<list1.deleteFirst();
    
    return 0;
}