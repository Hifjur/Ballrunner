// Fill out your copyright notice in the Description page of Project Settings.


#include "RollaBallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ARollaBallPlayer::ARollaBallPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Create Components - before this step they wont exist on our actor, they've only been defined.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	//set the root to Component
	RootComponent = Mesh;

	//Attach Spring Component to the mesh, spring will now follow the mesh
	SpringArm->SetupAttachment(Mesh);

	//Attach the camera to the spring arm, camera will now follow the SpringArm transform
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ARollaBallPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called to bind functionality to input
void ARollaBallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARollaBallPlayer::MoveRight(float Value) {

}
void ARollaBallPlayer::MoveForward(float Value) {

}
void ARollaBallPlayer::Jump() {

}


