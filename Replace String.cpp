class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
     sort(dictionary.begin(),dictionary.end());
        vector<string> ans;
        string temp="";
        int i=0;
        while(i<sentence.length())
        {
            
            if(sentence[i]==' '||i==sentence.length()-1)
        {
                if(i==sentence.length()-1)
                {
                    temp.push_back(sentence[i]);
                    
                }
                ans.push_back(temp);
                temp.clear();
            }
            else
                temp=temp+sentence[i];
            
            i++;
            
        }
        for(string s:ans)
            cout<<s<<endl;
        
        for(i=0;i<ans.size();i++)
        {
            
            string word=ans[i];
            for(int j=0;j<dictionary.size();j++)
            {
            if(word.rfind(dictionary[j],0)==0)
            {
                ans[i]=dictionary[j];
                break;
            }
                
                
            }
                
        }
        string result;
        for(string s:ans)
            result=result+s+" ";
        result.pop_back();
        
        
      return result;  
    }
};
