#include <iostream>
#include <cstring>
using namespace std;

class String 
{
    private:
        char *str;

    public:
        String() 
        {
            str = NULL;
        }

        String(const char *s)
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }

        ~String() 
        {
            if (str) delete [] str;
        }

        void display()
        {
            cout << str << endl;
        }

        String operator+(String& s)
        {
            char *temp = new char[strlen(str) + strlen(s.str) + 1];
            strcpy(temp, str);
            strcat(temp, s.str);
            String result(temp);
            delete [] temp;
            return result;
        }
};

int main() 
{
    String s1("Hello"), s2(" World!");
    String s3 = s1 + s2;
    s3.display();
    return 0;
}
