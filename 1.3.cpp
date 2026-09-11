#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s = "verification";

    cout << "First 4: " << s.substr(0, 4) << endl;

    cout << "From 4: " << s.substr(4) << endl;

    int c = s.compare("verify");

    cout << "Compare vs 'verify': "
         << (c < 0 ? "<" : c > 0 ? ">" : "=") << endl;

    int freq[26] = {0};

    for (char ch : s)
    {
        if (isalpha(static_cast<unsigned char>(ch)))
        {
            freq[tolower(static_cast<unsigned char>(ch)) - 'a']++;
        }
    }

    cout << "Letter counts:" << endl;

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i])
        {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}