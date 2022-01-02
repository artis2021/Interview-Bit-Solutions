string ans="";
void find(string a,int k){
    if(k==0){
      ans=min(ans,a);
        return;
    }
    int i,j;
    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            swap(a[i],a[j]);
            find(a,k-1);
            swap(a[i],a[j]);
        }
    }
}
string Solution::solve(string A, int B) {
    ans="";
    find(A,B);
    return ans;
}
