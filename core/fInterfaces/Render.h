#pragma once

class IRender
{
public:
	virtual void Draw(Shader* shader = nullptr) const = 0;
};