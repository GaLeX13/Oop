#include "geometry.h"
#include <cmath>

CCerc::CCerc(double r) : radius(r) {}

double CCerc::perimeter() const {
    return 2 * M_PI * radius;
}

CDreptunghi::CDreptunghi(double l, double w) : length(l), width(w) {}

double CDreptunghi::perimeter() const {
    return 2 * (length + width);
}

CPatrat::CPatrat(double side) : CDreptunghi(side, side) {}
