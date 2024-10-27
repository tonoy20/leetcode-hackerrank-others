#include<bits/stdc++.h>
using namespace std;

void nativSearch(char *txt, char* pat) {
    int n = strlen(txt);
    int m = strlen(pat);

    for(int i=0; i< n-m; i++){
        int j;
        for(j=0; j<m; j++)
            if(txt[i+j]!=pat[j])
                break;
        if(j==m)
            cout<<"Pattern found at index "<<i<<endl;

    }
}
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    nativSearch(txt, pat);

}
