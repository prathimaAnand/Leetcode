int singleNumber(int* nums, int numsSize){
    // compare each value in array and check if its equal
    int extra_var = 0;
    for(int i = 0; i<numsSize; i++){
        
            extra_var = nums[i] ^ extra_var;
        
    }
    return extra_var;
}
