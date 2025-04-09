#include "Stack.h"
#include <string>
using namespace std;

bool BracketsBalanced(string expr)
{
    // ваш код
    Stack* s = new Stack();
    int n = expr.size();
    for (int i = 0; i < n; i++)
    {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            s->push(expr[i]);
        }
        if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            char c = s->pop();
            if (expr[i] == ')' && c != '(')
            {
                delete s;
                return false;
            }
            if (expr[i] == '}' && c != '{')
            {
                delete s;
                return false;
            }
            if (expr[i] == ']' && c != '[')
            {
                delete s;
                return false;
            }
        }
    }

    if (s->isEmpty())
    {
        delete s;
        return true;
    }
    else
    {
        delete s;
        return false;
    }
}