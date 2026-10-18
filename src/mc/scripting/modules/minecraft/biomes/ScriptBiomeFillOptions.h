#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/biomes/ScriptBiomeFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBiomeFillOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mIncludeContainedPositions;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mIncludePositionsAbove;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mIncludePositionsBelow;
    ::ll::TypedStorage<8, 120, std::optional<ScriptModuleMinecraft::ScriptBiomeFilter>> mBiomeFilter;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                         mIncludeContainedPositions;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                         mIncludePositionsAbove;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                         mIncludePositionsBelow;
    ::ll::TypedStorage<8, 120, ::std::optional<::ScriptModuleMinecraft::ScriptBiomeFilter>> mBiomeFilter;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
