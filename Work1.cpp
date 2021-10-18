#include <iostream>
#include <string>
#include <stack>
using namespace std;
unsigned i;
char x;
string str,r;
int b,n,m,b1,n1,m1;
int main()
{
   stack <char> st;
   cin>>str;
   for (i = 0; i < str.length() ; i++){
       x = str[i];
       st.push(x);
    }
    while (st.empty() == false){
      r = st.top();
      if (r == "{" ) b++;
      else if (r == "}") b1++;
      if (r == "(") n++;
      else if (r == ")") n1++;
      if (r == "[" ) m++;
      else if (r == "]") m1++;
      st.pop();
    }
    if (b == b1 && n == n1 && m == m1) cout << "OK";
    else cout << "NO";

}