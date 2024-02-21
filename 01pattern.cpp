#include<iostream>
using namespace std;

main()
{
int n;

cin>>n;

int count;
    std::cout << "Hello World!";
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=i; j++)
    {
        if((i+j)%2==0)
        {
            count=1;
        }
        else
        {
            count=0;
        }
        cout<<count;
    }
    cout<<endl;
}




}
