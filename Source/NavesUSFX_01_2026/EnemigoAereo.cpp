#include "EnemigoAereo.h"

AEnemigoAereo::AEnemigoAereo()
{
	Velocidad = 200.0f;
	Amplitud = 100.0f;
	Tiempo = 0.0f;
}

void AEnemigoAereo::Move(float DeltaTime)
{
	Tiempo += DeltaTime;

	FVector Pos = GetActorLocation();

	Pos.X += Velocidad * DeltaTime;
	Pos.Z += FMath::Sin(Tiempo * 2) * Amplitud * DeltaTime;

	SetActorLocation(Pos);
}

