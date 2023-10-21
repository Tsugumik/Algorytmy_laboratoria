#pragma once

int NWD(int, int);
int NWW(int, int);
int Sum_of_digits(int);

namespace Array_tools {
    int Max(const int arr[], int size);
    int Min(const int arr[], int size);
    int Val_dispersion(const int arr[], int size);
    double Avg(const int arr[], int size);
    double Avg(const double arr[], int size);
    int Sum(const int arr[], int size);
    double Sum(const double arr[], int size);
    double Standard_deviation(const int arr[], int size);
    double Variance(const int arr[], int size);
    int Get_n_element(const int arr[], int n);
    int Count_divisible_by_3(const int arr[], int size);
}