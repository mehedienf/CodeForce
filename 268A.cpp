#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;
    int l = n*2;
    int a[n*2];
    
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < l; )
    {
        for (int j = 0; j < l; )
        {
            if (a[i+1] == a[j])
            {
                count++;
            }
            j += 2;
        }
        i += 2;
    }
    cout<<count<<endl;
    return 0;
}