
/**
 * @file math_ops.h
 * @brief Header file containing basic mathematical operations.
 *
 * This file demonstrates Doxygen documentation
 * comments for C++ functions.
 */

#ifndef MATH_OPS_H
#define MATH_OPS_H

#include <stdexcept>

namespace math_ops {

/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of the two numbers.
 */
inline double add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts the second number from the first.
 * @param a First number.
 * @param b Second number.
 * @return Difference between the numbers.
 */
inline double subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Product of the two numbers.
 */
inline double multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides the first number by the second.
 * @param a Numerator.
 * @param b Denominator (must not be zero).
 * @return Quotient of the division.
 * @throws std::invalid_argument if the denominator is zero.
 */
inline double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

} // namespace math_ops

#endif
