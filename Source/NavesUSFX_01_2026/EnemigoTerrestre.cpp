#include "EnemigoTerrestre.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
	Velocidad = 200.0f;
	Amplitud = 100.0f;
	Tiempo = 0.0f;
}

void AEnemigoTerrestre::Move(float DeltaTime)
{
	Tiempo += DeltaTime;

	FVector Pos = GetActorLocation();

	Pos.X += Velocidad * DeltaTime;
	Pos.Y += FMath::Sin(Tiempo * 4) * Amplitud * DeltaTime;

	SetActorLocation(Pos);
}

