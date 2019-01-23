#pragma once
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

void Trim(std::string& s);

void Split(const std::string& line, std::vector<std::string>& pieces, const std::string del=" ");

std::string Join(const std::vector<std::string>& words, const std::string del=" ");
