
#include <iostream>

using namespace std;
int findMiddle(int a,int b,int c)
{
    if(a<b && a< c && b<c)
    {
        //  cout<<a<<endl;
        cout<<b<<endl;
        //  cout<<c<<endl;
    }
    else if(a <b && a < c && c<b)
    {
        //  cout<<a<<endl;
        cout<<c<<endl;
        //  cout<<b<<endl;
    }
    else if(b<a && b<c && a<c)
    {
        //  cout<<b<<endl;
        cout<<a<<endl;
        //  cout<<c<<endl;
    }
    else if(b<a && b<c && c<a)
    {
        //  cout<<b<<endl;
        cout<<c<<endl;
        //  cout<<a<<endl;
    }
    else if(c<a && c<b && b<a)
    {
        //  cout<<c<<endl;
        cout<<b<<endl;
        //  cout<<a<<endl;
    }
    else if(c<a && c<b && a<b)
    {
        //  cout<<c<<endl;
        cout<<a<<endl;
        //  cout<<b<<endl;
    }

}

int main()
{
    findMiddle(2,6,4);
    return 0;
}
