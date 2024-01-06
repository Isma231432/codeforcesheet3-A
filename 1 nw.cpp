#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long A[N+2];
    long long sum=0;
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    cout<< abs(sum)<<endl;
    return 0;
}


