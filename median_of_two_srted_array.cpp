    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
    int k=0;
    vector<int> num(nums1.size() + nums2.size());
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i] > nums2[j]){
            num[k] = nums2[j];
            j++;
            k++;
        }
        else{
            num[k] = nums1[i];
            i++;
            k++;
        }
    }

    while (i < nums1.size()) {
		num[k] = nums1[i];
		i++;
		k++;
	}

    while (j < nums2.size()) {
		num[k] = nums2[j];
		j++;
		k++;
	}

	for (auto x: num)
		cout << x << " ";
	cout << endl;

    double median;
    if(num.size()%2==0){
        int x = num.size()/2;
        median = (double)(num[x] + num[x-1])/2;
		return median;
    }

    else{
        double x = num.size()/2;
        return num[x];
    }
    }