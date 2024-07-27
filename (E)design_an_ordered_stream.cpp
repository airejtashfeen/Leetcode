#include <iostream>
#include <vector>
#include <string>

using namespace std;

class OrderedStream {
public:
    string v[1000];
    int curr = 0;

    OrderedStream(int n) {
        // Constructor is not needed for this implementation
    }
    
    vector<string> insert(int idKey, string value) {
        v[idKey - 1] = value;

        vector<string> ans;
        while (curr < 1000 && v[curr] != "") {
            ans.push_back(v[curr]);
            curr++;
        }
        return ans;
    }
};

int main() {
    // Create an OrderedStream object with capacity for 5 elements
    OrderedStream* obj = new OrderedStream(5);

    // Insert elements and print the results
    vector<string> result;

    result = obj->insert(3, "ccccc");
    cout << "[";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << "]" << endl;

    result = obj->insert(1, "aaaaa");
    cout << "[";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << "]" << endl;

    result = obj->insert(2, "bbbbb");
    cout << "[";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << "]" << endl;

    result = obj->insert(5, "eeeee");
    cout << "[";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << "]" << endl;

    result = obj->insert(4, "ddddd");
    cout << "[";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << "]" << endl;

    // Clean up
    delete obj;
    return 0;
}
