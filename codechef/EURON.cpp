#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	//cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long ans = 0;
		multiset <int> s;
		while(n--)
		{
			int a;
			cin >> a;
			auto l = s.upper_bound(a);
			int violation = distance(l, s.end());
			s.insert(a);
			ans += violation;
			
			
			
			for(auto it:s)
			{
				cout << " " << it;
			}
			cout << endl;
		}
		
		cout << ans;
				
	}
	return 0;
}
