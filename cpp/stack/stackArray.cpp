#include <iostream>
using namespace std;
template <typename T>
class stackArray
{
private:
    T *stk;
    int top;
    int cap;

public:
    stackArray(int c)
    {
        this->cap = c;
        this->stk = new T[c];
        this->top = -1;
    }
    void push(T item)
    {
        if (this->cap = 0)
        {
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->cap--;
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

        item=stk[this->top];
        this->top--;
        this->cap++;
        return item;
    }

    void display(){
        cout<<"current statck is\n";
        for (int i = this->top; i >=0; i--)
        {
            cout<<this->stk[i];
            if(i==this->top){
                cout<<"<-top";
            }
            cout<<endl;
        }
            cout<<"---------------------"<<endl;
        
    }

};
int main()
{
    stackArray<int> stk1(10);
    stk1.push(1);
    stk1.push(5);
    stk1.push(6);
    stk1.push(57);
    stk1.push(81);
    stk1.push(94);
    stk1.push(54);
    stk1.display();
    cout<<stk1.pop()<<endl;
    stk1.display();
    return 0;
}