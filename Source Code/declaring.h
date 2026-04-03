#pragma once
#include <string>
#include <iostream>

namespace qs {
	template<typename... Args>
	void print(Args... args) {
		(std::cout << ... << args);
	}
	template<typename... Args>
	void println(Args... args) {
		(std::cout << ... << args);
		std::cout << '\n';
	}
	int randInt(int min, int max);
	float randFloat(float min, float max);
	bool randBool();
	void getInt(int& in);
	void getStr(std::string& in);
	void getChar(char& in);
	void getFloat(float& in);
	template <typename var>
	int toInt(var& in) {
		return ToInt(in);
	}
	template <typename var>
	std::string toStr(var& in) {
		return std::to_string(in);
	}
	template <typename var>
	char toChar(var& in) {
		return ToChar(in);
	}
	template <typename var>
	float toFloat(var& in) {
		return ToFloat(in);
	}
}