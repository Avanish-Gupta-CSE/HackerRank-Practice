#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr)
{
    vector<int> minArr;

    int freqMax = INT_MIN;
    int bird = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int freq = 0;
        int birdCurrent = arr[i]; // 1
        if (birdCurrent != -1)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if (birdCurrent == arr[j]) // if(arr[i] == arr[j])
                {
                    freq++;
                    arr[j] = -1;
                }
            }
        }

        if (freq > freqMax)
        {
            freqMax = freq;
            bird = birdCurrent;
        }

        if (freq == freqMax)
        {
            if (birdCurrent < bird)
            {
                bird = birdCurrent;
            }
        }
    }

    return bird;
}

int main()
{
    vector<int> arr = {1, 4, 4, 4, 5, 3, 3, 3, 2, 5, 5};
    cout << migratoryBirds(arr) << endl;

    return 0;
}