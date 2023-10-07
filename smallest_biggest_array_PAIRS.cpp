#include <iostream>
#include <utility>
using namespace std;

// void greatest(int arr[],int size)
// {
//     //int great = ;
//     int ans = __WINT_MIN__;

//     for(int i = 0;i<size;i++)
//     {
//         if (arr[i]>ans)
//         {
//             ans = arr[i];
//         }
//     }
//     cout<<"greatest element is: "<<ans<<endl;
// }

// void smallest(int arr[],int size)
// {
//     //int great = ;
//     int ans1 = __INT_MAX__;

//     for(int i = 0;i<size;i++)
//     {
//         if (arr[i]<ans1)
//         {
//             ans1 = arr[i];
//         }
//     }
//     cout<<"smallest element is: "<<ans1<<endl;
// }


pair<long long, long long> getMinMax(long long a[], int n) 
{
    long long ans1 = __WINT_MIN__;
    for(int i =0;i<n;i++)
    {
        if(a[i]>ans1)
        {
            ans1 = a[i];
        }
    }

    long long ans2 = __INT_MAX__;
    for(int j=0;j<n;j++)
    {
        if(a[j]<ans2)
        {
            ans2 = a[j];
        }
    }
    return make_pair(ans2,ans1);
}

int main()
{
    long long arr[5]={1,2,54,34,101};
    int size = 5;

    pair<long long, long long> result = getMinMax(arr,size);

    cout << "Smallest element is: " << result.first << endl;
    cout << "Largest element is: " << result.second << endl;

    return 0;
    
}
