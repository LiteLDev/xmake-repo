#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>>  mMaxDistance;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mIgnoreBlockCollision;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mIncludePassableBlocks;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mIncludeLiquidBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>>  mMaxDistance;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mIgnoreBlockCollision;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mIncludePassableBlocks;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mIncludeLiquidBlocks;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
