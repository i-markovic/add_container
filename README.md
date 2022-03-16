# add_container
 Simple template helper to add element(s) into STL containers, in a C++20 way 

I needed a unified way to add elements into STL containers. Under the hood, code is calling the right function for a specific container, using the C++ requires concept. 

Needs C++ compiler with concepts support.
For MSVC, select:  
- Project Properties, General, C++ Language Standard > Preview - Features from the Latest C++ Working Draft (/std:c++latest) 

Example usage:

```
        vector<int> v{ 1,2,3 };
        set<int> s{1,2,3};
        int a = 4;
        bool br = stde::add(v, a);// 1,2,3,4
        br = stde::add(s, a);// 1,2,3,4

        map<int, double> m;
        br = stde::add(m, 1, 2.5);// map insert

        vector<int> v1{ 5,6,7 };
        br = stde::add(v, v1);// 1,2,3,4,5,6,7

        set<int> s1{ 5,6,7 };
        br = stde::add(s, s1);// 1,2,3,4,5,6,7

        br = stde::add(v, s1);// 1,2,3,4,5,6,7,5,6,7
```
