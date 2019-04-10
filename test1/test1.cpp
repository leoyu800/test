#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include <iomanip>
#include <sstream>
#include <unordered_map>
#include <array>
#include <stack>
using namespace std;

//int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs);
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
int main()
{

	
	ListNode* p;
	int z = 0;
	cin >> z;
	return 0;
}



//比较通用，可以按照，分割整行输入的字符串
//string data;
//cin >> data;
//string tmp;
//stringstream input(data);
//vector<int> A;
//int number;
//while (getline(input, tmp, ','))
//A.push_back(stoi(tmp));


//适合1,2,3
//int number;
//vector<int> A;
//while (cin >> number)
//{
//	A.push_back(number);
//	cout << number << endl;
//	if (cin.get() != ',')
//	{
//
//		break;
//	}
//
//}


//数字用空格来分割
//string str;
//getline(cin, str);
//	vector<int> num;
//	int temp;
//	istringstream iss(str);
//	while (iss >> temp)
//	{
//		num.push_back(temp);
//	}




//char c;
//string str;
//stringstream stream;
//stream << c;
//str = stream.str();
//楼上说的都是char * 转string。这里是char 转string


//设置输出精度

//double f = 3.14159;
//cout << setprecision(5) << f << '\n'; //3.1416
//cout << setprecision(9) << f << '\n'; //3.14159
//cout << fixed;
//cout << setprecision(5) << f << '\n'; //3.14159
//cout << setprecision(9) << f << '\n'; //3.141590000



//int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs)
//{
//	int res = 0, n = price.size();
//	for (int i = 0; i < n; i++) {
//		res += price[i] * needs[i];
//	}
//
//	for (auto offer : special) {
//		bool isValid = true;
//		for (int j = 0; j < n; j++) {
//			//you cannot use this coupon
//			if (needs[j] < offer[j]) {
//				isValid = false;
//			}
//			needs[j] -= offer[j];
//		}
//		if (isValid) {
//			res = min(res, shoppingOffers(price, special, needs) + offer.back());
//		}
//		for (int j = 0; j < n; j++) {
//			needs[j] += offer[j];
//		}
//	}
//	return res;
//}


//string str;
//getline(cin, str);
//int total = stoi(str);
//vector<int> result(total, 0);
//for (int p = 0; p < total; p++)
//{
//	string str;
//	getline(cin, str);
//	int length = stoi(str);
//	vector<int> myVec = vector<int>(14, 0);
//
//	for (int i = 0; i < length; i++)
//	{
//		char temp;
//		cin >> temp;
//		if (temp == 'A')
//			myVec[1]++;
//		else if (temp == 'J')
//			myVec[11]++;
//		else if (temp == 'Q')
//			myVec[12]++;
//		else if (temp == 'K')
//			myVec[13]++;
//		else
//			myVec[temp - '0']++;
//	}
//	vector<int> mySum = vector<int>(14, 0);
//	for (int i = 0; i < 9; i++)
//	{
//		mySum[i] = myVec[i] * myVec[i + 1] * myVec[i + 2] * myVec[i + 3] * myVec[i + 4];
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		result[p] += mySum[i];
//	}
//
//
//
//
//}