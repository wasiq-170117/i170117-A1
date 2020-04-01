#include <iostream>
#include <string>
using namespace std;
int main()
{
    string pattern ;
    cout<<"Enter a Pattern string = ";
    getline(cin,pattern);
    cout<<'\n';
    int i = 1, j = 0;
    const int length = pattern.size();
    int prefixArray[length];
    for (int i=0;i<length;i++)
    {
       prefixArray[i]=0;
    }
    
    while (i < pattern.length()) {

        while (pattern[i] != pattern[j] && j > 0) {
            j = prefixArray[j - 1];

        }
        if (pattern[i] == pattern[j]) {
            prefixArray[i] = j + 1;
            i++;
            j++;

        } else {
            prefixArray[i] = j;
            i++;
        }
    }

    for (int k = 0; k < length; k++) {
        cout<<prefixArray[k];
    }
    return 0;
}
