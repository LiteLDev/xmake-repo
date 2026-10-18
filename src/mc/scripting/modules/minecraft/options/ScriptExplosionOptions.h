#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                   mSource;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mBreaksBlocks;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mCausesFire;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mAllowUnderwater;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::optional<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                                    mSource;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mBreaksBlocks;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mCausesFire;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mAllowUnderwater;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& ALLOW_UNDERWATER_DEFAULT();

    MCNAPI static bool const& BREAKS_BLOCKS_DEFAULT();

    MCNAPI static bool const& CAUSES_FIRE_DEFAULT();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
