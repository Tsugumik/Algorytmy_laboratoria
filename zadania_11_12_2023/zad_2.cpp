#include "../zadania.h"
#include "../time_measure/Measure_specific.h"
#include "../time_measure/Save_results_to_file.h"

void zadania_11_12_2023::zad_2() {
    std::vector<unsigned int> limits = {10,20,30,50,75,100,200,300,400,500};

    std::string data_file;
    std::string results_path = "./time_measure/results";

    for(int i = (int)Sorting_algorithms::BUBBLE; i <= (int)Sorting_algorithms::MERGE; i++) {
        auto alg = (Sorting_algorithms)i;
        for(int j = (int)Sorting_mode::OPTIMISTIC; j <= (int)Sorting_mode::RANDOM; j++) {
            auto mode = (Sorting_mode)j;

            if(mode == Sorting_mode::OPTIMISTIC) {
                data_file = "./data/ascending500.txt";
            } else if(mode == Sorting_mode::PESIMISTIC) {
                data_file = "./data/descending500.txt";
            } else if(mode == Sorting_mode::RANDOM) {
                data_file = "./data/random500.txt";
            }

            auto result = Measure_specific(alg, limits, 5, data_file);
            Save_results_to_file(result, results_path, mode, alg);
        }

    }
}