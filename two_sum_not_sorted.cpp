#include <iostream>
using namespace std;

void summ(int arr[],int add,int size)
{
    for(int i = 0;i<size;i++)
    {
        int sum = arr[i];
        int element1 = i;
        int element2 = 0;
        for(int j =i+1;j<size;j++)
        {
            if(sum+arr[j]==add)
            {
                element2 = j;
                cout<<element1<<" "<<element2<<endl;
                exit(0)
            }
        }
    }
}

int main()
{
    int arr[3] = {3,3};
    int size = 2;

    summ(arr,6,size);
}
