#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

//离散查找当前数字v，返回最小的适合索引
int my_binary_search(vector<int>& nums, int v);

//返回大于、等于目标值的最小索引（第一个大于或等于目标值的索引）
int my_lower_bound(vector<int>& nums, int v);

//返回大于目标值的最小索引（第一个大于目标值的索引）
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

	while (hi - lo > 1) {                       // 退出循环时有：lo + 1 == hi
		int mid = lo + (hi - lo) / 2;
		if (nums[mid] < v)
			lo = mid;                           // 因为始终将 lo 端当做开区间，所以没有必要 `lo = mid + 1;`
		else
			hi = mid;                           // 而在 else 中，mid 可能就是最后的结果，所以不能 `hi = mid - 1`
	}

	return lo + 1; // 相比 binary_search，只有返回值不同
}

int my_upper_bound(vector<int>& nums, int v) {
	if (nums.size() < 1) return -1;

	int lo = -1, hi = nums.size();  // hi = nums.size() - 1

	while (hi - lo > 1) {
		int mid = lo + (hi - lo) / 2;

		if (nums[mid] <= v)                     // 相比 lower_bound，唯一不同点：`<` -> `<=`
			lo = mid;
		else
			hi = mid;
	}

	return lo + 1;
}

