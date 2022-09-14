#include<iostream>
using namespace std;
class abc
{
int MAXSIZE=100;
int size;
int arr[MAXSIZE];
void create(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    size=n;
    cout<<"created successfully";
}
bool Isempty()
{
    if(size==0)
    return 1;//ask if return true will also do
    else
    return 0;
}
bool Isfull()
{
    if(size==MAXSIZE)
    return 1;
    else
    return 0;
}
int find(int k)
{
    if(k>=0 &&k<size)
    return arr[k];
    else
    cout<<"wrong indexing";
    return -1;
}
};
int main()
{ int v;
abc a;
    do
    {
        cout<<"Welcome!\n";
        cout<<"Would you like to perform certain operations on Linear list\n";
        cout<<"1.Create\n";
        cout<<"2.IsFull\n";
        cout<<"3.IsEmpty\n";
        cout<<"4.Find\n";
        cin>>v;
        if(v==0)
        break;
        switch(v)
        {
            case 1:int k;
                    cin>>k;
                    a.create(k)
                    break;
            case 2: cout<<a.IsEmpty()
                    break;
            case 3: cout<<a.Isfull();
                    break;
            case 4:int j;
                    cin>>j
                    cout<<a.find(j);
                    break;
            default:cout<<"Enter valid value\n";
        }
    }
    cout<<"the execution is completed";
    return0;
    
}
