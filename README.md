# add_container
 Simple template helper to add element(s) into STL containers, in a C++20 way 

I needed a unified way to add elements into STL containers. Under the hood, code is calling right function for specific container, using the C++ requires concept. 

Needs C++ compiler with concepts support.
For MSVC, select:  
Project Properties, General, C++ Language Standard > Preview - Features from the Latest C++ Working Draft (/std:c++latest) 
