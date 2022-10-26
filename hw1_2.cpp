#include<iostream>
using namespace std;
int bool_count(bool *a,int size)
{
    int num = size - 1;
    int t = 0;
    while(t >= 0)
    {
        for(int j = 0;j < size;j++)
        {
            cout << a[j];
        }
        cout << endl;


        if(a[num] == 0)
            a[num] = 1;
        else
        {
            a[num] = 0;
            t = num-1;
            while(a[t] == 1)
            {
                a[t] = 0;
                t--;
            }
            a[t] = 1;
        }
    }    
    return 0;
}


int main()
{
    bool a[3] = {0,0,0};
    int size = sizeof(a)/sizeof(a[0]);
    cout << size << endl;
    bool_count(a,size);
    return 0;
}