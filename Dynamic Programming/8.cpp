#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Function to return an SCS of substrings `X[0…m-1]`, `Y[0…n-1]`
string SCS(string X, string Y, int m, int n, auto &lookup)
{
    // if the end of the first string is reached,
    // return the second string
    if (m == 0) {
        return Y.substr(0, n);
    }
 
    // if the end of the second string is reached,
    // return the first string
    else if (n == 0) {
        return X.substr(0, m);
    }
 
    // if the last character of `X` and `Y` matches, include it in SSC
    // and recur to find SCS of substring `X[0…m-2]` and `Y[0…n-1]`
    if (X[m - 1] == Y[n - 1]) {
        return SCS(X, Y, m - 1, n - 1, lookup) + X[m - 1];
    }
 
    // if the last character of `X` and `Y` don't match
    else {
        // if the top cell of a current cell has less value than the left
        // cell, then include the current character of string `X` in SCS
        // and find SCS of substring `X[0…m-2]` and `Y[0…n-2]`
 
        if (lookup[m - 1][n] < lookup[m][n - 1]) {
            return SCS(X, Y, m - 1, n, lookup) + X[m-1];
        }
 
        // if the left cell of a current cell has less value than the top
        // cell, then include the current character of string `Y` in SCS
        // and find SCS of substring `X[0…m-1]` and `Y[0…n-2]`
        else {
            return SCS(X, Y, m, n - 1, lookup) + Y[n-1];
        }
    }
}
 
// Function to fill the lookup table by finding the length of SCS of
// sequences `X[0…m-1]` and `Y[0…n-1]`
int SCSLength(string X, string Y, int m, int n, auto &lookup)
{
    // initialize the first column of the lookup table
    for (int i = 0; i <= m; i++) {
        lookup[i][0] = i;
    }
 
    // initialize the first row of the lookup table
    for (int j = 0; j <= n; j++) {
        lookup[0][j] = j;
    }
 
    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1]) {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
            }
            // otherwise, if the current character of `X` and `Y` don't match
            else {
                lookup[i][j] = min(lookup[i - 1][j] + 1,
                lookup[i][j - 1] + 1);
            }
        }
    }
}
 
int main()
{
    string X = "ABCBDAB", Y = "BDCABA";
 
    int m = X.length(), n = Y.length();
 
    // lookup table stores solution to already computed subproblems;
    // i.e., lookup[i][j] stores the length of SCS of substring
    // `X[0…i-1]` and `Y[0…j-1]`
    vector<vector<int>> lookup(m + 1, vector<int>(n + 1));
 
    // fill the lookup table in a bottom-up manner
    SCSLength(X, Y, m, n, lookup);
 
    // find the shortest common supersequence by reading the lookup
    // table in a top-down manner
    cout << "The shortest common supersequence of " << X <<
            " and " << Y << " is " << SCS(X, Y, m, n, lookup);
 
    return 0;
}