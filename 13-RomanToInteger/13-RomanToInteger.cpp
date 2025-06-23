// Last updated: 24/6/2025, 12:45:57 am
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;


        for(int i=0;i<s.size();i++){
            char q=s[i];
            int residue=0;
        if(q=='I') {
            if(s[i+1]=='V'){
                residue=4;
                i++;}
            else if(s[i+1]=='X'){
                residue=9;
                i++;}
            else
            residue=1;}

        if(q=='V')  residue=5;

        if(q=='X'){
            if(s[i+1]=='L'){
                residue=40;
                i++;}
            else if(s[i+1]=='C'){
                residue=90;
                i++;}
            else   
                residue=10;}

        if(q=='L')   residue=50;

        if(q=='C'){
            if(s[i+1]=='D'){
                residue=400;
                i++;}
            else if(s[i+1]=='M'){
                residue=900;
                i++;}
            else
               residue=100;}

        if(q=='D')   residue=500;
        if(q=='M')   residue=1000;

        ans=ans+residue;
        }

        return ans;

        
    }
};