#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptJigsawStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>                         mIgnoreStartHeight;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                         mKeepJigsaws;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                         mIncludeEntities;
    ::ll::TypedStorage<1, 2, std::optional<br::worldgen::LiquidSettings>> mLiquidSettings;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                           mIgnoreStartHeight;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                           mKeepJigsaws;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                           mIncludeEntities;
    ::ll::TypedStorage<1, 2, ::std::optional<::br::worldgen::LiquidSettings>> mLiquidSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
