#pragma once
#include "Rectangle.h"
#include "Ring.h"

static class CollisionManager
{
public:
	static bool IsCollision(Rectangle& rectangleOne, Rectangle& rectangleTwo);
	static bool IsCollision(Ring& ringOne, Ring& ringTwo);
};