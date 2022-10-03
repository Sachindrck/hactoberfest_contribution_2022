#include<iostream>
using namespace std;

class CTest{
    static int iCount;
    public:
    CTest()
    {
        ++iCount;
    }
    ~CTest()
    {
        --iCount;
    }
    static void CountObjects ()
    {
        cout<<iCount;
    }
};

int CTest::iCount;
int main()
{
    CTest obj1, obj2;
    CTest::CountObjects();
    return 0;
}
