class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        stack<int> s;
        unordered_set<int> visited;
        
        s.push(0);
        while (!s.empty()) {
            int cur = s.front();
            s.pop();
            if (prerequisites[cur] != nullptr) {
				for (int i = 1; i < prerequisites[cur].size(); i++) {
					if (visited.find(prerequisites[cur][i]) != visited.end()) {
						s.push(prerequisites[cur][i]);
					} else {
						return false;
					} 
				} 
			}
            
        }
		return true;
    }
};
