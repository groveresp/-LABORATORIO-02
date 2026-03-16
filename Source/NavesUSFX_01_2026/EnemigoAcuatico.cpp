#include "EnemigoAcuatico.h"

AEnemigoAcuatico::AEnemigoAcuatico()
{
	Velocidad = 200.0f;
	Amplitud = 100.0f;
	Tiempo = 0.0f;
}

void AEnemigoAcuatico::Move(float DeltaTime)
{
	Tiempo += DeltaTime;

	FVector Pos = GetActorLocation();

	Pos.X += Velocidad * DeltaTime;
	Pos.Y += FMath::Sin(Tiempo * 2) * Amplitud * DeltaTime;

	SetActorLocation(Pos);
}

