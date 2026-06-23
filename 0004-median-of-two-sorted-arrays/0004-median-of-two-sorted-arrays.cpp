class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size(); 
        int n = nums2.size();

        vector<int> temp(m + n);   // O(m+n)

        int i = 0; // nums1 pointer
        int j = 0; // nums2 pointer
        int k = 0; // temp pointer

        // merge both arrays
        while (i < m && j < n) {      
            if (nums1[i] < nums2[j]) {
                temp[k++] = nums1[i++];
            } else {
                temp[k++] = nums2[j++];
            }
        }

        // remaining elements of nums1
        while (i < m) {
            temp[k++] = nums1[i++];   //
        }

        // remaining elements of nums2
        while (j < n) {
            temp[k++] = nums2[j++];
        }

        int size = m + n;

        // odd case
        if (size % 2 == 1) {
            return temp[size / 2];
        }

        // even case (VERY IMPORTANT FIX)
        return (temp[size / 2] + temp[(size / 2) - 1]) / 2.0;
    }
};
