#pragma once

#include "IGameObject.h"

class Bob : public IGameObject
{
public:
	Bob(Vector2 _position) : IGameObject(_position, Vector2{ 0, 0 }, nullptr)
	{
		color = GREEN;
	}

	virtual void Update(float _dt) override;
	virtual void Draw() override;
};

