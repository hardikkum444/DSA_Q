
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[],int size1, int size2,int arr2[],int arr3[])
{
    int i = 0;
    int j = 0;
    //vector <int> ans; if we take arr3[] in input then we dont need this extra array memory space 
    int k =0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[k++] = arr2[j++];
        }
    }

    //as soon as i or j value exceeds the size value, that case
    //the while loop stops and then executes the following while loops.
    
    while(i<size1)
    {
        arr3[k++] = arr1[i++];
    }

    while(j<size2)
    {
        arr3[k++] = arr2[j++];
    }

    //return arr3;

}

int main()
{
    int arr1[4] = {1,2,7,8};
    int arr2[3] = {3,4,6};
    int arr3[7] = {0};

    merge(arr1,4,3,arr2,arr3);
    
    for(int i=0;i<7;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

}
