#include <iostream>
using namespace std;

class A {
public:
    int aa;
protected:
    int ab;
private:
    int ac;
public:
    void testA() {
        aa = 10;
        ab = 20;
        ac = 30;
    }
};

class B : public A {
public:
    int ba;
protected:
    int bb;
private:
    int bc;
public:
    void testB() {
        ba = 40;
        bb = 50;
        aa = 60; 
        ab = 70; 
    }
};

class C : public B {
public:
    int ca;
protected:
    int cb;
private:
    int cc;
public:
    void testC() {
        ca = 80;
        cb = 90;
        ba = 100; 
        bb = 110; 
        aa = 120; 
        ab = 130; 
    }
};

int main() {
    A a;
    a.testA();
    a.aa = 5; 
   

    B b;
    b.testB();
    b.aa = 15; 
    b.ba = 25; 
    
    
    C c;
    c.testC();
    c.aa = 35; 
    c.ba = 45; 
    c.ca = 55; 

    return 0;
}
