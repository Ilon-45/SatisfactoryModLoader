#include "stdafx.h"
#include "HookLoader.h"
#include <functional>

namespace SML {
	/*template <auto O>
	void subscribe(typename HookLoader<decltype(O), O>::Handler handler) {
		HookLoader<decltype(O), O>::subscribe(handler);
	}*/

	//std::map<SML::Event, HookedFunction> HookLoader::cachedFunctions;

	//void HookLoader::cache(std::map<SML::Event, HookedFunction> array) {
	//	cachedFunctions = array;
	//	Utility::info("IN CACHE: ", cachedFunctions[Event::AFGCharacterPlayerBeginPlay].original);
	//}

	//void HookLoader::hookAll(HArray array) {
	//	array = std::map<Event, HookedFunction>();

	//	_subscribe<Event::AFGCharacterPlayerBeginPlay>(array, "AFGCharacterPlayer::BeginPlay");

	//	//Utility::info("IN HOOKALL: ", cachedFunctions[Event::AFGCharacterPlayerBeginPlay].original);
	//	//_subscribe<Event::AFGPlayerControllerBeginPlay, void>(array, "AFGPlayerController::BeginPlay");
	//}
}