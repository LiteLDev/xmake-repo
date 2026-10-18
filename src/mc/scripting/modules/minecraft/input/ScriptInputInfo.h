#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInputInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptInputInfo(::ScriptModuleMinecraft::ScriptActorData const&);
#else // @header-generator platform
    MCAPI explicit ScriptInputInfo(::ScriptModuleMinecraft::ScriptActorData const& playerData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<InputMode, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::InputMode, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
#endif // @header-generator platform
    getLastInputModeUsed() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isHotbarOnlyTouch() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> isHotbarOnlyTouch() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updatePlayerData(::ScriptModuleMinecraft::ScriptActorData const&);
#else // @header-generator platform
    MCAPI void updatePlayerData(::ScriptModuleMinecraft::ScriptActorData const& playerData);
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
