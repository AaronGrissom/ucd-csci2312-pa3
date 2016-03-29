// File: Point.h
//
// Created by Ivo Georgiev on 9/14/15.
//

#ifndef CLUSTERING_POINT_H
#define CLUSTERING_POINT_H

#include <iostream>
using namespace std;

namespace Clustering 
{

    class Point 
    {
        private:
            unsigned int __id;
            unsigned int __dim;        // number of dimensions of the point
            double *__values; // values of the point's dimensions

            static unsigned int __idGen; // id generator

        public:
            // variable
                static const char POINT_VALUE_DELIM;
                static void rewindIdGen();
            // constructors
                Point(unsigned int);
                // Point(unsigned int, double *);
            // Big three: cpy ctor, overloaded operator=, dtor
                Point(const Point &);
                // Point &operator=(const Point &);
                ~Point();
            // Accessors & mutators
                int getId() const;
                unsigned int getDims() const;
                void setValue(unsigned int, double);
                double getValue(unsigned int) const;
            // Functions
                // double distanceTo(const Point &) const;
            // Overloaded operators

            // Members
                // manipulators
                    // Point &operator*=(double); // p *= 6; p.operator*=(6);
                    // Point &operator/=(double);
                // accessor
                    // const Point operator*(double) const; // prevent (p1 * 2) = p2;
                    // const Point operator/(double) const; // p3 = p2 / 2;
                //array
                    // double &operator[](unsigned int index);
                    // const double &operator[](unsigned int index) const;

            // Friends
                // manipulators
                    // friend Point &operator+=(Point &, const Point &);
                    // friend Point &operator-=(Point &, const Point &);
                // accessor
                    // friend const Point operator+(const Point &, const Point &);
                    // friend const Point operator-(const Point &, const Point &);
                // comparitor
                    // friend bool operator==(const Point &, const Point &);
                    // friend bool operator!=(const Point &, const Point &);
                    // friend bool operator<(const Point &, const Point &);
                    // friend bool operator>(const Point &, const Point &);
                    // friend bool operator<=(const Point &, const Point &);
                    // friend bool operator>=(const Point &, const Point &);
                //os
                    friend ostream &operator<<(ostream &os, Point &p);
                    // friend std::istream &operator>>(std::istream &is, Point &p);
    };

}
#endif //CLUSTERING_POINT_H
