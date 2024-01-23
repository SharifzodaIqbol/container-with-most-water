#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Water {
public:
	int maxArea(vector<int>& height) {
		int left = 0;
		int right = height.size() - 1;
		int maxWaterArea = 0;
		while (left < right) {
			int currentArea = min(height[left], height[right]) * (right - left);
			maxWaterArea = max(maxWaterArea, currentArea);
			if (height[left] < height[right]) {
				left++;
			}
			else {
				right--;
			}
		}
		return maxWaterArea;
	}
};
int main()
{
	Water wt;
	vector<int> waterLiter = { 1,8,6,2,5,4,8,3,7 };
	cout<<wt.maxArea(waterLiter);
	return 0;
}