// Define the STATSCALCULATOR_H macro to act as an include guard
#ifndef STATSCALCULATOR_H
#define STATSCALCULATOR_H

// Include the <vector> header to provide the STL std::vector type.
#include <vector>

// Include the <string> header to provide the STL std::vector type.
#include <string>

/* @@ DOXYGEN The StatsCalculator class reads a list of whitespace-separated numeric
 * values from a text file. It stores those values internally and supplies
 * methods to compute and return several statistical properties of those
 * numbers.
 *
 * It provides a method that prints a summary of the statistical properties
 * of its internally stored numbers to the terminal and another method that
 * writes a similar summary to a textual output file.
 */
class StatsCalculator {
    
    /* @@ DOXYGEN An STL vector of double precision values to store parsed numeric
     * values.
     */
    std::vector<double> numericValues;
    
    /* @@ DOXYGEN Private method that actually computes the sum of the stored numeric
     * values.
     */
    double computeSum();
    
    /** \brief Private method that actually computes the mean of the stored numeric
     * values.
     */
    double computeMean();
    
    /** \brief Private method that actually computes the standard deviation of the
     * stored numeric values.
     */
    double computeStandardDeviation();
    
public:
    
    /** \brief Default constructor.
     */
    StatsCalculator();
    
    /** \brief Destructor.
     */
    ~StatsCalculator();
    
    /** \brief Public method returns the sum of the internally stored numeric values.
     */
    double getSum();
    
    /** \brief Public method returns the mean of the internally stored numeric values.
     */
    double getMean();
    
    /** \brief Public method returns the standard deviation of the internally stored
     * numeric values.
     */
    double getStandardDeviation();
    
    /** \brief Public method that reads a list of whitespace-separated numeric
     * values from a text file. It appends those values to the "numericValues"
     * member datum.
     *
     * Requires one argument:
     * \param infileName - A string specifying to the path of a text file containing
     *    a whitespace-separated list of numeric values.
     */
    void readFile(const std::string & infileName);
    
    /** \brief Public method that prints a summary of the statistical properties that this
     * class computes to the terminal.
     */
    void printStats();
    
    /* @@ DOXYGEN Public method that writes a summary of the statistical properties that this
     * class computes to a caller-specified output file.
     *
     * Requires one argument:
     * @@ DOXYGEN 1) outfileName - A string specifying to the path for a text file to which
     * the statistics summary should be written.
     */
    void writeStats(const std::string & outfileName);
    
};

#endif /* End #ifndef STATSCALCULATOR_H preprocessor conditional block. */
