#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_Wall_Door_8x4_01_Steel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_Wall_Door_8x4_01_Steel.Desc_Wall_Door_8x4_01_Steel_C
// 0x0000 (0x0158 - 0x0158)
class UDesc_Wall_Door_8x4_01_Steel_C : public UFGBuildingDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Wall_Door_8x4_01_Steel.Desc_Wall_Door_8x4_01_Steel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
