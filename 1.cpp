// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // char a;
//     // cout<<"ENTER THE CHARACTER : "<<endl;
//     // cin>>a;
//     // cout<<"THE ASCII VALUE OF "<<a<<" IS "<<(int)a<<endl;

//     // long int a= 100000;
//     // long int c= 100000;
//     // long int b = a*c;
//     // cout<<b<<endl;
//     // cout<<10^4<<endl;

//     long long int l;
//     long long int b;
//     cout<<"ENTER THE VALUE OF LENGTH : "<<endl;
//     cin>>l;
//     cout<<"ENTER THE VALUE OF BREADTH : "<<endl;
//     cin>>b;
//     long long int area = l*b;
//     cout<<"AREA OF RECTANGLE IS : "<<area<<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int a = 'a';
//   cout<<a<<endl;
//   return 0;
// }

// $$$$$$$$$$$$$$$$ BITWISE OPERATORS $$$$$$$$$$$$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int a = 4;
//   int b = 6;
//   cout<<"a&b is : "<<(a&b)<<endl;
//   cout<<"a|b is : "<<(a|b)<<endl;
//   cout<<"a~b is : "<<~a<<endl;
//   cout<<"a^b is : "<<(a^b)<<endl;

//   // $$$$$$$$$$$$$$$$ LEFT SHIFT AND RIGHT SHIFT OPERATOR $$$$$$$$$$$$$$$$
//   cout<<(17<<1)<<endl;
//   cout<<(17>>2)<<endl;
//   cout<<(21<<2)<<endl;
//   cout<<(16>>3)<<endl;
//   return 0;
// }

// $$$$$$$$$$$$$$$$ SUM OF N NUMBERS $$$$$$$$$$$$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   int sum = 0;
//   cout<<"ENTER THE VALUE OF N: "<<endl;
//   cin>>n;
//   for(int i = 0; i<=n; i++){
//     sum = sum + i;
//   cout<<"total is : "<<sum<<endl;
//   };
//   return 0;
// }

// $$$$$$$$$$$$$$$$ FEBONNACHI SERIES $$$$$$$$$$$$$$$$

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ENTER THE VALUE OF N: " << endl;
//     cin >> n;
//     int a = 0;
//     int b = 1;
//     int sum = 0;
//     cout << a << endl;
//     cout << b << endl;
//     for (int i = 1; i <= n; i++)
//     {

//         sum = a + b;
//         cout << sum << endl;
//         a = b;
//         b = sum;
//     };
//     return 0;
// }

// $$$$$$$$$$$$$ CHECK WEATHER A NUMBER IS PRIME NUMBER OR NOT $$$$$$$$

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ENTER THE VALUE OF N: " << endl;
//     cin >> n;
//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             cout<<"NOT A PRIME NUMBER "<<endl;
//             break;
//         }else{
//             cout<<"PRIME NUMBER "<<endl;
//         };
//     }
//     return 0;
// };


// $$$$$$$ LEETCODE PROBLEM NUMBER 1 $$$$$$$$$$$

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ENTER THE VALUE OF N: " << endl;
//     cin >> n;
//     int prod = 1;
//     int sum = 0;
//     while(n!=0){
//         int new_num = n%10;
//         prod = prod * new_num;
//         sum = sum + new_num;
//         n/10;
//     }
//     cout<<prod-sum<<endl;
//     return 0;
// };

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cout<<"ENTER THE VALUE OF NUM : "<<endl;
//     cin>>num;
//     int sum = 0;
//     int prod = 1;
//     while(num>0){
//         int new_num = num %10;
//         sum = sum + new_num;
//         prod = prod*new_num;
//         num = num /10;
//     }
//     cout<<prod - sum<<endl;
//     return 0;
// }

// $$$$$$ REVERE AN INTERGER $$$$$$$$$$
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE VALUE OF NUM : "<<endl;
    cin>>num;
    int rev_num = 0;
    while(num>0){
        int new_num = num%10;
        rev_num = rev_num *10 + new_num;
        num = num/10;
    };
    cout<<rev_num;
    return 0;
}