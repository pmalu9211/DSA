// #include <iostream>
// #include <algorithm>
// // #include<numeric> for C++17

// using namespace std;

// int main()
// {
//     cout << "gcd(6, 20) = " << __gcd(6, 20) << endl; // gcd(6,20) for C++17
// }

// #include <iostream>
// #include <boost/math/common_factor.hpp>

// using namespace std;

// int main()
// {
//     cout << "LCM(10,20) = " << boost::math::lcm(10,20)
//          << endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// #include<algorithm> // for lexicographical_compare()
// using namespace std;

// int main()
// {
//     // initializing char arrays
//     char one[] = "geeksforgeeks";
//     char two[] = "gfg";

//     // using lexicographical_compare for checking
//     // is "one" is less than "two"
//     if( lexicographical_compare(one, one+13, two, two+3))
//     {
//         cout << "geeksforgeeks is lexicographically less than gfg";

//     }
//     else
//     {
//         cout << "geeksforgeeks is not lexicographically less than gfg";

//     }
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     /*Here we take two parameters, the beginning of the
//     array and the length n upto which we want the array to
//     be sorted*/
//     sort(arr, arr + n);

//     cout << "\nArray after sorting using "
//             "default sort is : \n";
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>

// int main() {
//     unsigned long long int bigInteger = 18446744073709551615ULL; // Maximum value for unsigned long long int
//     std::cout << "The largest number that can be stored in unsigned long long int is: " << bigInteger << std::endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>

// int main()
// {
//     long long int result = 10e16; // 10 times 10^16
//     std::cout << "10 times 10^16 is: " << result << std::endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string> // for string and to_string()
// using namespace std;

// // Driver Code
// int main()
// {
//     // Declaring integer
//     int i_val = 20;

//     // Declaring float
//     float f_val = 30.50;

//     // Conversion of int into string using
//     // to_string()
//     string stri = to_string(i_val);

//     // Conversion of float into string using
//     // to_string()
//     string strf = to_string(f_val);

//     // Displaying the converted strings
//     cout << "The integer in string is : ";
//     cout << stri << endl;
//     cout << "The float in string is : ";
//     cout << strf << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>
// using namespace std;

// // Driver code
// int main()
// {
//   string str1 = "45";
//   string str2 = "3.14159";
//   char str3[] = "31337 geek";

//   // type of explicit type casting
//   int myint1 = stoi(str1);

//   // type of explicit type casting
//   int myint2 = stoi(str2);

//   // type of explicit type casting
//   int myint3 = stoi(str3);

//   cout << "stoi(\"" << str1 <<
//           "\") is " << myint1 << '\n';
//     cout << "stoi(\"" << str2 <<
//             "\") is " << myint2 << '\n';
//     cout << "stoi(\"" << str3 <<
//             "\") is " << myint3 << '\n';
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// bool isPrime(int n)
// {
//     // Since 0 and 1 is not
//     // prime return false.
//     if (n == 1 || n == 0)
//         return false;

//     // Run a loop from 2 to n-1
//     for (int i = 2; i < n; i++)
//     {
//         // if the number is divisible by i,
//         // then n is not a prime number.
//         if (n % i == 0)
//             return false;
//     }
//     // Otherwise n is a prime number.
//     return true;
// }

// // Function to check whether
// // the string is palindrome
// string isPalindrome(string S)
// {
//     // Stores the reverse of the
//     // string S
//     string P = S;

//     // Reverse the string P
//     reverse(P.begin(), P.end());

//     // If S is equal to P
//     if (S == P)
//     {
//         // Return "Yes"
//         return "Yes";
//     }
//     // Otherwise
//     else
//     {
//         // return "No"
//         return "No";
//     }
// }

// sort(arr, arr + n)