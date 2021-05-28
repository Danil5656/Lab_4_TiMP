/**
* @file Cipher.h
* @author Соколов Д.А.
* @version 1.0
* @brief Описание класса Cipher
* @date 28.05.2021
* @copyright ИБСТ ПГУ
*/
#pragma once
#include "Exception.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
/// @brief Класс для шифрования и расшифрования шифра табличной маршрутной перестановки
class Cipher
{
private:
/// @brief атрибут хранящий ключ для шифрования или расшифрования
    int key;
public:
/// @brief Запрещающий конструктор без параметров
    Cipher() = delete;
    /// @brief Конструктор для ключа
    /**@param целочисленное число для ключа
    */
    Cipher(int k);
    /** @brief Метод , предназначенный для шифрования шифром табличной маршрутной перестановки
     *@param экземляр класса "Cipher", в котором установился ключ
     *@param std::wstring - строка, которую нужно зашифровать
     * @return зашифрованная строка типа "wstring"
     */
    wstring EncodeCipher(Cipher ob, wstring wstr);
    /** @brief Метод , предназначенный для расшифрования шифра табличной маршрутной перестановки
     *@param экземляр класса "Cipher", в котором установился ключ
     *@param std::wstring - строка, которую нужно расшифровать
     * @return расшифрованная строка типа "wstring"
     */
    wstring DecodeCipher(Cipher ob, wstring wstr);
};
