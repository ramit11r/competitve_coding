class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i])); 
            }
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int ope1=st.top();
                st.pop();
                int ope2=st.top();
                st.pop();
                int val=0;
                if(tokens[i]=="+"){
                    val=ope1+ope2;
                    st.push(val);
                }
                if(tokens[i]=="-"){
                    val=ope2-ope1;
                    st.push(val);
                }
                if(tokens[i]=="*"){
                    val=ope1*ope2;
                    st.push(val);
                }
                if(tokens[i]=="/"){
                    val=ope2/ope1;
                    st.push(val);
                }
            }
        }
        return st.top();
    }
};