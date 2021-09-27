#include <iostream>
using namespace std;

class Code{
  public:
    int data;
    
    Code()
    {
        data = 11;
    }
    
    void display()
    {
        cout<<"Hey from Display()\n";
    }
};

int main()
{
  Code A;
  Code* ptr;
  ptr = &A;
  
  cout<<A.data<<"\n";
  cout<<ptr->data<<"\n";

  A.display();
  ptr->display();
  return 0;
}
