#include <iostream>
using namespace std;

class queue
{
    public : 
    const int size = 5;
    int arr[5];
    int front;
    int rear;

    queue()
    {
        front = -1;
        rear = -1;
    }

    int isFull(queue * q)
    {
        return q->rear == size-1;
    }

    int isEmpty(queue * q)
    {
        return q->front == -1 || q->front > q->rear;
    }

    void enqueue(queue * q, int element)
    {
        if(isFull(q))
        {
            cout << "Queue is Full!" << endl;
        }
        else
        {
           if(q->front == -1)
           {
               q->front = 0; // Initialize front if it's the first element
           }
           q->arr[++q->rear] = element;
           cout << "Enqueue operation success for " << element << endl;

        }
    }

    int dequeue(queue * q)
    {
        if(isEmpty(q))
        {
            cout << "Queue is Empty!" << endl;
        }

        return q->arr[q->front++];
    }

    int peek(queue * q)
    {
        if(isEmpty(q))
        {
            cout << "Queue is Empty!" << endl;
            return -1; // Indicating empty queue
        }
        return q->arr[q->front];
    }
};

int main()
{
    queue q;
    
    q.enqueue(&q, 10);
    q.enqueue(&q, 20);
    q.enqueue(&q, 30);
    q.enqueue(&q, 40);
    q.enqueue(&q, 50);
    
    cout << "Front element is: " << q.peek(&q) << endl;

    cout << "Dequeue operation success: " << q.dequeue(&q) << endl;
    cout << "Front element after dequeue: " << q.peek(&q) << endl;

    return 0;
}