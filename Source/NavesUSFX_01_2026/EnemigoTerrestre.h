#pragma once
#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre();

protected:
	virtual void Move(float DeltaTime) override;

	float Velocidad;
	float Amplitud;
	float Tiempo;
};
