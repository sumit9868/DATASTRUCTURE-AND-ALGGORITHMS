#include <iostream>
using namespace std;
template <typename T>
class stackList
{
    class node
    {

    public:
        T data;
        node *next;
        node(T t)
        {
            this->data = t;
            this->next = nullptr;
        }
        node()
        {
            this->next=nullptr;
        }
    };

    node *top;
    int cap;
    int size;

public:
    stackList()
    {
        this->top = nullptr;
    }
    stackList(int c)
    {
        this->cap = c;
        this->size = 0;
        this->top = nullptr;
    }
    void push(T t)
    {
        node *nn = new node(t);
        nn->next = this->top;
        this->top = nn;
        this->size++;
    }

    T pop()
    {
        T item = this->top->data;
        this->top = this->top->next;
        this->size--;
        return item;
    }

    void display()
    {
        node *t = this->top;
        while (t!= nullptr)
        {
            cout << t->data;
            if (t == this->top)
            {
                cout << "<-top";
            }
            cout << endl;
            t = t->next;
        }
    }
    T peek()
    {
        T item = this->top->data;
        return item;
    }

    bool isEmpty()
    {
        return this->size == 0;
    }

    bool isFull()
    {
        return this->size == this->cap;
    }
};
int main()
{
    stackList<int> stk;
    stk.display();
    stk.push(10);
    stk.push(30);
    stk.push(50);
    stk.push(60);
    stk.push(130);
    stk.push(16);
    stk.push(13);
    stk.display();
    cout << endl;
    cout<< stk.pop() << endl;
    stk.display();
    return 0;
}