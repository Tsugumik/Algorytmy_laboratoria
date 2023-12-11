#include "Measure_specific.h"

std::vector<unsigned int>
Measure_specific(Sorting_algorithms algorithm, const std::vector<unsigned int> &limits, unsigned int replies_per_limit,
                 const std::string &data_file) {
    std::vector<unsigned int> results;

    for(const unsigned int& limit : limits) {
        auto result = Sorting_time_measure(data_file, limit, replies_per_limit, algorithm);

        results.insert(results.end(), result.begin(), result.end());
    }

    return results;
}
