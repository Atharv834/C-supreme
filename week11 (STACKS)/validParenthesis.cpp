#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{

    stack<char> st;

    if (st.empty())
    {
        return true;
    }

    for (auto it : s)
    {
        if (it == "{" || it == "[" || it == "(")
        {
            st.push(it);
        }
        else
        {
            if (it == ")" && !st.empty() && st.top() == "(")
            {
                st.pop();
            }
            else if (it == "}" && !st.empty() && st.top() == "{")
            {
                st.pop();
            }
            else if (it == "]" && !st.empty() && st.top() == "[")
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (st.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}