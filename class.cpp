#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
public:

     int age;
    string first_name;
    string last_name;
    int standard;
    int set_age(int a)
    {
        age=a;
                return 0;

    }
    int  set_standard(int s)
    {
        standard=s;
                return 0;

    }
    string set_first_name(string fn)
    {
        first_name=fn;
                return "0";

    }
    string set_last_name(string ln)
    {
        last_name=ln;
                return "0";

    }
    int get_age()
    {
        return age;
    }
    string get_last_name()
    {
        return last_name;
    }
    string get_first_name()
    {
        return first_name;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        cout<<age<<",";
        cout<<first_name<<",";
        cout<<last_name<<",";
        cout<<standard<<endl;
        return "\n";
    }
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
