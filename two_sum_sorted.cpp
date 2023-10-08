//two sum, in case the array is sorted 

#include <iostream>
#include <vector>
using namespace std;


vector<int> summ(int arr[],int n,int target)
{
    int i =0;   
    int j =n-1;
    vector<int>answ;

    while(i<j){
    if(arr[i]+arr[j]==target)
    {
        answ.push_back(i);
        answ.push_back(j);
        return answ;
    }

    else if(target<(arr[i]+arr[j]))
    {
        j--;
    }
    else
    {
        i++;
    }
    }

    return answ;
}

int main()
{
    int arr[5]={2,7,11,15};
    int size = 4;
    int target = 18;

    vector<int> arr1 = summ(arr,size,target);

    for(int i=0;i<2;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

}
