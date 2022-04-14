class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        vector<int> vec(n+1,0);
        vec[1] = 1;
        vec[2] = 1;
        for(int i = 3 ; i <= n ;i++){
            vec[i] = vec[i-1]+vec[i-2]+vec[i-3];
        }
        return vec[n];
    }
};