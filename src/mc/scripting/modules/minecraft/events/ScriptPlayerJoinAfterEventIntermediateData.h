#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 24, std::string>                              mPlayerName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPlayerName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEventIntermediateData();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerJoinAfterEventIntermediateData(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
