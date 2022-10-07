class Solution {
public:
    string jusitfy(vector<string>&line,int spaceCnt){
        string res="";
        if(line.size()==1){
            res+=line[0];
            for(int i=0;i<spaceCnt;i++)
                res+=" ";
            line.clear();
            return res;
        }
        int n=line.size()-1;
        for(auto x:line){
            int cnt=(n>0)?spaceCnt/n:0;
            if(n>0 && spaceCnt%n!=0)
                ++cnt;
            spaceCnt-=cnt;
            n--;
            res+=x;
            for(int i=0;i<cnt;i++)
                res+=" ";
        }
        line.clear();
        return res;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>line;
        vector<string>ans;
        int spaceUsed=-1;
        
        for(auto x:words){
            if(spaceUsed+1+x.size() <= maxWidth){
                line.push_back(x);
                spaceUsed+=x.size()+1;
            }
            else{
                ans.push_back(jusitfy(line,maxWidth-spaceUsed+line.size()-1));
                spaceUsed=x.size();
                line.push_back(x);
            }
        }
        string temp="";
        for(auto x:line){
            temp+=" "+x;
            maxWidth-=x.size()+1;
        }
        for(int i=0;i<=maxWidth;i++)
            temp+=" ";
        ans.push_back(temp.substr(1));
        return ans;
    }
};
