// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipe.h"

#if WITH_EDITOR
void UFGRecipe::SetProduct(TSubclassOf< UFGRecipe > recipe, TArray< FItemAmount > product){ recipe.GetDefaultObject()->mProduct = product; }
#endif 
UFGRecipe::UFGRecipe(){ }
FText UFGRecipe::GetRecipeName(TSubclassOf< UFGRecipe > inClass){return inClass.GetDefaultObject()->mDisplayName;}
TArray< FItemAmount > UFGRecipe::GetIngredients(TSubclassOf< UFGRecipe > inClass){return inClass.GetDefaultObject()->mIngredients;}
TArray< FItemAmount > UFGRecipe::GetProducts(TSubclassOf< UFGRecipe > inClass, bool allowChildRecipes ){ return inClass.GetDefaultObject()->mProduct;}
float UFGRecipe::GetManufacturingDuration(TSubclassOf< UFGRecipe > inClass){ return inClass.GetDefaultObject()->mManufactoringDuration;}
float UFGRecipe::GetManualManufacturingDuration(TSubclassOf< UFGRecipe > inClass){ return inClass.GetDefaultObject()->mManualManufacturingMultiplier;}
TArray< TSubclassOf< UObject > > UFGRecipe::GetProducedIn(TSubclassOf< UFGRecipe > inClass) {return TArray<TSubclassOf<UObject> >(); }
bool UFGRecipe::IsRecipeAffordable( AFGCharacterPlayer* player, TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void UFGRecipe::SortByName(TArray< TSubclassOf< UFGRecipe > >& recipes){ }
TSubclassOf< class UFGItemDescriptor > UFGRecipe::GetDescriptorForRecipe(TSubclassOf<  UFGRecipe > recipe){ return TSubclassOf<class UFGItemDescriptor>(); }
FText UFGRecipe::GetDisplayName() const{ return FText(); }
void UFGRecipe::GetProducedIn(TArray< TSubclassOf< UObject > >& out_producedIn) const{ }
EHologramSplinePathMode UFGRecipe::GetLastSplineMode(){ return EHologramSplinePathMode(); }
void UFGRecipe::SetLastSplineMode(EHologramSplinePathMode mode){ }