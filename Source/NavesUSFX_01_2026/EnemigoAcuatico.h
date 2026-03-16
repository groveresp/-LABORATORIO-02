#pragma once
#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuatico.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigoAcuatico : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoAcuatico();

protected:
	virtual void Move(float DeltaTime) override;

	float Velocidad;
	float Amplitud;
	float Tiempo;
};
