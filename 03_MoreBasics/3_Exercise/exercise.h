#pragma once

namespace computation
{
// Exercise 1
double mean_array_value(int *array, const unsigned int &length);
double mean_array_value(double *array, const unsigned int &length);

// Exercise 2
struct Dataset
{
    double mean_array_int;
    double mean_array_double;
};

} // namespace computation
