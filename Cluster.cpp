# include <iostream>
using namespace std;

# include "Point.cpp"
# include "Cluster.h"
using namespace Clustering;

/*
// Cluster
    // Private
        void Cluster::__del()
        {
            
        }
        void Cluster::__cpy(LNodePtr pts)
        {
            
        }
        bool Cluster::__in(const Point &p) const
        {
            
        }
        
        // Centroid
            // constructor
                Cluster::Centroid::Centroid(unsigned int d, const Cluster &c) // needs ref to cluster
                {
                        
                }
            // no copy or assignment
                Cluster::Centroid::Centroid(const Centroid &cent) = delete
                {
                        
                }
                Cluster::Centroid::Centroid &operator[](const Centroid &cent) = delete
                {
                        
                }
            // getters/setters
                const Point Cluster::Centroid::get() const // doesn't check for validity
                {
                        
                }
                void Cluster::Centroid::set(const Point &p) // sets to valid
                {
                        
                }
                bool Cluster::Centroid::isValid() const
                {
                        
                }
                void Cluster::Centroid::setValid(bool valid)
                {
                        
                }
            // functions
                void Cluster::Centroid::compute()
                {
                        
                }
                bool Cluster::Centroid::equal(const Point &p) const
                {
                        
                }
                void Cluster::Centroid::toInfinity()
                {
                    
                }
    //public
        // constructor
            Cluster::Cluster(unsigned int d)
            {
                
            }
        // The big three: cpy ctor, overloaded operator=, dtor
            Cluster::Cluster(const Cluster &c)
            {
                
            }
            Cluster::Cluster &operator=(const Cluster &c)
            {
                
            }
            Cluster::~Cluster()
            {
                
            }
        // Getters
            unsigned int Cluster::getSize() const
            {
                
            }
            unsigned int Cluster::getDimensionality() const
            {
                
            }
            unsigned int Cluster::getId() const
            {
                
            }
        // Add/remove: They allow calling c1.add(c2.remove(p));
            void Cluster::add(const Point &p)
            {
                
            }
            const Point &Cluster::remove(const Point &p)
            {
                
            }
            bool Cluster::contains(const Point &p) const
            {
                
            }
        // Centroid functions
            void Cluster::pickCentroids(unsigned int k, Point **pointArray) // pick k initial centroids
            {
                
            }
        // Overloaded operators

        // Element access (aka direct access, array operator)
            const Point &Cluster::operator[](unsigned int u) const // const version only
            {
                
            }
        // IO - friends
            std::ostream &Cluster::operator<<(std::ostream &screen, const Cluster &c)
            {
                
            }
            std::istream &Cluster::operator>>(std::istream &screen, Cluster &c)
            {
                
            }
        // Comparisons - Friends
            bool Cluster::operator==(const Cluster &lhs, const Cluster &rhs)
            {
                
            }
            bool Cluster::operator!=(const Cluster &lhs, const Cluster &rhs)
            {
                
            }
        // Operators with Points - Members
            Cluster &Cluster::operator+=(const Point &rhs) // allocate point
            {
                
            }
            Cluster &Cluster::operator-=(const Point &rhs) // delete point(s)
            {
                
            }
        // Operators with Clusters - Members
            Cluster &Cluster::operator+=(const Cluster &rhs) // union
            {
                
            }
            Cluster &Cluster::operator-=(const Cluster &rhs) // (asymmetric) difference
            {
                
            }
        // Binary operators for Clusters - Friends
            const Cluster Cluster::operator+(const Cluster &lhs, const Cluster &rhs)
            {
                
            }
            const Cluster Cluster::operator-(const Cluster &lhs, const Cluster &rhs)
            {
                
            }
        // Binary operators for Clusters and Point pointers - Friends
            const Cluster Cluster::operator+(const Cluster &lhs, const Point &rhs)
            {
                
            }
            const Cluster Cluster::operator-(const Cluster &lhs, const Point &rhs)
            {
                
            }
        //Move
            //private
            
            //public
                Cluster::Move::Move(const Point &p, Cluster &from, Cluster &to)
                {
                    
                }
                void Cluster::Move::perform()
                {
                    
                }
*/