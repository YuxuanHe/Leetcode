class Solution {
public:
    int hIndex(vector<int>& citations) {
        int vec_size = citations.size();
        return bin_search(citations, 0, citations.size()-1, vec_size);
    }
    int bin_search(vector<int> citations, int start, int end, int vec_size) {
        while(start <= end) {
            int mid = (start + end) / 2;
            int value = citations[mid];
            if(value == vec_size - mid)
                return vec_size - mid;
            else if(value > vec_size - mid)
                end = mid - 1;
            else
                start = mid  +1;
        }
        return vec_size - start;
    }
};
