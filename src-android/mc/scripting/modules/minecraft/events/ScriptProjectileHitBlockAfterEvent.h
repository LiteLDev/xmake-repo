#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ScriptModuleMinecraft::ScriptBlockHitInformation> mBlockHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCNAPI ScriptProjectileHitBlockAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
