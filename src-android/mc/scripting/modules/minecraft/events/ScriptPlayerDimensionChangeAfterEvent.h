#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>       mPlayerHandle;
    ::ll::UntypedStorage<8, 32>       mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mFromLocation;
    ::ll::UntypedStorage<8, 32>       mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mToLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerDimensionChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
