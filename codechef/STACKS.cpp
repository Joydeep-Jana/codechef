#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		multiset <int> s;
		int count = 0;
		while(n--)
		{
			int a;
			cin >> a;
			auto itr = s.lower_bound(a+1);
			
			if(itr == s.end())
			{
				s.insert(a);
				count++;
			}
			else
			{
				s.erase(itr);
				s.insert(a);
			}
			
		}
		cout << count;
		for(auto it: s)
		{
			cout << " " << it;
		}
		cout << endl;
	}
	return 0;
}
