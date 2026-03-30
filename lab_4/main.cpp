#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int st[100];
    int top = -1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;

            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            st[++top] = num;
            i--;
        }
        else if (s[i] == ' ') {
            continue;
        }
        else {
            int b = st[top--];
            int a = st[top--];

            if (s[i] == '+') {
                st[++top] = a + b;
            }
            else if (s[i] == '-') {
                st[++top] = a - b;
            }
            else if (s[i] == '*') {
                st[++top] = a * b;
            }
            else if (s[i] == '/') {
                st[++top] = a / b;
            }
        }
    }

    cout << st[top];
    return 0;
}