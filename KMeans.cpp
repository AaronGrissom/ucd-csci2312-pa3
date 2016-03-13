# include "KMeans.h"
using namespace clustering;

//constructor
    KMeans::KMeans(unsigned int dim, unsigned int k, std::string filename, unsigned int maxIter)
    {
        
    }
// no copying
    KMeans::KMeans(const KMeans &) = delete
    {
        
    }
    KMeans::KMeans &operator=(const KMeans &) = delete
    {
        
    }
    KMeans::~KMeans()
    {
        
    }
// accessors
    unsigned int KMeans::getMaxIter()
    {
        
    }
    unsigned int KMeans::getNumIters()
    {
        
    }
    unsigned int KMeans::getNumNonemptyClusters()
    {
        
    }
    unsigned int KMeans::getNumMovesLastIter()
    {
        
    }
// element access (for testing, no bounds checking)
    Cluster &KMeans::operator[](unsigned int u)
    {
        
    }
    const Cluster &KMeans::operator[](unsigned int u) const
    {
        
    }
// write out the results to a file
    std::ostream &KMeans::operator<<(std::ostream &os, const KMeans &kmeans)
    {
        
    }
// clustering functions
    void KMeans::run()
    {
        
    }
