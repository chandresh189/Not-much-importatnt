/*Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".*/

--------gourav----------------

class Solution {
public:
    string defangIPaddr(string address) {
        string str="";
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
                str+="[.]";
            else
                 str+=address[i];
         
        }
     return str;   
    }
};
