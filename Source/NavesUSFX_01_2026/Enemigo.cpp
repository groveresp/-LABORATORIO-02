#include "Enemigo.h"

AEnemigo::AEnemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CuboMesh.Succeeded())
    {
        Mesh->SetStaticMesh(CuboMesh.Object);
    }
    Mesh->SetWorldScale3D(FVector(1.5f));
}

void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Move(DeltaTime);
}

void AEnemigo::Move(float DeltaTime)
{
}


