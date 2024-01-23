#pragma once

enum class StructureType {
    STACK,
    QUEUE,
    VECTOR
};

/**
 * @brief Interfejs reprezentujący ogólną strukturę danych.
 *
 * @tparam T Typ przechowywanych elementów.
 */
template<typename T>
class IDataStructure {
public:
    virtual ~IDataStructure() = default;

    /**
     * @brief Dodaje nowy element do struktury danych.
     *
     * @param element Element do dodania.
     */
    virtual void add(const T &element) = 0;

    /**
     * @brief Usuwa i zwraca ostatni element ze struktury danych.
     *
     * @return Usunięty element.
     */
    virtual T pop() = 0;

    /**
     * @brief Zwraca referencję do pierwszego elementu w strukturze danych.
     *
     * @return Referencja do pierwszego elementu.
     */
    virtual T &first() = 0;

    /**
     * @brief Zwraca referencję do ostatniego elementu w strukturze danych.
     *
     * @return Referencja do ostatniego elementu.
     */
    virtual T &last() = 0;

    /**
     * @brief Zwraca referencję do n-tego elementu w strukturze danych.
     *
     * @param n Indeks elementu.
     * @return Referencja do n-tego elementu.
     */
    virtual T &getN(unsigned int n) = 0;

    /**
     * @brief Sprawdza, czy dany element istnieje w strukturze danych.
     *
     * @param element Element do znalezienia.
     * @return true, jeśli element istnieje, false w przeciwnym razie.
     */
    virtual bool find(const T &element) = 0;

    /**
     * @brief Zwraca liczbę elementów w strukturze danych.
     *
     * @return Liczba elementów w strukturze.
     */
    virtual unsigned int size() = 0;

    /**
     * @brief Sprawdza, czy struktura danych jest pusta.
     *
     * @return true, jeśli struktura jest pusta, false w przeciwnym razie.
     */
    virtual bool isEmpty() = 0;

    /**
     * @brief Zwraca typ struktury danych.
     *
     * @return Typ struktury danych.
     */
    virtual StructureType getType() const = 0;
};