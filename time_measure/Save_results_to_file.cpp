#include "Save_results_to_file.h"

void
Save_results_to_file(const std::vector<unsigned int> &results, const std::string &results_path, Sorting_mode sort_mode,
                     Sorting_algorithms algorithm) {
    std::string mode;
    std::string alg_name;

    if (sort_mode == Sorting_mode::OPTIMISTIC) {
        mode = "optimistic";
    } else if (sort_mode == Sorting_mode::RANDOM) {
        mode = "random";
    } else if (sort_mode == Sorting_mode::PESIMISTIC) {
        mode = "pesimistic";
    }

    if (algorithm == Sorting_algorithms::BUBBLE) {
        alg_name = "bubble";
    } else if (algorithm == Sorting_algorithms::INSERTION) {
        alg_name = "insertion";
    } else if (algorithm == Sorting_algorithms::SELECTION) {
        alg_name = "selection";
    } else if (algorithm == Sorting_algorithms::QUICK) {
        alg_name = "quick";
    } else if (algorithm == Sorting_algorithms::MERGE) {
        alg_name = "merge";
    }

    std::string file_name = "/" + alg_name + "_sort_" + mode + ".txt";

    std::fstream file(results_path + file_name, std::fstream::out);

    for (unsigned int i = 0; i < results.size(); i++) {
        file << results[i];

        // Dodaj nową linię po co piątej liczbie
        if ((i + 1) % 5 == 0 && i < results.size() - 1) {
            file << '\n';
        } else if (i < results.size() - 1) {
            file << '\t';
        }
    }

    file.close();
}
