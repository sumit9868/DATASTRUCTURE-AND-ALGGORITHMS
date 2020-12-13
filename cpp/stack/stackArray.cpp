#include <iostream>
using namespace std;
template <typename T>
class stackArray
{
private:
    T *stk;
    int top;
    int cap;
    int size;

public:
    stackArray()
    {
    }
    stackArray(int c)
    {
        this->cap = c;
        this->size = 0;
        this->stk = new T[c];
        this->top = -1;
    }
    void push(T item)
    {
        if (this->size == this->cap)
        {
            cout <<"cannot add "<<item<< "...Overflow\n";
            return;
        }
        this->top++;
        this->size++;
        stk[top] = item;
    }
    T pop()
    {
        T item;
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return item;
        }

        item = stk[this->top];
        this->top--;
        this->size--;
        cout << "popping the queue ";
        return item;
    }

    void display()
    {
        cout << "current statck is\n";
        for (int i = this->top; i >= 0; i--)
        {
            cout << this->stk[i];
            if (i == this->top)
            {
                cout << "<-top";
            }
            cout << endl;
        }
        cout << "---------------------" << endl;
    }

    T peek()
    {
        cout << "the queue top is";
        T item;
        item = stk[top];
        return item;
    }

    bool isEmpty()
    {
        return this->size == 0;
    }

    bool isFull()
    {
        return this->cap == this->size;
    }
};
int main()
{
    stackArray<int> stk1(10);
    if (stk1.isEmpty())
    {
        cout << "the queue is empty now\n";
    }
    stk1.push(1);
    stk1.push(5);
    stk1.push(6);
    stk1.push(57);
    stk1.push(81);
    stk1.push(94);
    stk1.push(54);
    stk1.push(64);
    stk1.push(12);
    stk1.push(543);
    stk1.display();
    if (stk1.isFull())
    {
        cout << "the queue is full now\n";
    }
    cout << stk1.pop() << endl;
    cout<<stk1.peek()<<endl;
    stk1.display();

    return 0;
}