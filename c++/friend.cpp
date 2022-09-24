 #include <iostream>
 using namespace std;
 class Yogi
 {
    int a,b,m;
    public:
        void set_Data();
        friend void find_max(Yogi);
 };