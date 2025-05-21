#include <bits/stdc++.h>
using namespace std;

class Node {

    public : 
    int data;
    Node * next;



    Node(int data,Node * next)
    {
        this->data = data;
        this->next = next;
    }

};

Node * addElements(vector<int> & arr)
{
    Node * head = new Node(arr[0],nullptr);
    Node * mover = head;

    for(int i = 1;i < arr.size();i++)
    {
        Node * temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = mover->next;
    }

    return head;


}

int main()
{
   vector<int> arr = {1,3,2,4,5};

    Node * getHeader = addElements(arr);

    cout << getHeader->data << endl;
    cout << getHeader->next->data << endl;
    cout << getHeader->next->next->data << endl;

}