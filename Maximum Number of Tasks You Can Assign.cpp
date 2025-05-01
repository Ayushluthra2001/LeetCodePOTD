class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
    ranges::sort(tasks);
    ranges::sort(workers);
    int n = tasks.size(), m = workers.size(), left = 0, right = min(n, m);
    while (left < right) {
        int mid = left + (right - left + 1) / 2;
        int usedPills = 0;
        multiset<int> workersFree(workers.end() - mid, workers.end());
        bool canBeAssigned = true;
        for (int i = mid - 1; i >= 0; i--) {
            auto it = prev(workersFree.end());
            if (*it < tasks[i]) {
                it = workersFree.lower_bound(tasks[i] - strength);
                if (it == workersFree.end()) {
                    canBeAssigned = false;
                    break;
                }
                if (++usedPills > pills) {
                    canBeAssigned = false;
                    break;
                }
            }
            workersFree.erase(it);
        }
        if (canBeAssigned)
            left = mid;
        else
            right = mid - 1;
    }
    return left;
}
};
