// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    unordered_map<string, string> en, de;
    int n = 0;
    string s = "http://tinyurl.com/";
    string encode(string longUrl) {
        en[longUrl] = s + to_string(n++);
        de[en[longUrl]] = longUrl;
        return en[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return de[shortUrl];
    }





int main(){
  
  return 0;
}