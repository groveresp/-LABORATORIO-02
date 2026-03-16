#pragma once
#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoAereo();

protected:
	virtual void Move(float DeltaTime) override;

	float Velocidad;
	float Amplitud;
	float Tiempo;
};
