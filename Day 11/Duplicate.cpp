//Duplicate In Array

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    //XOR ing all array element
    for(int i=0 ; i<arr.size() ; i++){
        ans = ans^arr[i];
    }
    //XOR (1 ,1-n)
    for(int i = 1 ; i<arr.size() ; i++){
        ans= ans^i;
    }

    return ans;
	
}