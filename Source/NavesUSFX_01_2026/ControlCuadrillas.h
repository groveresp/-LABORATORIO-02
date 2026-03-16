#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h" 
#include "ControlCuadrillas.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AControlCuadrillas : public AEnemigo
{
	GENERATED_BODY()

public:
	AControlCuadrillas();

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Category = "Configuracion")
	TArray<TSubclassOf<AEnemigo>> ClasesEnemigos;

	UPROPERTY()
	TArray<AActor*> Cuadrilla1;

	UPROPERTY()
	TArray<AActor*> Cuadrilla2;

	FTimerHandle TimerFase;


	void SpawnCuadrilla1();
	void DesvanecerYRelevo();
	void SpawnCuadrilla2();
};
