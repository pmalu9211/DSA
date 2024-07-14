#include <bits/stdc++.h>
using namespace std;

void print(map<string, string> m)
{
    for (auto value : m)
    {
        cout << value.first << " " << value.second;
        cout << endl;
    }
    cout << endl;
}

int main()
{

    // initialization
    map<string, string> m;
    m["this"] = "hello";
    m["all"] = "MALU";
    m["world"] = "MOM";

    print(m);

    // NOTE:
    // returns a itrator of the value of the thing to find in the map
    // if it is not in the map then it returns the itrator to the last element + 1
    // i.e, m.end()

    // finding operator
    auto l = m.find("all");
    cout << "the index l is " << l << endl;
    // cout << l;
    int arr[2] = {1, 2};

    // deletion operator
    // cout << print(l.first);
    m.erase(l);

    // using erase operator while giving parameter as iterator
    m.erase(m.find("this"));
    print(m);
}