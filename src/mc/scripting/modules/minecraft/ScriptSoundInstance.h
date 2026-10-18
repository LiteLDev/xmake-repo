#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptSoundDurationInfo.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerSoundInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptSoundDurationInfo; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ArgumentOutOfBoundsError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerSoundInstance>> mSoundInstance;
    ::ll::UntypedStorage<8, 40>                                     mRecipient;
    ::ll::UntypedStorage<8, 40>                                     mDurationInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerSoundInstance>> mSoundInstance;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
        mRecipient;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSoundDurationInfo>>>
        mDurationInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSoundInstance(
        ::ServerSoundInstance,
        ::Scripting::WeakLifetimeScope,
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
#else // @header-generator platform
    MCAPI ScriptSoundInstance(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCAPI ScriptSoundInstance(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance&&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance const&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pause();
#else // @header-generator platform
    MCAPI void setPitch(float pitch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resume();

    MCNAPI void setPitch(float);

    MCNAPI void setVolume(float);

    MCNAPI void stop();
#else // @header-generator platform
    MCAPI void setVolume(float volume);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ServerSoundInstance,
        ::Scripting::WeakLifetimeScope,
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCAPI void* $ctor(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
