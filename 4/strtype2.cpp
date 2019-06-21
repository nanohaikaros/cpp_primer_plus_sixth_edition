// strtype2.cpp -- assigning, adding, and appending
#include <iostream>
#include <string>
int main() {
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    cout << "You can addign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can addign a C-style string to a string object.\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yield s2 = " << s2 << endl;

    return 0;
}