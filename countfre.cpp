#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
void countFreq(string s)
{

// We use map to map each word with its frequency

map<string, int> WF;

stringstream ss(s); // breaks words

string ind_Word; // stores individual words

while (ss >> ind_Word)

WF[ind_Word]++;

map<string, int>::iterator m;

for (m = WF.begin(); m != WF.end(); m++)

cout << m->first << " -> "

<< m->second << "\n";

}

// Main code

int main()

{

string s = "Practice Quiz. You can Practice here with this quiz.";

countFreq(s);

return 0;

}
