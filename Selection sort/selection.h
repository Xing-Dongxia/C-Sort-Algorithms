#include <vector>
using namespace std;

class selectionSort{
public:
	void sortFunc(vector<int> & nums){
		for(int i = 0; i < nums.size() - 1; ++i){
			int currMin = nums[i];
			int currindex = i;
			for (int j = i + 1; j < nums.size(); ++j){
				if (nums[j] < currMin){
					currMin = nums[j];
					currindex = j;	
				}
			}
			swap(nums[i], nums[currindex]);
		}
	}
};