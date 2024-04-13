#pragma once

class IRender
{
public:
	virtual void Draw(const class Shader* shader = nullptr) const = 0;
};