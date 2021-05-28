/**
* @file exception.h
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
class Error : public invalid_argument
{    
public:
/// @brief Конструктор с параметром
/// @details Перегружается вызовом конструктора базового класса 
    Error (const string error):invalid_argument(error){};
};