int calc_sqr(int num)
{
    int result = 0;
    for(int i = 0;i<num;i++)
    {
        result +=num; 
    }

    return result;
}
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int key = 0;
        for(int i = 1;i<nums.size();i++)
        {
            key = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>key)
            {
                nums[j+1] = items[j];
                j--;
            }
            nums[j+1] = key;
        }
        for(int i = 0;i<nums.size();i++)
        {
            nums[i] = calc_sqr(nums[i]);
        }

        for(int i = 0;i<nums.size();i++)
        {
            cout<<nums[i];
        }
    }
};

int main()
{
    
}