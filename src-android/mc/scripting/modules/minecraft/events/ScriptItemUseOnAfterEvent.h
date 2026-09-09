#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>       mSource;
    ::ll::TypedStorage<1, 1, bool>    mIsFirstEvent;
    ::ll::TypedStorage<4, 12, ::Vec3> mBlockPositionV010;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ScriptItemUseOnAfterEvent(
        ::ItemUseOnEvent const&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        ::Player const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI void* $ctor(
        ::ItemUseOnEvent const&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        ::Player const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
