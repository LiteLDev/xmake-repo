#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptEntityRefType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                             mRef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                             mRef;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptEntityRefType> mActorType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                              mTypeId;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>                mLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                              mTypeId;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>>              mLevel;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptActorData(::Actor const&);
#else // @header-generator platform
    MCAPI explicit ScriptActorData(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>
    getActor(::Scripting::WeakLifetimeScope const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>
    getPlayer(::Scripting::WeakLifetimeScope const& scope) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>
    getPlayer(::Scripting::WeakLifetimeScope const&) const;

    MCNAPI ~ScriptActorData();
#else // @header-generator platform
    MCAPI ~ScriptActorData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& actor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
