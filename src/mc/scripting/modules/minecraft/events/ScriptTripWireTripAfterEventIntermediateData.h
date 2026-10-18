#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
struct TripWireTripEvent;
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorData; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTripWireTripAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                        mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                                   mPos;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPowered;
    ::ll::TypedStorage<8, 24, std::vector<std::optional<ScriptModuleMinecraft::ScriptActorData>>> mSources;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                              mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                                         mPos;
    ::ll::TypedStorage<1, 1, bool>                                                                      mIsPowered;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::optional<::ScriptModuleMinecraft::ScriptActorData>>> mSources;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTripWireTripAfterEventIntermediateData& operator=(ScriptTripWireTripAfterEventIntermediateData const&);
    ScriptTripWireTripAfterEventIntermediateData(ScriptTripWireTripAfterEventIntermediateData const&);
    ScriptTripWireTripAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
