string count(int n, string str){
        if(n==0){
            return str;
        }
        string res;
        int i=0;
        while(i<str.length()){
            char a = str[i];
            int x =0;
            while(str[i]==a){
                x++; i++;
            }
            res += to_string(x) +a;
        }
        return count(n-1, res);
    }
    
    string countAndSay(int n) {
        string str = "1";
        
        return count(n-1, str);
    }