/* 
TwoProductProblem(Part2).cpp : Create a function that takes an array arr and a number n and returns an array of two integers whose product is that of the number n.
*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> twoProduct(vector<int> arr, int n) 
{
    vector<int> newArr;
    for (int i = 0; i < (arr.size() - 1); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] * arr[j]) == n)
            {
                newArr.push_back(arr[i]);
                newArr.push_back(arr[j]);
            }
        }
    }

    if (newArr.empty())
    {
        newArr.push_back(0);
        newArr.push_back(0);
    }

    sort(newArr.begin(), newArr.end());

    return newArr;
}

int main()
{
    int x = 0;
    int n;
   
    vector<int> arr;

    while (x != -1)
    {
        cin >> x;
        arr.push_back(x);
    }
    arr.pop_back();
    cin >> n;

    for (int i = 0; i < 2; i++)
    {
        cout << twoProduct(arr, n)[i] << " ";
    }
}

