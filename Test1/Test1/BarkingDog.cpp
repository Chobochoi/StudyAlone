#include <bits/stdc++.h>

using namespace std;

// 05강 스택
/* 한쪽 끝에서만 원소를 넣거나 뺄 수 있는 자료구조
스택, 큐, 덱을 묶어서 Restricted Structure 라고 부르기도 합니다. 
배열을 이용해 스택을 구현하면 기본적인 스택 기능 이외에도 활용 가능합니다.
그래도 STL을 쓸 수 있다면 STL을 쓰는게 좋습니다. 
내가 만든 스택을 썼는데 다 짜고 돌렸더니 틀렸다고 할 때, 이러면 내가 만든 스택에 틀린 점이 있는지 의심을 해볼 수 밖에 없게 됩니다. 
그런데 STL stack을 썼으면 최소 스택 쪽에서는 문제가 없다는걸 알 수가 있으니 로직을 바로잡는게 조금이나마 더 편할 것입니다.*/

// 스택 연습

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

// BOJ 10828 : 스택

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


// C언어의 포인터, 디버깅 가능, Callback 구조를 알아야한다.
// Linked List, 2진 트리 책을 안보고도 주소록 정도를 짜줘야한다.
// Process, Thread 제어 IPC DLL 부분도 되면 좋다. File I/O 중요
// IOCP 제대로 이해하려면 Threadpool 필요 (동기화는 기본)


