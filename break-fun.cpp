#include <iostream>
using namespace std;
int main()
{

    int n = 8,t;
    for (int i = 0; i < n; i++)
    {
        if (i == 5)
        {t=i;
            break;
        }
    }
    cout << t;



}


class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        
        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            int width = 0;
            int height = 0;

            for (int j = i; j >= 1; j--) {
                width += books[j - 1][0];

                if (width > shelfWidth)
                    break;

                height = max(height, books[j - 1][1]);

                dp[i] = min(dp[i], dp[j - 1] + height);// hight minimum rakh di hai 
            }
        }

        return dp[n];
    }
};