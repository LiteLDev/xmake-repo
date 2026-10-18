#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
struct ActorAddEffectEvent;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mEffectType;
    ::ll::TypedStorage<4, 4, int>                                                                         mDuration;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAddEffectEvent&, ::Actor const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
