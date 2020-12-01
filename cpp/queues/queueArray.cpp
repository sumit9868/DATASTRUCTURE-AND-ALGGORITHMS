#include <iostream>
using namespace std;
template <typename T>
class queueArray
{
private:
    T *data;
    int head;
    int tail;
    int size;

public:
    queueArray(int cap)
    {
        this->head = -1;
        this->tail = -1;
        this->size = cap;
        this->data = new T[this->size];
    }
    void enque(T t)
    {
        if (this->tail < this->size - 1)
        {
            if (this->head == -1)
            {
                this->head = 0;
            }
            this->data[this->tail + 1];
            this->tail += 1;
        }
        else
        {
            cout << "\nOverflow\n";
            return;
        }
    }
    T deque(){
        T t;
        if(tail==-1){
            cout<<"\nUnderflow\n";
            return t;
        }
    }
    ~queueArray();
};

int main()
{
    return 0;
}