int main() {
    Solution test;

    vector<int> nums1 = {10, 20, 30, 5, 10, 50};
    vector<int> nums2 = {10, 20, 30, 40, 50};
    vector<int> nums3 = {12, 17, 15, 13, 10, 11, 12};

    cout << "Output 1: " << test.maxAscendingSum(nums1) << endl;
    cout << "Output 2: " << test.maxAscendingSum(nums2) << endl;
    cout << "Output 3: " << test.maxAscendingSum(nums3) << endl;

    return 0;
}
