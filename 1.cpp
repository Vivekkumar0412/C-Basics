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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cout<<"ENTER THE VALUE OF NUM : "<<endl;
//     cin>>num;
//     int rev_num = 0;
//     while(num>0){
//         int new_num = num%10;
//         rev_num = rev_num *10 + new_num;
//         num = num/10;
//     };
//     cout<<rev_num;
//     return 0;
// }

// $$$$$$$$$ DECIMAL TO BINARY CONVERSION $$$$$$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     int digit = 0;
//     while(n>0){
//         int new_num = n%2;
//         digit = digit * 10 + new_num;
//         n = n/2;
//     };
//     cout<<digit;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     int num = 0;
//     int main_num = 0;
//     while(n>0){
//         int bit = n&1;
//         num = num * 10 + bit;
//         n = n>>1;

//         main_num = main_num *10 + num;

//     };
//     cout<<num;
//     cout<<main_num;
//     return 0;
// }

// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     int ans = 0;
//     int i = 0;
//     while(n != 0){
//         int bit = n&1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     };
//     cout<<"THE ANSWER IS : "<<ans;
//     return 0;
// }



/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// #include<math.h>

// using namespace std;

// int main()
// {
//     int n;
//     cout<<"ENTER THE VALUE OF N: "<<endl;
//     cin>>n;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     };
//     cout<<ans;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int prod = 1;
//     int sum = 0;
//     cout<<"ENTER : "<<endl;
//     cin>>n;
//     while(n != 0){
//         int digit = n % 10;
//         prod = prod * digit;
//         sum = sum + digit;
//         n = n/10; 
//     };
//     cout<<"THE ANSWER IS : "<<prod - sum;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter : "<<endl;
//     cin>>n;
//     int sum = 0;
//     while(n != 0){
//         if(n&1){
//             sum++;
//         };
//         n = n>>1;
//     }
//     cout<<sum;
//     return 0;
// };

//  $$$$$$$$$$$$ NUMBER OF 1s IN A AN INTEGER $$$$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     int count = 0;
//     while(n != 0){
//         if( n&1){
//             count++;
//         }
//         n = n>>1;
//     };
//     cout<<count<<endl;
//     return 0;
// };


// ######### 14th MAY 2022 FUNCTIONS IN C++ ###########

// #include<bits/stdc++.h>
// using namespace std;
// void re(){
//     cout<<"HELLO THERE THIS IS FROM FUNCTION"<<endl;
// }
// int main(){
//     re();
//     return 0;
// }

// $$$$$$$$ SUM OF 2 NUMBERS USING FUNCTION $$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// void sum(int a, int b){
//     cout<<"THE SUM IS : "<<a+b;

// }
// int main(){
//     sum(5,5);
//     return 0;
// };

// $$$$$$$$ CALL BY VALUE $$$$$$$$$$$
// #include<bits/stdc++.h>
// using namespace std;
// void pri(int n);
// int main(){
//     int n = 5;
//     pri(10);
//     cout<<"main ka num = "<<n;
//     return 0;
// };
// void pri(int n){
//     cout<<"ye function ka num hai = "<<n;
// };

// ###### CALL BY VALUE DIFFER EXAMPLE #########
// #include<bits/stdc++.h>
// using namespace std;
// void yachna(int m){
//     cout<<"YACHNA VALUE : "<<m<<endl;

// };
// void vivek(int k){
//     cout<<"VIVEK VALUE : "<<k<<endl;
//     k++;
//     yachna(k);
// };
// int main(){
//     int n = 59;
//     vivek(n);
//     cout<<"MAIN FUNCTION VALUE : "<<n<<endl;
//     return 0;
// };

// $$$$$$$ all even number till n ###########
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         if(i%2 == 0){
//             cout<<i<<" IS A EVEN NUMBER."<<endl;
//         };
//     };
//     return 0;
// }

// USING FUNCTION 
// #include<bits/stdc++.h>
// using namespace std;
// void isEven(){
//     int n;
//     cout<<"ENTER THE VALUE OF N : "<<endl;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         if(i%2 == 0){
//             cout<<i<<" IS A EVEN NUMBER."<<endl;
//         };
//     };
// }
// int main(){
//     isEven();
//     return 0;
// };


// SQUARE OF A NUMBER TILL N
// #include<bits/stdc++.h>
// using namespace std;
// void sqr(){
//     int n;
//     cout<<"ENTER : "<<endl;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         cout<<"SQUARE OF "<<i<<" is "<<i*i<<endl;
//     }
// }
// int main(){
//     sqr();
//     return 0;
// }


// FACTORIAL OF A NUMBER USING FUNCTION 
// #include<bits/stdc++.h>
// using namespace std;
// void fact(){
//     int n;
//     cout<<"ENTER : "<<endl;
//     cin>>n;
//     int fact = 1;
//     for(int i = n; i>0; i--){
//         fact = fact*i;
//     };
//     cout<<"FACTORIAL OF "<<n<<" IS "<<fact<<endl;
// };
// int main(){
//     fact();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void name(){
//     int n;
//     cout<<"ENTER : "<<endl;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         cout<<"VIVEK SINGH RAJPUT"<<endl;
//     }
// };
// int main(){
//     name();
//     return 0;
// };

// $$$$$$$$$$$ 16th MAY 2022 ARRAY IN C++ $$$$$$$$$$$

// ### PRINTING THE ELEMENTS OF AN ARRAY ###
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1};
//     for(int i = 0; i<5; i++){
//         cout<<arr[i]<<endl;
//     };
//     return 0;
// };


// ## PRINTING THE ELEMENTS OF AN ARRAY USING FUNCTION ###
// #include<bits/stdc++.h>
// using namespace std;
// void print_arr(int rr[], int size){
//     rr[0] = 20;
//     for(int i = 0; i<size; i++){
//         cout<<rr[i]<<endl;

//     };
// };
// int main(){
//     int arr[6] = {1,2,43,45,77,4};
    
//     for(int i = 0; i<6; i++){
//         cout<<"YE MAIN WALA ARRAY KA HAI : "<<arr[i]<<endl;
//     };
//     print_arr(arr,6);
//     return 0;
// };

// ###### TAKING INPUT IN AN ARRAY #####
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     int arr[100];
//     // TAKING INPUT
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     };
//     // PRINTING OUTPUT
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<endl;
//     };
//     return 0;
// };


// Liner search 
// #include<bits/stdc++.h>
// using namespace std;
// bool pre(int arr[],int size, int target){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == target){
//             cout<<"The number is found : "<<i<<endl;
//         }else{
//             cout<<"NUMBER NOT FOUND."<<endl;
//         };
//     };
// }
// void inp_arr(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout<<"ELEMNT IS : "<<arr[i]<<endl;
//     };
// }
// int main(){
//     int arr[20];
//     int n;
//     cout<<"ENTER THE NUMBER : "<<endl;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     };
//     pre(arr,5,7);
//     // inp_arr(arr,5);
//     return 0;
// };

// $$$$ Given an array nums of integers, return how many of them contain an even number of digits.%%%%%%%%%

#include<bits/stdc++.h>
using namespace std;
void print_arr(int arr[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]%2 == 0){
            count++;
        }
    };
    cout<<"total number of even numbers in this array is : "<<count<<endl;
};
int main(){
    int arr[500];
    int n;
    cout<<"ENTER THE VALUE OF N : "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    };
    print_arr(arr,6);
    return 0;

};