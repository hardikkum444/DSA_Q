#include <iostream>
#include <string>
using namespace std;

void reverse(string str)

//this is a less optimized solution which i figured out myself


// {
//     int size = str.size();
//     char arr[size];

//     for(int i=0;i<size;i++)
//     {
//         arr[i] = str[i];
//     }

//     for(int j = size;j>=0;j--)
//     {
//         cout<<arr[j];
//     }
//     cout<<endl;
// }

//this is a more optimized solution using which the compiler would accept and solve in lesser time
    {
        int j = str.size()-1;
        int i = 0;

        while(j>i)
        {
            swap(str[i],str[j]);
            i++;
            j--;
        }
        cout<<str<<endl;
    }

int main()
{
    string str = "Geeks";
    reverse(str);
}
