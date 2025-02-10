#include <iostream>
#include <cctype>
#include <string>
#include <map>
using namespace std;

int main() {
    string str,nstr,rev_nstr;
    char replacement;
    cout<<"Enter String: ";
    getline(cin, str);
    cout<<"-----"<<endl<<"  1  "<<endl<<"-----"<<endl;
    cout<<"Enter a character to replace all vowels with: ";
    cin>>replacement;
    for(char c : str){
        if(c!=' '){ 
            nstr+=tolower(c);
        }
    }
    for(char &c : str) {
        char lowerC = tolower(c);
        if(lowerC=='a' || lowerC=='e' || lowerC=='i' || lowerC=='o' || lowerC=='u'){
            c=replacement;
        }
    }
    cout<<str<<endl;
    cout<<"-----"<<endl<<"  2  "<<endl<<"-----"<<endl;
    int nlength = nstr.length();
    rev_nstr.resize(nlength);
    for(int i=0;i<nlength;i++){
        rev_nstr[i]=nstr[(nlength-1)-i];
    }
    if(rev_nstr==nstr) {
        cout<<"The String is a Palindrome"<<endl;
    }else{
        cout<<"The String is not a Palindrome"<<endl;
    }
    
    cout<<"-----"<<endl<<"  3  "<<endl<<"-----"<<endl;
    map<char,int> frequencyMap;
    for(char c : nstr) {
        frequencyMap[c]++;
    }
    
    cout<<"Character Frequencies:" <<endl;
    for (const auto &pair : frequencyMap){
        cout<<pair.first<<": "<< pair.second<<endl;
    } 
    return 0;
}
