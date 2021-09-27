#include <iostream>
using namespace std;

class Code{
  private:
    int data;
  public:
    void put(int x)
    {
       data = x;
    }
    
    void put_this(int x)
    {
       this->data = x;
    }
    
    void put_this_amazing(int data)
    { 
        // Here it won't be able to update the value
        data = data;
        
        // using this helps to update the data;
        this->data = data;
    }
    
    void get()
    {
        cout<<data<<"\n";
    }
};


int main()
{
  Code a;
  
  a.put(10);
  a.get();
  
  a.put_this(20);
  a.get();
  
  a.put_this_amazing(30);
  a.get();
  return 0;
}
