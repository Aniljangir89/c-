#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    cout << '\n';
    int arr[n][4], sum[n];
    for (int k = 0; k < n; k++)
    {
        sum[k] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i] += arr[i][j];
        }
    }
    int temp2 = sum[0];
    int temp;
    for (int l = 0; l < n; l++)
    {
        for (int m = l; m < n; m++)
        {
            if (sum[l] < sum[m + 1])
            {
                temp = sum[l];
                sum[l] = sum[m + 1];
                sum[m + 1] = temp;
            }
        }
    }
    
    for (int j =n-1; j > 0; j--)
    {
        if(temp2-sum[j]==0)
        {
            cout<<n-j;
            break;
        }
    }
    
    return 0;
}
