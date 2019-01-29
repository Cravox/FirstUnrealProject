#pragma once

#include "IBlueprintExtensionsModule.h"

class FBlueprintExtensionsModule : public IBlueprintExtensionsModule
{
public: 
	//IModuleInterface pure virtual method impl
	void StartUpModule();
	void ShutdownModule();

	//IBlueprintExtensionsModule pure virtual method ipl
	bool PluginIsWorking() const;
};