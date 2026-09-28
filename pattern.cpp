//1234
//1234
//1234
//1234
/*Solving is as Follows
outer loop ->horizontal line
inner loop ->vertical line*/
#include<iostream>
using namespace std;
int main()
{   
    cout<<"Enter Value of Num of rows :\n";
    int n;
    cin>>n;
    cout<<"Value of n is -"<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}