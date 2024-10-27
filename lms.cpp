#include<bits/stdc++.h>
using namespace std;
void lcsAlgo(char *s1, char *s2, int m, int n)
{
    int lcs[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0) lcs[i][j] = 0;
            else if(s1[i-1] == s2[j-1]) lcs[i][j] = 1 + lcs[i-1][j-1];
            else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }

    int index = lcs[m][n];
    char lcsA[index+1];
    lcsA[index] = '\0';

    int i = m, j = n;
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            lcsA[index - 1] = s1[i-1];
            i--;
            j--;
            index--;
        } else if(lcs[i-1][j]>lcs[i][j-1]) i--;
        else j--;
    }
    cout<<"S1 :"<<s1<<"\n"<<"S2 :"<<s2<<"\n"<<"LCS :"<<lcsA<<"\n";
    cout<<"Length "<<lcs[m][n]<<"\n";
}
int main()
{
    char s1[] = "AquaVitae";
    char s2[] = "AruTaVae";
    int m = strlen(s1);
    int n = strlen(s2);
    lcsAlgo(s1,s2,m,n);
}
