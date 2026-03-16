#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Enemigo.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigo : public AActor
{
    GENERATED_BODY()

public:
    AEnemigo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    virtual void Move(float DeltaTime);
};
