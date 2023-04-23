class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> generate(numRows);
        // Insert Values
        for (int i = 0; i < numRows; i++){
            generate[i].resize(i+1);
            for (int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    generate[i][j] = 1;
                } else{
                generate[i][j] = generate[i - 1][j - 1] + generate[i - 1][j];
                }
            }
        }
        
        //Print Vector
        return generate;
    }
};
