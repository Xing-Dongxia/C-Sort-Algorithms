#include <vector>
using namespace std;

class insertionSort{
public:
	void sortFunc1(vector<int> & nums){
		if (nums.size() <= 1)
			return;
		for (int i = 1; i < nums.size(); ++i){
			int j = i;
			bool changed = true;
			while (changed && j >= 1){
				if(nums[j] < nums[j-1]){
					swap(nums[j], nums[j-1]);
					j--;
				}
				else
					changed = false;	
				
			}
		}
	}
};