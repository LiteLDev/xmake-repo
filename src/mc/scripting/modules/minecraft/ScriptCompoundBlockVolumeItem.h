#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptSimpleBlockVolume.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundBlockVolumeItem;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                    mVolume;
    ::ll::TypedStorage<4, 8, std::optional<CompoundBlockVolumePositionRelativity>> mRelativity;
    ::ll::TypedStorage<4, 8, std::optional<CompoundBlockVolumeAction>>             mAction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptSimpleBlockVolume>        mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<::CompoundBlockVolumePositionRelativity>> mRelativity;
    ::ll::TypedStorage<4, 8, ::std::optional<::CompoundBlockVolumeAction>>             mAction;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindInterface();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
