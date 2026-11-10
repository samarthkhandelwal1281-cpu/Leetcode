class Solution {
public:
    vector<string> res;
    int N;
    int cntf = 0,cnts = 0;
    void recursive(string str){
        if(str.size() == 2*N){
            res.push_back(str);
            return;
        }
        if(cntf < N){
            cntf++;
            recursive(str + "(");
            cntf--;
        }

        if(cnts < cntf){
            cnts++;
            recursive(str + ")");
            cnts--;
        }
    }
    vector<string> generateParenthesis(int n) {
        string str = "";
        N = n;
        recursive(str);
        return res;
    }
};