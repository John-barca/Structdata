int findPeakElement(int* nums, int numsSize) {
	int l = 0, r = numsSize - 1;
	while (l <= r) {
		int mid = (r - l) / 2 + l;
		if ((mid <= l || nums[mid] > nums[mid - 1]) &&
			(mid >= r || nums[mid] > nums[mid + 1]))
			return mid;
		if (mid <= l || nums[mid] > nums[mid - 1])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

