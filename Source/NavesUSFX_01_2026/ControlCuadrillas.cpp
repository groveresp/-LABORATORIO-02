#include "ControlCuadrillas.h"
#include "Enemigo.h"

AControlCuadrillas::AControlCuadrillas()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AControlCuadrillas::BeginPlay()
{
	Super::BeginPlay();

	SpawnCuadrilla1();

	GetWorld()->GetTimerManager().SetTimer(
		TimerFase,
		this,
		&AControlCuadrillas::DesvanecerYRelevo,
		10.0f,
		false
	);
}

void AControlCuadrillas::SpawnCuadrilla1()
{
	if (ClasesEnemigos.Num() == 0) return;

	int32 Mitad = ClasesEnemigos.Num() / 2;

	for (int32 i = 0; i < Mitad; i++)
	{
		if (ClasesEnemigos[i])
		{
			FVector Pos = GetActorLocation() + FVector(i * 300.0f, 0, 0);
			AEnemigo* Enemigo = GetWorld()->SpawnActor<AEnemigo>(ClasesEnemigos[i], Pos, FRotator::ZeroRotator);
			Cuadrilla1.Add(Enemigo);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Cuadrilla 1 desplegada."));
}

void AControlCuadrillas::DesvanecerYRelevo()
{

	for (AActor* Enemigo : Cuadrilla1)
	{
		if (Enemigo && Enemigo->IsValidLowLevel())
		{
			Enemigo->Destroy();
		}
	}
	Cuadrilla1.Empty();

	UE_LOG(LogTemp, Warning, TEXT("Cuadrilla 1 eliminada. Iniciando Cuadrilla 2..."));

	SpawnCuadrilla2();
}

void AControlCuadrillas::SpawnCuadrilla2()
{
	int32 Mitad = ClasesEnemigos.Num() / 2;

	for (int32 i = Mitad; i < ClasesEnemigos.Num(); i++)
	{
		if (ClasesEnemigos[i])
		{
			FVector Pos = GetActorLocation() + FVector((i - Mitad) * 300.0f, 1000.0f, 0);
			AEnemigo* Enemigo = GetWorld()->SpawnActor<AEnemigo>(ClasesEnemigos[i], Pos, FRotator::ZeroRotator);
			Cuadrilla2.Add(Enemigo);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Cuadrilla 2 desplegada."));
}

