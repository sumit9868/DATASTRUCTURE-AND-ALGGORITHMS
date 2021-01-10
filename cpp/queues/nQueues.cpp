#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class nQueue
{
private:
    int n;
    int q;
    vector<vector<T>> nq;

public:
    nQueue()
    {
    }
    nQueue(int row, int col)
    {
        n = row;
        q = col;
        nq.resize(row);
        for (int i = 0; i < row; i++)
        {
            nq[i].resize(0);
        }
    }
    void addItem(int row, T item)
    {
        if (row > n)
        {
            cout << "enter a valid queue number" << endl;
            return;
        }
        if (nq[row].size() == q)
        {
            cout << "queue " << row << " is full \n";
            return;
        }
        nq[row].push_back(item);
    }

    T remove(int row){
        T item;
        if (row > n)
        {
            cout << "enter a valid queue number" << endl;
            return item;
        }
        if (nq[row].size() == 0)
        {
            cout << "queue " << row << " is empty \n";
            return item;
        }

        item=nq[row][0];
        nq[row].erase(nq[row].begin());
        return item;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "#" << i << "\t";
            for (int j = 0; j < nq[i].size(); j++)
            {
                cout << nq[i][j] << "\t";
            }
            cout << endl;
        }
    }
};
int main()
{
    nQueue<int> q(5, 5);
    q.addItem(2, 3);
    q.addItem(3, 2);
    q.addItem(2, 4);
    q.addItem(4, 1);
    q.addItem(2, 6);
    q.addItem(4, 7);
    q.addItem(2, 4);
    q.addItem(1, 1);
    q.addItem(0, 6);
    q.addItem(3, 7);
    q.addItem(0, 2);
    q.addItem(2, 6);
    q.addItem(0, 4);
    q.addItem(0, 5);
    q.display();
    int removed=q.remove(2);
    cout<<"removed element is "<<removed<<endl;
    q.display();
    return 0;
}