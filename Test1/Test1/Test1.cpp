#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

//int main(void)
//{
//    int i, j, temp;
//    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (int i = 0; i < 9; i++)
//    {
//        j = i;
//        while (j > 0 && array[j - 1] > array[j])
//        {
//            temp = array[j - 1];
//            array[j-1] = array[j];
//            array[j] = temp;
//            j--;
//        }
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d", array[j]);
//        }
//        return 0;
//    }
//}

//int main(void)
//{
//	int array[10] = { 3,7,8,1,5,9,6,10,2,4 };
//
//}

// 10055번 용감한 전사 해시맷
//int main()
//{
//	long long a, b;
//	while (cin >> a >> b)
//	{
//		cout << abs(a - b) << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int kor, eng, math;
//
//	cin >> kor >> eng >> math;
//
//	return 0;
//}

// 10071 고등학교 물리 풀이
//int main()
//{
//	int v, t;
//	while (cin >> v >> t) cout << v * t * 2 << endl;
//	return 0;
//}

// 시간 공간복잡도 문제2
//int func2(int arr[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			if (arr[i] + arr[j] == 100)
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}

// 시간 공간복잡도 문제3
//int func3(int N)
//{
//	for (int i = 1; i * i <= N; i++)
//	{
//		if (i * i == N)
//			return 1;
//	}
//	return 0;
//}

// 시간 공간복잡도 문제4
//int func4(int N)
//{
//	int val = 1;
//	while (2 * val <= N) val *= 2;
//	return val;
//}

//void func1(vector<int> v)
//{
//	v[10] = 7;
//}
//int main(void)
//{
//	vector<int> v(100);
//	func1(v);
//	cout << v[10];
//}

// 백준 10
/*int main()
{
	int N;
	int x;
	cin >> N >> x;

	int arr[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < x)
		{
			cout << arr[i] << " ";
		}
	}
}*/

// 프로그래머스 카카오 블라인드 개인정보 수집 유효기간

//int year, month, day, total;
//map<char, int> termsMap;
//vector<int> priv;
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) 
//{
//	vector<int> answer;
//	
//	year = stoi(today.substr(0, 4)); 
//	month = stoi(today.substr(5, 2));
//	day = stoi(today.substr(8, 2));
//
//	total = year * 12 * 28 + (month - 1) * 28 + day; 
//
//	for (int i = 0; i < terms.size(); i++)
//	{
//		stringstream ss(terms[i]);
//		char abc;
//		int month;
//		ss >> abc >> month;
//		termsMap[abc] = month;
//	}
//
//	for (int i = 0; i < privacies.size(); i++) 
//	{
//		int y = stoi(privacies[i].substr(0, 4));
//		int m = stoi(privacies[i].substr(5, 2));
//		int d = stoi(privacies[i].substr(8, 2));
//		char a = privacies[i].back();
//		int temp = y * 12 * 28 + (m - 1) * 28 + d + (termsMap[a] * 28 - 1);
//
//		priv.push_back(temp);
//	}
//
//	for (int i = 0; i < priv.size(); i++)
//	{
//		if (priv[i] < total)
//		{
//			answer.push_back(i + 1);
//		}
//	}
//
//	return answer;
//}

// 프로그래머스 햄버거 만들기

//int solution(vector<int> ingredient)
//{
//	int answer = 0;
//	vector<int> burger = { -1 };
//	for (int x : ingredient)
//	{
//		if (burger.back() == 1 && x == 2)
//		{
//			burger.back() = 12;
//		}
//		else if (burger.back() == 12 && x == 3)
//		{
//			burger.back() = 123;
//		}
//		else if (burger.back() == 123 && x == 1)
//		{
//			burger.pop_back();
//			answer++;
//		}
//		else burger.push_back(x);
//	}
//	return answer;
//}


