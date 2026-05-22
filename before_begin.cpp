#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // initialising the forward list
    forward_list<int> fl = {20, 30, 40, 50};

    // perfoming chefore_begin function
    auto it = fl.cbefore_begin();

    // inserting element before the first element
    fl.insert_after(it, 10);

    cout << "Element of the list are: " << endl;

    // loop to print the elements of the list
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";

    return 0;
}