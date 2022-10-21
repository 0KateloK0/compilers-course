#include <iostream>
#include "catch.hpp"

TEST_CASE("Lexer works", "[lexer]") {
    "";
}

TEST_CASE("Numbers work", "[lexer]") {
    "1";
    "2345";
    "0123";
    "9870";
}

TEST_CASE("One-symbol math operations work", "[lexer]") {
    "1+2";
    "1-2";
    "1*2";
    "1/2";
    "1%2";
}

TEST_CASE("Multi-symbol math operations work", "[lexer]") {
    "1 ** 2";
}

TEST_CASE("Braces work", "[lexer]") {
    "1+(2+2)";
    "{}";
}

TEST_CASE("Variables work", "[lexer]") {
    "a";
    "fu";
    "func";
    "a_b";
}

TEST_CASE("Assignment works", "[lexer]") {
    "var a = 1";
}

TEST_CASE("Comparison operators work", "[lexer]") {
    "a < b";
    "a <= b";
    "a == b";
}

TEST_CASE("Statements work", "[lexer]") {
    "var";
    "fun";
    "if";
}

TEST_CASE("Terminals work", "[lexer]") {
    "a+1*(s+2)";
    "a-a";
}

TEST_CASE("Multi-line and spaced code work", "[lexer]") {
    "a   \n + b";
}

TEST_CASE("Semicolon works", "[lexer]") {
    "a+b;b+a";
}