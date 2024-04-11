#pragma once
#include <string>

class Actor
{
public:
	Actor() = default;
	Actor(std::string& name);

protected:


private:
	std::string mName;
};
