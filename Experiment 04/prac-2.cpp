/* Take 6 integer values (0 to 5) into a stack and then find the factorial of
each stack element. Store the outputs in another stack. Print the output in the
following way:
Factorial : 0 = 1
Factorial : 1 = 1
Factorial : 2 = 2 */

#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
int main()
{
    int a, num;
    stack<int> stack_1;
    stack<int> stack_2;
    for (int i = 0; i < 6; i++)
    {
        stack_1.push(i);
    }
    /*
    for (int i = 0; i < 5; i++)
    {
        cout << "Factorial : " << stack_1.top() << "= " << factorial(stack_1.top())<<endl;
        stack_1.pop();
    }
    */

    while (!stack_1.empty())
    {
        num = factorial(stack_1.top());
        stack_2.push(num);
        stack_1.pop();
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Factorial : " << i << "= " << stack_2.top() << endl;
        stack_2.pop();
    }

    return 0;
}