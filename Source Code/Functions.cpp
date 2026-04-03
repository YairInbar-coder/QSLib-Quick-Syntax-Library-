#include "pch.h"
#include "framework.h"
#include <iostream>
#include <random>
#include <string>

int randInt(int min, int max) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(min, max);
	return dist(gen);
}
float randFloat(float min, float max) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_real_distribution<float> dist(min, max);
	return dist(gen);
}
bool randBool() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::bernoulli_distribution dist(0.5);
	return dist(gen);
}
void getInt(int& in) {
	std::cin >> in;
}
void getStr(std::string& in) {
	getline(std::cin, in);
}
void getChar(char& in) {
	std::cin >> in;
}
void getFloat(float& in) {
	std::cin >> in;
}
