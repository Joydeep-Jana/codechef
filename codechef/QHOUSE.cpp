#include <bits/stdc++.h>
using namespace std;
int getBoundary(bool isXAxis, int initx = 0, int inity = 0);

int main() {
	int t = 1;
	//cin >> t;
	while(t--)
	{
		int b, h, s;
		s = getBoundary(true);
		s = 2*s;
		b = getBoundary(true, 0, s);
		b = 2*b;
		h = getBoundary(false, 0, s);
		h = h - s;
		cout << "! " << ((s*s) + (0.5*b*h));
		
				
	}
	return 0;
}

int getBoundary(bool isXAxis, int initx, int inity)
{
	int x1, y1, x2, y2;
	if(isXAxis)
	{
		y1 = inity;
		x1 = initx;
		x2 = 1001;
	}
	else
	{
		x1 = initx;
		y1 = inity;
		y2 = 1001;
	}
	
	while(true)
	{
		int xn, yn;
		if(isXAxis)
		{
			if(x2 - x1 == 1)
			{
				return x1;
			}
			yn = inity;
			xn = (x2 + x1) / 2;
		}
		else
		{
			if(y2 - y1 == 1)
			{
				return y1;
			}
			xn = initx;
			yn = (y2 + y1) / 2;
		}
		
		cout << "? " << xn << " " << yn << endl;
		fflush(stdout);
		string r;
		cin >> r;
		if(r == "YES")
		{
			x1 = xn;
			y1 = yn;
		}
		else
		{
			x2 = xn;
			y2 = yn;
		}
	}
}
