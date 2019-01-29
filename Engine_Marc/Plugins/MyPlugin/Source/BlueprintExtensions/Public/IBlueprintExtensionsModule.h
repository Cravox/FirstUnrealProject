#pragma once

#include <ModuleManager.h>

class IBlueprintExtensionsModule
	: public IModuleInterface
{
	//Singleton
	static inline IBlueprintExtensionsModule &Get() {
		return FModuleManager::LoadModuleChecked< IBlueprintExtensionsModule >("BlueprintExtensions");
	}

	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("BlueprintExtensions");
	}

	// Interface
	virtual bool PluginIsWorking() const = 0;
};