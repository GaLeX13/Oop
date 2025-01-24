#ifndef GEOMETRY_H
#define GEOMETRY_H

class CPunct {
public:
    virtual double perimeter() const = 0;
    virtual ~CPunct() {}
};

class CCerc : public CPunct {
    double radius;
public:
    CCerc(double r);
    double perimeter() const override;
};

class CDreptunghi : public CPunct {
    double length, width;
public:
    CDreptunghi(double l, double w);
    double perimeter() const override;
};

class CPatrat : public CDreptunghi {
public:
    CPatrat(double side);
};

#endif
