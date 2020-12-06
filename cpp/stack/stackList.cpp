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
        node(T t){
            this->data=t;
            this->next=nullptr;
        }
        node(){

        }
        
    };
    
    node *top;
    public:
    stackList(){
        top=nullptr;
    }
    void push(T t){
        node *nn=new node();
        nn->data = t;
        nn->next = nullptr;
        nn->next =top;
        top=nn;
    }

    T pop(){
        T item =top->data;
        top=top->next;
        return item;
    }

    void display(){
        node *t = this->top;
        cout<<"top->";
        while (t != nullptr)
        {
            cout << t->data<<"\n";
            t = t->next;
        }
    }
    
};
int main()
{
    stackList<int> stk;
    stk.push(10);
    stk.push(30);
    stk.push(50);
    stk.push(60);
    stk.push(130);
    stk.push(16);
    stk.push(13);
    stk.display();
    cout<<endl<<stk.pop()<<endl;
    stk.display();
    return 0;
}