class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int m=prices.size();
        int buy=prices[0];
       int sell= prices[0];
        
        int max_p= 0;
        int p = 0;
       for(int i = 1;i<prices.size();i++)
       {
            if(prices[i]<buy)
            {
                buy = prices[i];
                
                sell = prices[i];
            }
           else if(prices[i]>=buy)
           {
               sell = prices[i];
               p = sell - buy;
               max_p = max(p,max_p);
               
           }
       }
        
        return max_p;
        
//         int temp=INT_MAX;
//         int profit=0;
//         int check=0;
        
//         for(int i=0;i<m;i++)
//         {
//             if(prices[i]<temp)
//             {
//                 temp=prices[i];
//             }
            
//             check=prices[i]-temp;
            
//             if(profit<check)
//             {
//                 profit=check;
//             }
            
//         }
//         return profit;
      
        
    }
};