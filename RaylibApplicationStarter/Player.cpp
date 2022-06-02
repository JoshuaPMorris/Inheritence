#include "Player.h"

#include <raylib.h>

#include "GameObjectManager.h"

#include "Bob.h"

void Player::Update(float _dt)
{
	position.x += (IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * 0.5f;
	position.y += (IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * 0.5f;

	if (IsKeyDown(KEY_SPACE))
	{
		gameObjectManager.AddObject(new Bob(position));
	}
}

void Player::Draw()
{
	DrawCircleV(position, 20, color);
}
