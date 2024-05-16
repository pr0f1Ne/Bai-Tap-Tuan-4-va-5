A)
#include <bits/stdc++.h>
using namespace std;
char s1[6];
int main()
{
For(i,0,sizeof(s1)) cout << (int)s1[i] << " ";
cout << endl;
char s2[6];
For(i,0,sizeof(s2)) cout << (int)s2[i] << " ";
cout << endl;
cout << "string ngoài hàm main: " << s1 << endl;
cout << "string trong hàm main: " << s2 << endl;
return 0;
}
B)
#include <bits/stdc++.h>
using namespace std;
//char s1[3] = "abcd"; // gặp lỗi khi khai báo kích thước;
//char s1[4] = "abcd"; // gặp lỗi khi khai báo kích thước;
char s1[5] = "abcd";
int main()
{
For(i,0,sizeof(s1)) cout << (int)s1[i] << " ";
cout << endl;
char s2[6] = "abcd";
For(i,0,sizeof(s2)) cout << (int)s2[i] << " ";
cout << endl;

// In chuỗi kí tự
cout << "string ngoài hàm main(): " << s1 << endl;
cout << "string trong hàm main(): " << s2 << endl;

return 0;
}
C)
#include <bits/stdc++.h>
using namespace std;
char s1[] = "abcd";
int main()
{
char s2[] = "abcd";
cout<< sizeof(s1) << endl;
cout<< sizeof(s2) << endl;
return 0;
}
Mảng kích thước N lưu được string độ dài tối đa N - 1
