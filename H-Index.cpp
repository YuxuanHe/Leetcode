class Solution {
public:
    void quick_sort(vector<int> &citations, int left, int right) {
        if(left >= right)
            return;
        int key = citations[left];
        int lp = left;
        int rp = right;
        while (lp < rp) {
            while (lp < rp && citations[rp] <= key) {
                rp --;
            }
            while (lp < rp && citations[lp] >= key) {
                lp ++;
            }
            swap(citations[lp], citations[rp]);
        }
        swap(citations[lp], citations[left]);
        quick_sort(citations, left, lp-1);
        quick_sort(citations, rp+1, right);
    }
    int hIndex(vector<int>& citations) {
        quick_sort(citations, 0, citations.size()-1);
        for(int i=0; i<citations.size(); i++) {
            if(citations[i] <= i)
                return i;
        }
        return citations.size();
    }
};
