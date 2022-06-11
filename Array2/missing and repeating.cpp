class Solution{
public:
    int *findTwoElement(int *nums, int n) {
        // code here
        int *v=new int[2];
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]*=-1;
            }
            else{
                v[0]=abs(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[1]=i+1;
            }
        }
        return v;
    }
};