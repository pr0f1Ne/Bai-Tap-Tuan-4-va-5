Bài 1 :
a)

#include <bits/stdc++.h>
#define For(i,a,b) for(int i = a; i <= b ; i++)
using namespace std;
    int const N = 1e6 + 5;
    int a[N];
    int main()
{
For(i,1,N-1) cout << a[i];
cout << endl;
int b[N];
For(i,1,N-1) cout << b[i] << " ";
cout << endl;
}

b)
#include <bits/stdc++.h>
#define For(i,a,b) for(int i = a; i <= b ; i++)
using namespace std;

    int a[5] = {1, 2, 3,4};

    int main()
{
// int b[3] = {1, 2, 3, 4};
For(i,0,3) cout << a[i] << " ";
cout << endl;
// For(i,0,3) cout << b[i] << " ";
cout << endl;
}

c)
#include <bits/stdc++.h>
#define For(i,a,b) for(int i = a; i <= b ; i++)
using namespace std;

    int a[] = { 1, 2, 3,4};

    int main()
{
For(i,0,3) cout << a[i] << " ";
cout << endl;
int b[] = {1, 2, 3, 4};
For(i,0,3) cout << b[i] << " ";
cout << endl;
}
Mỗi lần chạy lại sẽ tạo ra một mảng mới với giá trị ngẫu nhiên tại thời điểm đó.
Điều này làm cho kết quả in ra màn hình mỗi lần chạy lại chương trình sẽ khác nhau.
