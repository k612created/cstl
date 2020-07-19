/**
 * @Author: Sam Huang (@k612created)
 * @Twitter: @sammmmmmyh
 */

#ifndef CSTL_STRING_H
#define CSTL_STRING_H
#endif

#include <string.h>
#include <malloc.h>
#include <stdarg.h>

typedef unsigned long size_type;

typedef struct Basic_String {
    size_type capacity, length;
    char* c_str;
} string;

/**
 * To initialize a string without any argument, use nstring();
 * or else, use String(char *);
 */

string String(char * content) {
    string str = {0, 0, content};
    return str;
}

string nstring() {
    string str = {0, 0, NULL};
    return str;
}

// basic functions of std::basic_string
/**
 * All of the functions that have to do with changing the value of a string 
 * object will use a string pointer as the first argument.
 */

typedef unsigned int POLYMORPHISM_TYPE_WORD;

/**
 * assign() code changes in the first version of cstl/String.h
 * (reference: https://en.cppreference.com/w/cpp/string/basic_string/assign)
 * assign(string*, POLYMORPHISM_TYPE_WORD, ...)
 * (1): [
 * C++ Version: constexpr basic_string& assign(size_type count, charT ch) --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 1, size_type count, char* ch) (using stdargs: va_list)
 * ]
 * (2): [
 * C++ Version: constexpr basic_string& assign(const basic_string& str) --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 2, string* assignStr)
 * ]
 * (3): [
 * C++ Version: constexpr basic_string& assign(const basic_string& str, size_type pos, size_type count = npos) --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 3, string* assignStr, size_type pos, size_type count = npos)
 * ]
 * (4): [
 * C++ Version: constexpr basic_string& assign(basic_string&& str) noexcept() --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 4, string* assignStr)
 * ]
 * (5): [
 * C++ Version: constexpr basic_string& assign(const charT* s, size_type count) --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 5, char* s, size_type count)
 * ]
 * (6): [
 * C++ Version: constexpr basic_string& assign(const charT* s) --> C++2a
 * CSTL Version: void assign(string* str, POLYMORPHISM_TYPE_WORD ptw = 6, char* s)
 * ]
 * (7): [
 * C++ Version: {
 *  template<class InputIt>
 *  constexpr basic_string& assign(InputIt first, InputIt last)
 * } --> C++2a
 * CSTL Version: {
 *  /* Haven't done yet because you know, today (Jul 19, 2020) is not in our summer
 *     vacation.
 *     maybe I'll do it after Aug 8 this year.
 *     or maybe I'll do it in the summer vacation of 2021, who knows?
 *     Or, if you are a nice guy, I'm very glad if you
 *     write <cstl/iterator.h> in C for me :P
 *   *//*
 * }
 * ]
 */
