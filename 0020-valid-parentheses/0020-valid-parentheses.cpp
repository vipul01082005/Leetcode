class Solution {
public:
    bool isValid(string s) {
        stack<char>str;
        for(char ch:s){
        
        if(ch=='{' || ch=='(' ||  ch=='['){

            str.push(ch);
        }
            else{
                if(!str.empty()){
               char top= str.top();
                if( ( top=='(' && ch==')' ) || (top=='[' && ch==']')   || (top=='{' && ch=='}') ){
                    str.pop();
                }
                else return false;
                }
                else return false;
            }
        }
       
        return str.empty();
    }
};