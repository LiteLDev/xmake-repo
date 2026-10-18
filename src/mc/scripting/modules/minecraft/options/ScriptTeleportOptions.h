#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptDimension.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptDimension; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTeleportOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                    mDimension;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mRotation;
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mKeepVelocity;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mFacingLocation;
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mCheckForBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>>
                                                       mDimension;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mRotation;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mKeepVelocity;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mFacingLocation;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mCheckForBlocks;
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
