#include "BlueprintExtensionsModule.h"
#include <BlueprintExtensionsPCH.h>


void FBlueprintExtensionsModule::StartUpModule()
{

}

void FBlueprintExtensionsModule::ShutdownModule()
{

}

bool FBlueprintExtensionsModule::PluginIsWorking() const
{
	return true;
}

IMPLEMENT_MODULE(FBlueprintExtensionsModule, BlueprintExtensions);
DEFINE_LOG_CATEGORY(LogBlueprintExtensions);