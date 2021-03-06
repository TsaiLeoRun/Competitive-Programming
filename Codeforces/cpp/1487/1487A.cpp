/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define mp make_pair
#define pb push_back

#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define read(type) readInt<type>()

typedef pair<int, int> PII;
typedef pair<string, string> PSS;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

#define watch(x) cout << (#x) << " is " << (x) << endl;

const double pi = acos(-1.0);

/********** Main()  function **********/
void solve() {
  int n;
	scd(n);
	
	VI heros(n);
	
	FOR(i, 0, n,1){
		cin >> heros[i];
	}
	
	sort(heros.begin(), heros.end());
	
	// FOR(i, 0, n, 1){
	// 	cout << heros[i] << endl;
	// }
	
	if (n == 1){
		cout << 1 << endl;
		return;
	}
	
	int ptr = 1;
	int cmp = heros[0];
	
	int ans = 0;
	while(ptr < n){
		if (heros[ptr] > cmp){
			ans += n - ptr;
			break;
		}
		ptr ++;
	}
	
	cout << ans << endl;
	
} 

int main()
{

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// //freopen("output.txt","w",stdout);
	// #endif

	int tc;
  scd(tc);
  
	while (tc --> 0){
    solve();
  }
	// int tc;
	// tc = read(int);

	// while(tc--){
	// 	write(tc);
	// }
	return 0;
}
/********  Main() Ends Here *************/