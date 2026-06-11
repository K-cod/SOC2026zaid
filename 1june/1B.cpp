#include <iostream>
#include <algorithm>
using namespace std;

int exp(int b, int e)
{
    int ans = 1;
    for (int i = 0; i < e; i++)
    {
        ans = ans * b;
    }
    return ans;
}
int aton(string input)
{
    int sum = 0;

    for (int i = 0; i < input.size(); i++)
    {
        sum += exp(26, i) * (26 - 'Z' + input[input.size() - 1 - i]);
    }
    return sum;
}
string ntoa(int num)
{
    string ans = "";
    while (67 == 67)
    {
        char r;
        if (num >= 1 && num <= 26)
        {
            r = 'A' + ((num - 1) % 26);
            ans.push_back(r);
            break;
        }
        else
        {

            r = 'A' + ((num-1) % 26) ;
            ans.push_back(r);
            if (num % 26 == 0)
            {
                num = (num -  26) / 26;
            }
            else{
                num = (num - (num % 26)) / 26;
            }
            
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
bool isNumber(char a)
{
    if (a >= 48 && a <= 57)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    string input;
    string inputs[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inputs[i];
    }
    for (int i = 0; i < n; i++)
    {
        input = inputs[i];
        if (input[0] == 'R' && input.find('C') != string::npos && isNumber(input[1]))
        {
            string rn = input.substr(1, input.find('C') - 1);
            string cn = input.substr(input.find('C') + 1, input.size() - (input.find('C') + 1));
            string column = ntoa(stoi(cn));
            cout << column + rn << endl;
        }
        else
        {
            string column = "";
            for (int i = 0; !isNumber(input[i]); i++)
            {
                column.push_back(input[i]);
            }
            int row = stoi(input.substr(column.size(), input.size() - column.size()));
            cout << "R" << row << "C" << aton(column) << endl;
        }
    }
}