#include <iostream>
using namespace std;
class pQueue
{
private:
    //2-D array of queues
    int **P;
    //array of front indexes
    int *F;
    //array of rear indexes
    int *R;
    //number of priority queues
    int pSize;
    //length of a single queue
    int qSize;
    

public:
    pQueue(int p_size, int q_size)
    {
        this->pSize = p_size;
        this->qSize = q_size;
        this->P = new int *[p_size];
        this->F = new int[p_size];
        this->R = new int[q_size];
        for (int i = 0; i < p_size; i++)
        {
            F[i] = -1;
            R[i] = -1;
            P[i] = new int[q_size];
        }
    }

    void add(int p, int data)
    {
        cout << "adding " << data << " in " << p << " index queue\n";
        int front;
        int rear;
        front = F[p];
        rear = R[p];
        if (front == -1 && rear == -1)
        {
            //queue of priority p is empty
            front = 0;
            rear = 0;
        }
        else if ((rear == this->qSize && front == 0) || (front == rear + 1))
        {
            //queue of pririty p is full
            cout << "queue overflow\n";
            cout << front << " " << rear << " " << this->qSize << endl;
            return;
        }
        else if (rear == this->qSize)
        {

            rear = 0;
        }
        else
        {
            rear++;
        }

        cout << front << " " << rear << " " << this->qSize << endl;
        P[p][rear] = data;
        cout << "element added succesfully\n";
        F[p] = front;
        R[p] = rear;
    }

    int remove(int p)
    {
        int item;
        int front;
        int rear;
        front = F[p];
        rear = R[p];
        if (front == -1 && rear == -1)
        {
            //given queue is empty
            cout << "garbage value returned\n";
            return item;
        }
        item = P[p][front];
        if (rear == front)
        {
            rear = -1;
            front = -1;
        }
        else if (front == this->qSize - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        this->F[p] = front;
        this->R[p] = rear;

        return item;
    }

    void display()
    {
        cout << "\ndisplaying the complete priority queue\n";
        for (int i = 0; i < this->pSize; i++)
        {
            cout << i << " th queue\t";
            for (int j = F[i]; j <= R[i] && j != -1; j = (j + 1) % this->qSize)
            {
                cout << P[i][j] << "<-";
            }
            cout << endl;
        }
    }
};
int main()
{
    pQueue p_queue(5, 5);
    p_queue.add(2, 2);
    p_queue.add(2, 3);
    p_queue.add(2, 2);
    p_queue.add(1, 3);
    p_queue.add(1, 2);
    p_queue.add(2, 3);
    p_queue.add(4, 2);
    p_queue.add(3, 3);
    p_queue.add(0, 4);
    p_queue.add(0, 5);
    p_queue.display();
    int deleted=p_queue.remove(2);
    cout<<"deleted item"<<deleted;
    p_queue.display();
    return 0;
}