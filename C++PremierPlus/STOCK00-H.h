//10.1 股票类 STOCK00-H
#ifndef STOCK00_H
#define STOCK00-H
#include<iostream>
#include<string>
class stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tol(){ total_val = share_val * shares;}
public:
    void acquire(const std::string &co,long num,double pr);
    void buy(long num,double pr);
    void sell(long num,double pr);
    void update(double pr);
    void show();
};

#endif STOCK00-H