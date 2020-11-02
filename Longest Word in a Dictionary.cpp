class Solution {
public:
string longestWord(vector<string>& words) {
sort(words.begin(),words.end());
set<string> s;
string result="";
for(string w: words){
if(w.length()==1 || s.find(w.substr(0,w.length()-1))!=s.end()){
if(w.length()>result.length())
result=w;
s.insert(w);
}
}
return result;
}
};
