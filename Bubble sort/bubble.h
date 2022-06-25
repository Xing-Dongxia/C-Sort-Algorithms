# include <vector>

using namespace std;

class bubbleSort {
private:
	void swap(vector<int> & nums, int i, int j){
		nums[i] ^= nums[j];
		nums[j] ^= nums[i];
		nums[i] ^= nums[j];
	}
public:
	void sortFunc1 (vector<int> & nums){
		for (int i = 0; i < nums.size() - 1; ++i){
			for (int j = 0; j < nums.size() - 1 - i; ++j){
				if (nums[j] > nums[j + 1])
					this->swap(nums, j, j + 1);
			}
		}
	}

	void sortFunc2 (vector<int> & nums){
		for (int i = 0; i < nums.size() - 1; ++i){
			bool flagChanged = false;
			for (int j = 0; j < nums.size() - 1 - i; ++j){
				if (nums[j] > nums[j + 1]){
					this->swap(nums, j, j + 1);
					flagChanged = true;
				}						
			}
			if (!flagChanged)
				return;
		}
	}

	void sortFunc3 (vector<int> & nums){
		int tail = nums.size();
		int temp = tail;
		bool flagchanged = true;
		while( flagchanged ){
			flagchanged = false;
			for (int i = 0, tail = temp; i < tail - 1; ++i){
				if (nums[i] > nums[i + 1]){
					this->swap(nums, i ,i+1 );
					flagchanged = true;
					temp = i + 1;
				}
			}
		}
	}
};
