#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

//��ɢ���ҵ�ǰ����v��������С���ʺ�����
int my_binary_search(vector<int>& nums, int v);

//���ش��ڡ�����Ŀ��ֵ����С��������һ�����ڻ����Ŀ��ֵ��������
int my_lower_bound(vector<int>& nums, int v);

//���ش���Ŀ��ֵ����С��������һ������Ŀ��ֵ��������
int my_upper_bound(vector<int>& nums, int v);

int main()
{

	
	vector<int> A{ 1,3,2,3,45,3,5,8,4,3,6,8,4,3,3,5,7,8,9,6,5,4,8 };
	int result = 0;
	int N = A.size();
	int index1, index2;
	for (int i = 1; i<N - 1; i++)
	{
		if (A[i]>A[i - 1] && A[i]>A[i + 1])
		{
			index1 = i - 1;
			index2 = i + 1;
			while (index1>0 && index1<N - 1 && A[index1]>A[index1 - 1] && A[index2]>A[index2 + 1])
			{
				index1--;
				index2++;
			}
			result = max(result, index2 - index1);
		}
	}

	int x;
	cin >> x;
	return 0;
}

int my_binary_search(vector<int>& nums, int v) {
	if (nums.size() < 1) return -1;

	int lo = -1, hi = nums.size();  // hi = nums.size() - 1

	while (hi - lo > 1) {
		int mid = lo + (hi - lo) / 2;
		if (nums[mid] < v)
			lo = mid;
		else
			hi = mid;
	}

	return nums[lo + 1] == v ? lo + 1 : -1;
}

int my_lower_bound(vector<int>& nums, int v) {
	if (nums.size() < 1) return -1;

	int lo = -1, hi = nums.size();  // hi = nums.size() - 1

	while (hi - lo > 1) {                       // �˳�ѭ��ʱ�У�lo + 1 == hi
		int mid = lo + (hi - lo) / 2;
		if (nums[mid] < v)
			lo = mid;                           // ��Ϊʼ�ս� lo �˵��������䣬����û�б�Ҫ `lo = mid + 1;`
		else
			hi = mid;                           // ���� else �У�mid ���ܾ������Ľ�������Բ��� `hi = mid - 1`
	}

	return lo + 1; // ��� binary_search��ֻ�з���ֵ��ͬ
}

int my_upper_bound(vector<int>& nums, int v) {
	if (nums.size() < 1) return -1;

	int lo = -1, hi = nums.size();  // hi = nums.size() - 1

	while (hi - lo > 1) {
		int mid = lo + (hi - lo) / 2;

		if (nums[mid] <= v)                     // ��� lower_bound��Ψһ��ͬ�㣺`<` -> `<=`
			lo = mid;
		else
			hi = mid;
	}

	return lo + 1;
}

