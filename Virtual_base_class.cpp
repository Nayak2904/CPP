#include <iostream>

class student // Base class declaration
{
protected:
    int r_no;

public:
    void get_n(int a)
    {
        r_no = a;
    }
    void put_n(void)
    {
        cout << "Roll No." << r_no << "\n";
    }
};
class test : virtual public student // Virtually declared common
{                                   // base class 1
protected:
    int part1;
    int part2;

public:
    void get_m(int x, int y)
    {
        part1 = x;
        part2 = y;
    }
    void put_m(void)
    {
        cout << "marks obtained : "<< "\n";
        cout << "part1 = " << part1 << "\n";
        cout << "part2 = "<< part2 << "\n";
    }
};
class sports : public virtual student // virtually declared common
{                                     // base class 2
protected:
    int score;

public:
    void get_s(int a)
    {
        score = a;
    }
    void put_s(void)
    {
        cout << "sports wt. : " << score << "\n";
    }
};
class result : public test, public sports // derived class
{
private:
    int total;

public:
    void show(void);
};
void result :: show(void)
{
    total = part1 + part2 + score;
    put_n();
    put_m();
    put_s();
    
    cout << "\n total score = " << total << "\n";
}
main()
{
    result S1;
    S1.get_n(345)
        S1.get_m(30, 35);
    S1.get - S(7);
    S1.show();
    return 0;
}
