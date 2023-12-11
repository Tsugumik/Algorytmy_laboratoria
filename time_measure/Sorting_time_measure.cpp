#include "Sorting_time_measure.h"

std::vector<unsigned int>
Sorting_time_measure(const std::string &data_file_path, unsigned int bufor_size, unsigned int replies,
                     Sorting_algorithms algorithm) {

    std::string name;

    // Ładowanie danych
    std::fstream data_file(data_file_path, std::fstream::in);

    auto* arr = new int[bufor_size];
    std::vector<unsigned int> results(replies);

    std::cout << "[LOG]: " << "Loading data from file: " << data_file_path << std::endl;

    // Wczytywanie żądanej ilości liczb do bufora
    if(data_file.good()) {
        int i = 0, num = 0;
        while((data_file >> num) && i < bufor_size) {
            arr[i] = num;
            i++;
        }
    } else {
        std::cout << "[LOG]: " << "Loading terminated" << std::endl;
        delete[] arr;
        return std::vector<unsigned int>(0);
    }

    std::cout << "[LOG]: " << "Loading completed successfully" << std::endl;
    data_file.close();


    std::cout << "[LOG]: " << "Sorting started (replies = " << replies << ")" << std::endl;

    // Wykonywanie sortowania dla danego algorytmu

    for(int i = 0; i < replies; i++) {
        // Tworzenie nowej kopii tablicy za każdym razem
        int* tmp_arr = new int[bufor_size];

        for(int j=0; j < bufor_size; j++) {
            tmp_arr[j] = arr[j];
        }

        std::chrono::time_point<std::chrono::steady_clock> start_time = std::chrono::steady_clock::now();

        if(algorithm == Sorting_algorithms::BUBBLE) {
            name = "bubble_sort";
            Sorting::Bubble_sort(tmp_arr, bufor_size);
        } else if(algorithm == Sorting_algorithms::INSERTION) {
            name = "insertion_sort";
            Sorting::Insertion_sort(tmp_arr, bufor_size);
        } else if(algorithm == Sorting_algorithms::SELECTION) {
            name = "selection_sort";
            Sorting::Selection_sort(tmp_arr, bufor_size);
        } else if(algorithm == Sorting_algorithms::QUICK) {
            name = "quick_sort";
            Sorting::Quick_sort(tmp_arr,0, (int)bufor_size-1);
        } else if(algorithm == Sorting_algorithms::MERGE) {
            name = "merge_sort";
            Sorting::Merge_sort(tmp_arr, bufor_size);
        }

        std::chrono::time_point<std::chrono::steady_clock> end_time = std::chrono::steady_clock::now();

        delete[] tmp_arr;


        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time-start_time);

        std::cout << "[LOG]: " << "Sorting [#" << i + 1 << "] for " << name;
        std::cout << " with data from file " << data_file_path;
        std::cout << " limited to " << bufor_size << " elements";
        std::cout << " completed after " << duration.count() << " nanoseconds" << std::endl;

        results[i] = duration.count();
    }

    delete[] arr;

    return results;
}
