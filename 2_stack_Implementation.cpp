#include <iostream>
using namespace std;

class stack
{
    public : 

    int data[5];
    int top = -1;
    
    int isEmpty()
    {
        return top == -1;
    }
    
    int isFull()
    {
        return top == 5-1;
    }
    
    void push(int element)
    {
        if(isFull())
        {
            cout << "Sorry Stack is Full !" << endl;
        }
        else{
            data[++top] = element;
            cout << "Push operation success for " << element << endl;
        }
        
    }
    
    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is already Empty !!!" << endl;
        }
        else
        {
            
            cout << "Top element poped success !!! : " <<   data[top--] << endl;
        }
    }
    
    void display()
    {
      for(int i=0;i<=top;i++)
      {
          cout << data[i] << " ";
           
      }
   
       cout << endl;
    }
};


int main()
{
    stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    s.display();
    
    s.pop();
    s.pop();
    s.display();
    
    
    
    return 0;
}

