// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LD38.h"
#include "LD38GameMode.h"
#include "LD38Pawn.h"

ALD38GameMode::ALD38GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ALD38Pawn::StaticClass();
}
