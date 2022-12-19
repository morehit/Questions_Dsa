    // maximum area btween a given heights 
    //Input: height = [1,8,6,2,5,4,8,3,7]
    //Output: 49
    
    int maxArea(vector<int>& height) {
        int n = height.size() ; 

        int maximumArea = INT_MIN  ; 

        // for(int i = 0 ; i< n-1 ; i++){

        //     for(int j = i+1 ; j< n ; j++) {

        //          int curArea = (j-i)* min(height[i] , height[j]) ; 
        //         
        //     }
        // }

        int i =0 , j = n-1 ; 

        while(i<=j){
             int curArea = (j-i)* min(height[i] , height[j]) ; 

              maximumArea = max(maximumArea, curArea ) ; 

              if(height[i] < height[j]){
                  i++ ; 
              }
              else if(height[i] > height[j]){
                  j-- ; 
              }
              else {
                  i++ ; 
              }
        }

        return maximumArea ; 
    }
