// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


class UCameraComponent;
class USpringArmComponent;
#include "RollaBallPlayer.generated.h"


UCLASS()


class BALLRUNNER_API ARollaBallPlayer : public APawn
{
	GENERATED_BODY()



public:
	// Sets default values for this pawn's properties
	ARollaBallPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Definte Componets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UCameraComponent* Camera;

	//variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveForce = 500.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float JumpImpulse = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MaxJumpCount = 1;
	
	


public:	

	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	//Funtion
	void MoveRight(float Value);
	void MoveForward(float Value);
	void Jump();

	int32 JumpCount = 0;
};



