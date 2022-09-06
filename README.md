# **Important C++ STL containers and libraries**


[C++ STL](https://cplusplus.com/reference/) (Standard Template Library) provides mulitple data structures and methods that would be useful in many scenarios. In this repository I will **README** file I will introduce the most important of them as a guide for beginners.

<br> <br>

## **Competitive Programming**
**Competitive Programming** is a field in programming that requires a good knowledge in **algorithms**, **data structures** and **math**. It is all about solving questions the using an algorithm that will produce the desired output. There are international competitions like: 
* [ICPC](https://icpc.global/) (International Collegiate Programming Competitions) 
* [Google Coding Competitions](https://codingcompetitions.withgoogle.com/)
* [Meta Coding Competitions](https://www.facebook.com/codingcompetitions)
* [Microsoft Imagine Cup](https://imaginecup.microsoft.com/en-us/Events)

## **C++ Code Template**
Here you can see a template code that you will be using in any problem you will solve in a website like [Codeforces](https://codeforces.com/) and [Atcoder](https://atcoder.jp/). This template works when using `g++` as compiler. 
```c++
// this include statement includes all STL libraries available
#include <bits/stdc++.h>
using namespace std;

// to save time, redefine long long type to ll 
typedef long long ll;

int main()
{
    // code that makes input and output workes faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // the input comes from a file
    ifstream input_file("filename.txt");

    // your algorithm code here, 

    // output goes to a console, 
    // output structure depend on the problem 

    return 0;
}
```

<br> <br>

## **Data Strucures**
Data structures provide methods to store and interact with data in an organized matter. There are several basic data structures that any developer should atleast know about. In the following I will introduce the most important of the data structures that **C++ STL** provide. 


## vector 
vectors are dynamically allocated data structures that look like arrays but without specifying a size. It has multiple methods to interact with it. 

* `push_back()`: Used to push the element at the end of the vector. For faster method, use `emplace_back()`.
* `pop_back()`: Used to remove the last element from the vector.
* `size()`: Returns the size of the vector.
* `clear()`: Deletes all the content of the vector.
* `erase()`: Deletes the specified index or data.
* `empty()`: Returns boolean value True if vector is empty, else returns False.
* `Iterator lower_bound(Iterator first, Iterator last, const val)`: **lower_bound** returns an iterator pointing to the first element in the range **[first, last)** which has a value not less than **‘val’**.
* `Iterator upper_bound(Iterator first, Iterator last, const val)`: **upper_bound** returns an iterator pointing to the first element in the range **[first, last)** which has a value greater than **‘val’**.

```c++

// Defining a vector
vector<int> vec;

for (int i = 1; i <= 10; i++) {
    vec.push_back(i);
}

cout << "Vector size: " << vec.size() << "\n";

if (vec.empty() == false){
    cout << "Is vector is  empty: False\n";
}

// remove last element
vec.pop_back();

// remove first element
vec.erase(vec.begin());

// empty the vector
vec.clear();

if (vec.empty() == true) {
    cout << "Is vector is empty: True\n";
}

```