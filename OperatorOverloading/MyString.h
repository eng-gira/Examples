#ifndef _MyString_H_
#define _MyString_H_


class MyString
{
    private:
        char *str;

    public:
        MyString();
        MyString(const char *s);
        MyString(const MyString &s);
        void display() const;
        int getLength() const;
        const char *getStr() const;
}


#endif