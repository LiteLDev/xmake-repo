#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                   mSource;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mBreaksBlocks;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mCausesFire;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mAllowUnderwater;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& ALLOW_UNDERWATER_DEFAULT();

    MCNAPI static bool const& BREAKS_BLOCKS_DEFAULT();

    MCNAPI static bool const& CAUSES_FIRE_DEFAULT();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
