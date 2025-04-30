#include "UnrealPracticeEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FUnrealPracticeEditorModule, UnrealPracticeEditor)

void FUnrealPracticeEditorModule::StartupModule()
{
	// Check if editor is valid
	if (GUnrealEd)
	{
		// Register move visualizer
		TSharedPtr<FMoveComponentVisualizer> moveVisualizer = MakeShareable(new FMoveComponentVisualizer());

		if (moveVisualizer.IsValid())
		{
			GUnrealEd->RegisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName(), moveVisualizer);
			moveVisualizer->OnRegister();
		}
	}
}

void FUnrealPracticeEditorModule::ShutdownModule()
{
	// Check if editor is valid
	if (GUnrealEd)
	{
		GUnrealEd->UnregisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName());
	}
}
