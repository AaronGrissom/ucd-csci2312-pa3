# include <cmath>
# include <iostream>
using namespace std;

# include "Point.h"
using namespace Clustering;

// constructors
    Point::Point(unsigned int)
    {
        
    }
    Point::Point(unsigned int, double *)
    {
        
    }
// Big three: cpy ctor, overloaded operator=, dtor
    Point::Point(const Point &)
    {
        
    }
    Point::Point &operator=(const Point &)
    {
        
    }
    Point::~Point()
    {
        
    }
// Accessors & mutators
    int Point::getId() const
    {
        
    }
    unsigned int Point::getDims() const
    {
        
    }
    void Point::setValue(unsigned int, double
    {
        
    }
    double Point::getValue(unsigned int) const
    {
        
    }
// Functions
    double Point::istanceTo(const Point &) const
    {
        
    }
// Overloaded operators

// Members
    // manipulators
        Point &Point::operator*=(double) // p *= 6; p.operator*=(6)
        {
            
        }
        Point &Point::operator/=(double)
        {
            
        }
    // accessor
        const Point Point::operator*(double) const // prevent (p1 * 2) = p2;
        {
            
        }
        const Point Point::operator/(double) const // p3 = p2 / 2;
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
    //os
        std::ostream &Point::operator<<(std::ostream &os, const Point &p)
        {
            
        }
        std::istream &Point::operator>>(std::istream &is, Point &p)
        {
            
        }