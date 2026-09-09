#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptSoundDurationInfo.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundInstance;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerSoundInstance>> mSoundInstance;
    ::ll::UntypedStorage<8, 40>                                     mRecipient;
    ::ll::UntypedStorage<8, 40>                                     mDurationInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSoundInstance(
        ::ServerSoundInstance,
        ::Scripting::WeakLifetimeScope,
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void setPitch(float);

    MCNAPI void setVolume(float);

    MCNAPI void stop();
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
        ::ServerSoundInstance,
        ::Scripting::WeakLifetimeScope,
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
