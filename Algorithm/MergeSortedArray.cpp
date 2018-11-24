/////////////////////////////////////////////////////////////////////////////////////////
//  给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
//  说明: 初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
//  你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
/////////////////////////////////////////////////////////////////////////////////////////
//  https://github.com/hu243285237/Cpp_Study/new/master/Algorithm
/////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int index1 = m - 1;
        int index2 = n - 1;
        
        while (index2 >= 0)
        {
            if (index1 < 0)
            {
                for(; index2 >= 0; index2--)
                {
                    nums1[index2] = nums2[index2];
                }
                break;
            }
            else if (nums1[index1] >= nums2[index2])
            {
                nums1[index1 + index2 + 1] = nums1[index1--];
            }
            else
            {
                nums1[index1 + index2 + 1] = nums2[index2--];
            }
        }
    }
};
