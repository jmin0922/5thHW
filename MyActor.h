#pragma once

UCLASS()

class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()
private:
	FVector2D start;

public:
	AMYActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	void move();
	void step();
};
