#include<iostream>
using namespace std;

int sum(int (&arr)[10],int n)
{
    if(n < 0)
        throw "n shouldn't less than 1 bro";
    int s = 0;
    for(int i = 0;i < (n-1);i++)
        s += arr[i];
    return s;
}

int main()
{
    int cody_array[10] = {1,543,234,6,3,-123,45,55,1,6};
    try{cout << "前6項和:" << sum(cody_array,-6) << endl;}
    catch(char const *e)
    {
        cout << "An Exception has been throw" << endl;
        cout << e;
        return 1;
    }
    return 0;
}