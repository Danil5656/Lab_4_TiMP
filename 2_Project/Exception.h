/**
* @file Exception.h
* @author Соколов Д.А.
* @version 1.0
* @brief Описание класса Error
* @date 28.05.2021
* @copyright ИБСТ ПГУ
*/
#pragma once
#include <stdexcept>
#include <string>
using namespace std;
/// @brief  Класс для обработки ошибок, которые могут возникнуть при взаимодействии с программой
/// @details Класс наследует существующий класс обработки исключений с именем "invalid_argument" из библиотеки "
class Error : public invalid_argument
{
public:
/// @brief Метод, проверяющий строку для шифрования/расшифрования на наличие ошибки
    static int Check_s(string str);
    /// @brief Метод, проверяющий ключ для шифрования/расшифрования на наличие ошибок
    static int Check_k(wstring str, string sKey);
    /// @brief Конструктор с параметром
/// @details Перегружается вызовом конструктора базового класса 
    Error (const string error) : invalid_argument(error) {};
    /// @brief Запрещающий конструктор без параметров
    Error ()=delete;
};
