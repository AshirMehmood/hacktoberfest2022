//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int z, o, t = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                z++;
            }
            if (a[i] = 1)
            {
                o++;
            }
            if (a[i] = 2)
            {
                t++;
            }
        }
        for (int i = 0; i < z; i++)
        {
            a[i] = 0;
        }
        for (int i = z + 1; i < o; i++)
        {
            a[i] = 1;
        }
        for (int i = o + 1; i < t; i++)
        {
            a[i] = 2;
        }
        for (int i = 0 + 1; i < 5; i++)
        {
            cout << a[i];
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int arr[5] = {0, 1, 1, 0, 2};
    Solution s;
    s.sort012(arr, 5);
    return 0;
}

// } Driver Code Ends