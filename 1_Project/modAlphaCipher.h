/**
* @file modAlphaCipher.h
* @author Соколов Д.А.
* @version 1.0
* @brief Описание класса modAlphaCipher
* @date 28.05.2021
* @copyright ИБСТ ПГУ
*/
#pragma once
#include "Exception.h"
#include <vector>
#include <string>
#include <map>
#include <locale>
using namespace std;
/**  @brief  Класс, который реализует шифрование сообщений методом "Гронсвельда"
*    @warning Работает только с русскоязычными сообщениями!
* */
class modAlphaCipher
{
private:
/// @brief  Используемый алфавит 
    wstring numAlpha =L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    /// @brief  Ассоциативный массив "номер по символу"
    map <char,int> alphaNum;
/// @brief  Атрибут для ключа
    vector <int> key;
    /** @brief  Конвертация строки в вектор типа "int"
    * @return std::vector <int>, в котором хранятся индексы букв сообщения из алфавита "numAlpha"
    */
    vector<int> convert(const wstring& s);
    /** @brief Конвертация вектора типа "int" в строку 
    * @return строка текста типа "wstring"
    */
    wstring convert(const vector<int>& v);
    /** @brief  Валидация ключа
     * @throw Error, если ключ является пустым или в нём присутствуют недопустимые символы
     * @return Ключ в виде строки типа "wstring", который успешно прошёл валидацию
     */
    wstring getValidKey(const wstring & s);
    /** @brief  Валидация текста при шифровании/расшифровании
    * @throw Error, если текст является пустым или в нём присутствуют недопустимые символы.
    * @return Текст в виде строки типа "wstring", который успешно прошёл валидацию
    */
    wstring getValid_Str(const wstring & s);
public:
/// @brief Запрещающий конструктор без параметров
    modAlphaCipher()=delete;
    /** @brief  Конструктор для ключа
     *  @param skey - ключ в виде строки 
     */
    modAlphaCipher(const wstring& skey);
    /**
     * @brief Метод, предназначенный для шифрования
     * @param std::wstring open_text - сообщение, которое нужно зашифровать
     * @throw Error , если строка, которая пришла на вход оказывается пустой или в ней есть недопустимые символы
     * @return строка шифротекста типа "wstring"
     */
    wstring encrypt(const wstring& open_text);
    /**
    * @brief Метод, предназначенный для расшифрования
    * @param std::wstring cipher_text - сообщение, которое нужно расшифровать
    * @throw Error , если строка, которая пришла на вход оказывается пустой или в ней есть недопустимые символы
    * @return  строка расшифрованного текста типа "wstring"
    */
    wstring decrypt(const wstring& cipher_text);
};
