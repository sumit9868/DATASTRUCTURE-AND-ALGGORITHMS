#include <iostream>
using namespace std;
template <typename T>
class queue
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

        node(){

        }
    };
    node *head;
    node *tail;
    int size;
public:
    queue()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void enqueue(T t)
    {
        node *nn=new node();
        nn->data = t;
        nn->next = nullptr;
        if (this->size > 0)
        {
            this->tail->next = nn;
            this->tail = nn;
        }
        else
        {
            this->head = nn;
            this->tail = nn;
        }
cout<<"data entered in the queue\n"<<endl;
        this->size++;
    }

    T dequeue()
    {
        T temp;
        if (size = 0)
        {
            cout<<"queue is empty, garbage value returned\n";
            return temp;
        }
        T t = this->head->data;
        this->head=this->head->next;
        return t;
    }

    void display()
    {
        node *t = this->head;
        while (t != nullptr)
        {
            cout << t->data<<"->";
            t = t->next;
        }
    }
};
int main()
{
    queue<int> q;
    q.enqueue(10);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(130);
    q.enqueue(16);
    q.enqueue(13);
    q.display();
    cout<<endl<<q.dequeue()<<endl;
    q.display();
    return 0;
}