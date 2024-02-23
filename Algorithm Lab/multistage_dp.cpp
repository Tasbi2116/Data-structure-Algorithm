#include<bits/stdc++.h>
using namespace std;
int x;
int DP[10001];
vector< pair<int, int> > v[1000];
int fnc(int n, int x)
{
    if(n == x) return 0;
    if(DP[n] != -1) return DP[n];
    int ans = INT_MAX;
    for( int el = 0; el < v[n].size(); el++)
    {
       ans = min(ans, fnc(v[n][el].first, x)+ v[n][el].second);
    }
    return DP[n] = ans;
}
void path_print(int n, int x)
{
    if(n == x) {return;}
    //if(DP[n] != -1) return DP[n];
    int ans = INT_MAX, path = 0;
    for( int el = 0; el < v[n].size(); el++)
    {
        if(fnc(v[n][el].first, x)+ v[n][el].second < ans)
        {
            ans = fnc(v[n][el].first, x)+ v[n][el].second;
            path = (v[n][el].first);
        }

    }
    cout << path << " " ;
    path_print((path), x);


}
int main()
{
    memset(DP, - 1, sizeof DP);
    int n, m; cin >> n >> m ;

    for(int i = 0; i < m ; i++)
    {
        int a, b, weight;
        cin >> a >> b >> weight;
        v[a].push_back({b, weight});
    }
    cin >> x;
    cout << fnc(0, x) << endl;
    cout << 0 << " " ;
    path_print(0, x);
}
