#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorAddEffectEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>            mActor;
    ::ll::TypedStorage<8, 24, std::string> mEffectType;
    ::ll::TypedStorage<4, 4, int>          mDuration;
    ::ll::TypedStorage<1, 1, bool>         mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptActorAddEffectBeforeEvent(::ActorAddEffectEvent&, ::Actor const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI void copyTo(::ActorAddEffectEvent&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAddEffectEvent&, ::Actor const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
