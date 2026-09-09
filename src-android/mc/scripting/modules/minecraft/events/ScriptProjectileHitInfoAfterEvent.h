#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>       mDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3> mHitVector;
    ::ll::TypedStorage<4, 12, ::Vec3> mSurfaceHitNormal;
    ::ll::UntypedStorage<8, 40>       mSource;
    ::ll::UntypedStorage<8, 32>       mProjectile;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitInfoAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectileHitInfoAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ~ScriptProjectileHitInfoAfterEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
