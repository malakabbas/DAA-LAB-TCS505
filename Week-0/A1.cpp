#include<iostream>

using namespace std;

int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int f = 0;
    int comp=0;
    for(int i=0;i<s;i++)
    {
        comp++;
        if(a[i]==key)
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        cout<<"Found "<<comp;
    }
    else
    {
        cout<<"Not Found "<<comp;
    }
    return 0;
}
