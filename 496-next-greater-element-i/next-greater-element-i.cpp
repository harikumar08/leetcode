class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums2.size(); i++) {
            m[nums2[i]] = i;
        }

        vector<int> v(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            if (m.find(nums1[i]) != m.end()) {
                int a = m[nums1[i]];
                int b = -1;
                for (int j = a+1; j < nums2.size(); j++) {
                    if (nums1[i] < nums2[j]) {
                        b = nums2[j];
                        break;
                    }
                }
                v[i] = b;
            } else {
                v[i] = -1;
            }
        }
        return v;
    }
};