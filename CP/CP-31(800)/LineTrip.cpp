// // https://codeforces.com/problemset/problem/1901/A

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int n, x;
//         cin >> n >> x;
//         int gasStations[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> gasStations[i];
//         }
//         int fuelTank = (x - gasStations[n - 1]) * 2;
//         if (n == 1)
//         {
//             if(gasStations[0]>fuelTank){
//                 fuelTank=gasStations[0];
//             }
//         }
//         else
//         {
//             for (int i = 0; i < n - 1; i++)
//             {
//                 int diff = gasStations[i + 1] - gasStations[i];
//                 if (diff > fuelTank)
//                 {
//                     fuelTank = diff;
//                 }
//             }
//         }
//         cout << fuelTank << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 
int t, n, x;
 
int main() {
//   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cin >> t;
  while (t--) {
    int ans = 0;
    cin >> n >> x;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    ans = max(ans, a[0]);
    for (int i = 1; i < n; ++i) {
      ans = max(ans, a[i] - a[i-1]);
    }
    ans = max(ans, 2 * (x - a[n-1]));
    cout << ans << '\n';
  }
  return 0;
}