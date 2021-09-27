// Memory allocation for array

#include <iostream>
using namespace std;

int main()
{
    int *a = new int[10];
    
    int m;cin>>m;
    int *b = new int(m); 
    
    for(int i = 0;i<10;i++) a[i] = i;
    for(int i = 0;i<m;i++)  b[i] = i;
    
    for(int i = 0;i<10;i++) cout<<a[i]<<" ";
    cout<<"\n";
    for(int i = 0;i<m;i++)  cout<<b[i]<<" ";
    cout<<"\n";
    delete []a;
    delete []b;
    cout<<a[1]<<"\n";   //not possible
    return 0;
}
