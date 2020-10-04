
//美团第五题
//#include "bits/stdc++.h"
#include<iostream>
#include<unordered_map>
#include<deque>


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	unordered_map<int, int> hash;
	deque<int> seq;

	int temp;
	long long n;
	cin >> n;
	for (long long i = 0; i<n; i++)
	{
		cin >> temp;
		if (hash[temp] != 0)
		{
			deque<int>::iterator it;
			it = seq.begin();
			while (it != seq.end())
			{
				if (*it == temp)
				{
					seq.erase(it);
					seq.push_front(temp);
					break;
				}
				it++;
			}
		}
		else
		{
			seq.push_front(temp);
		}
		hash[temp]++;
	}

	deque<int>::iterator it;
	it = seq.begin();
	while (it != seq.end())
	{
		cout << *it << endl;
		it++;
	}


	//cout<<1<<endl<<2;
	return 0;
}
//
