#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out (Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg (...) cerr << "("<< #_VA_ARGS_ << "):", dbg_out(_VA_ARGS_)

using ll = long long;

#define rng_init mt19937 rng(chrono:: steady_clock:: now().time_since_epoch().count())
#define rng_seed (x) mt19937 rng(x)
#define all (x) (x). begin(), (x) - end()
#define sz(x) (int) (x). size()
// #define int long long

const int MXN = 15 + 5, INF = 19 + 5;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (d < c)swap(c, d);
	if (a > c && a < d){
		if (b > c && b < d){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}else if (b > c && b < d){
		if (a > c && a < d){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}else{
		cout << "NO" << endl;
	}
}

signed main() {
	ios_base:: sync_with_stdio (false);
	cin.tie(nullptr);
	int TC = 1;
	cin >> TC;
	while (TC--) solve();
}