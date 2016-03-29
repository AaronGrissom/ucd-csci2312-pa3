# include <iostream>
using namespace std;

# include "Point.h"
using namespace Clustering;

// constructors
    unsigned int Point::__idGen = 0;
    Point::Point(unsigned int num)
    {
        __id = __idGen++;
        __dim = num;
        __values = new double[__dim];
        
        for (int i = 0; i < __dim; ++i)
        __values[i] = 0;
    }
/*
    Point::Point(unsigned int, double *)
    {
        
    }
*/
// Big three: cpy ctor, overloaded operator=, dtor
    Point::Point(const Point &CpydPoint)
    {
        __id = CpydPoint.getId();
        __dim = CpydPoint.getDims();
        __values = new double[__dim];
    
        for (int i = 0; i < __dim; ++i)
        __values[i]=CpydPoint.getValue(i);
    }
/*
    Point &Point::operator=(const Point &rPoint)
    {

    }
*/
    Point::~Point()
    {
        delete [] __values;
    }
// Accessors & mutators
    int Point::getId() const
    {
        return __id;
    }
    unsigned int Point::getDims() const
    {
        return __dim;
    }
    void Point::setValue(unsigned int num, double val)
    {
        __values[num] = val;
    }
    double Point::getValue(unsigned int num) const
    {
        return __values[num];
    }
/*
// Functions
    double Point::distanceTo(const Point &nextPoint) const
    {

    }
// Overloaded operators

// Members
    // manipulators
        Point &Point::operator*=(double multiplier) // p *= 6; p.operator*=(6)
        {

        }
        Point &Point::operator/=(double divider)
        {

        }
    // accessor
        const Point Point::operator*(double multiplier) const // prevent (p1 * 2) = p2;
        {

        }
        const Point Point::operator/(double divider) const // p3 = p2 / 2;
        {

        }
    // array
        double &Point::operator[](unsigned int index)
        {
            
        }
        const double &Point::operator[](unsigned int index) const
        {
            
        }

// Friends
    // manipulators
        Point &Point::operator+=(Point &, const Point &)
        {
            
        }
        Point &Point::operator-=(Point &, const Point &)
        {
            
        }
    // accessor
        const Point Point::operator+(const Point &, const Point &)
        {
            
        }
        const Point Point::operator-(const Point &, const Point &)
        {
            
        }
    // comparitor
        bool Point::operator==(const Point &, const Point &)
        {
            
        }
        bool Point::operator!=(const Point &, const Point &)
        {
            
        }
        bool Point::operator<(const Point &, const Point &)
        {
            
        }
        bool Point::operator>(const Point &, const Point &)
        {
            
        }
        bool Point::operator<=(const Point &, const Point &)
        {
            
        }
        bool Point::operator>=(const Point &, const Point &)
        {
            
        }
*/
    //os
        ostream &operator<<(ostream &os, Point &p)
        {
            os << "Test" << endl;
            return os;
        }
/*
        std::istream &Point::operator>>(std::istream &is, Point &p)
        {
            
        }
*/