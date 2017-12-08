#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<climits>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<map>
#include <set>
#include <cassert>
#include <numeric>

using namespace std;

int main(){

	int k, a, b;
	scanf("%d %d %d", &k, &a, &b);
	int ans = a / k + b / k;

	if (a / k == 0 && b % k != 0) ans = -1;
	if (b / k == 0 && a % k != 0) ans = -1;

	printf("%d\n", ans);

	return 0;
}
