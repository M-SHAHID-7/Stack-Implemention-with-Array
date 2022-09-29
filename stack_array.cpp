#include<iostream>
using namespace std;

const int ARRAY_SIZE=3;
class STACK
{
  private:
    int top;
    int arr[ARRAY_SIZE];

  public :
   STACK()
   {
    top=-1;
   }

   bool isFull()
   {
    if(top>=ARRAY_SIZE-1)
    {
      return true;
    }
    else
    {
        return false;
    }
   } 


   bool isEmpty()
   {
    if(top<0)
    {
      return true;
    }
    else
    {
        return false;
    }
   } 


   void push(int num)
   {
    if(isFull())
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]=num;
    }
   }

   int pop()
   {
    if(isEmpty())
    {
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else
    {
        top--;

        return arr[top+1];
    }
   }
   void clear()
   {
    top=-1;
    cout<<"Stack Cleared"<<endl;
   }

   void printStack()
   {
    int temp= top;
    if(isEmpty())
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {

    
    for(int i=temp;i>=0 ;i--)
    {
        cout<<arr[i]<<endl;
    }
    }
   }
};

char Menu()
{
    while(true){
    cout<<"1. PUSH "<<endl;
    cout<<"2. POP "<<endl;
    cout<<"3. CLEAR "<<endl;
    cout<<"4. Print Stack"<<endl;
    cout<<"Enter Your Option"<<endl;
    char opt;
    cin>>opt;
    if(opt=='1'|| opt=='2'|| opt=='3'|| opt=='4')
    {
        return opt;
    }
    else
    {
        system("CLS");
    cout<<"Enter correct option"<<endl;
    }
    }
}
int main()
{
    STACK s;
while(true)
{
    char option=Menu();
    if(option=='1')
    {
       cout<<"Enter a num"<<endl;
       int num; cin>>num;
       s.push(num);

    }
    else if(option=='2')
    {
        int p=s.pop();
        cout<<p<<endl;
    }
    else if(option=='3')
    {
        s.clear();
    }
    else if(option=='4')
    {
        s.printStack();
    }

}
}