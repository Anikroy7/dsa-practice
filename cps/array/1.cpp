#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    for (int row = 0; row < image[0].size(); row++)
    {
        for (int start = 0, end = image[0].size() - 1; start <= end; start++, end--)
        {
            int startedFliped = image[row][start] ^ 1;
            image[row][start] = image[row][end] ^ 1;
            image[row][end] = startedFliped;
        }
    }

    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};

    flipAndInvertImage(image);
    for (int row = 0; row < image[0].size(); row++)
    {
        for (int col = 0; col < image[0].size(); col++)
        {
            cout << image[row][col];
        }
        cout << endl;
    }
}