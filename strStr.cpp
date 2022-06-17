int strStr(string haystack, string needle) {
    if(needle.empty()) return 0;
    if(haystack.empty() || haystack.size()<needle.size()) return -1;
    int k, r;
    for(int i=0; i<haystack.length(); i++){
        if(haystack[i]==needle[0]){
            r = i; r++;
            for(k=1; k<needle.length(); k++){
                //cout<<needle[k]<<" "<<haystack[i];
                if(haystack[r]!=needle[k])
                    break;
                else
                    r++;
            }
            
            if(k==needle.length())
                return i;
        }
    }    
    return -1;
}