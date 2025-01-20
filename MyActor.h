#include "MyActor.h"

AMyActor::AMYActor()
{
	PrimaryActorTick.bCanEverTick = true;
	start = FVector2D(0, 0);

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	move();
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMyActor::step()
{
	returen FMath::RandRange(0, 1);

}

void AMyActor::move()
{
	for (int32 i = 0; i < 10; i++)
	{
		start.X = start.X + step();
		start.Y = start.Y + step();
		UE_LOG(logTemp, Warning, TEXT("move %d : X = %f, Y = %f"), i + 1, start.X, start.Y);
	}
}
