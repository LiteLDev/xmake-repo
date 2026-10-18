#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class FogCommandComponent;
class Player;
namespace ScriptModuleMinecraft { struct ScriptFogSettingsError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFogSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFogSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptFogSettings(::Player const&);

    MCNAPI explicit ScriptFogSettings(::WeakEntityRef const&);

    MCNAPI ::FogCommandComponent* _getFogComponent() const;

    MCNAPI void _sendFogUpdatePacket() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getStack() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getTags() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&);

    MCNAPI void* $ctor(::WeakEntityRef const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
