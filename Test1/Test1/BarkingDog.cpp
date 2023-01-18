#include <bits/stdc++.h>

using namespace std;

// 05�� ����
/* ���� �������� ���Ҹ� �ְų� �� �� �ִ� �ڷᱸ��
����, ť, ���� ��� Restricted Structure ��� �θ��⵵ �մϴ�. 
�迭�� �̿��� ������ �����ϸ� �⺻���� ���� ��� �̿ܿ��� Ȱ�� �����մϴ�.
�׷��� STL�� �� �� �ִٸ� STL�� ���°� �����ϴ�. 
���� ���� ������ ��µ� �� ¥�� ���ȴ��� Ʋ�ȴٰ� �� ��, �̷��� ���� ���� ���ÿ� Ʋ�� ���� �ִ��� �ǽ��� �غ� �� �ۿ� ���� �˴ϴ�. 
�׷��� STL stack�� ������ �ּ� ���� �ʿ����� ������ ���ٴ°� �� ���� ������ ������ �ٷ���°� �����̳��� �� ���� ���Դϴ�.*/

// ���� ����

//const int MX = 1000005;
//int dat[MX];
//int pos = 0;
//
//void push(int x) 
//{
//
//}
//
//void pop() 
//{
//
//}
//
//int top() 
//{
//
//}
//
//void test() 
//{
//	push(5); push(4); push(3);
//	cout << top() << '\n'; // 3
//	pop(); pop();
//	cout << top() << '\n'; // 5
//	push(10); push(12);
//	cout << top() << '\n'; // 12
//	pop();
//	cout << top() << '\n'; // 10
//}
//
//int main(void) 
//{
//	test();
//}

// BOJ 10828 : ����

	const int MX = 1000005;
	int dat[MX];
	int pos;

	void push(int val)
	{
		dat[pos++] = val;
	}

	void pop()
	{
		pos--;
	}

	int top()
	{
		return dat[pos - 1];
	}

	int main(void)
	{
		ios::sync_with_stdio(0);
		cin.tie(0);
		int n;
		cin >> n;
		while(n--)
		{
			string c;
			cin >> c;
			if (c == "push")
			{
				int t;
				cin >> t;
				push(t);
			}

			else if(c == "pop")
			{
				if (pos == 0)
				{
					cout << -1 << '\n';
				}

				else
				{
					cout << top() << '\n';
					pop();
				}
			}

			else if (c == "size")
			{
				cout << pos << '\n';
			}

			else if (c == "empty")
			{
				cout << (int)(pos == 0) << '\n';
			}

			else
			{
				if (pos == 0)
				{
					cout << -1 << '\n';
				}

				else
				{
					cout << top() << '\n';
				}
			}
		}
	}


// C����� ������, ����� ����, Callback ������ �˾ƾ��Ѵ�.
// Linked List, 2�� Ʈ�� å�� �Ⱥ��� �ּҷ� ������ ¥����Ѵ�.
// Process, Thread ���� IPC DLL �κе� �Ǹ� ����. File I/O �߿�
// IOCP ����� �����Ϸ��� Threadpool �ʿ� (����ȭ�� �⺻)


