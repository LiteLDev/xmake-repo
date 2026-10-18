#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptPlayerAimAssistSettings; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerAimAssist {
public:
    // ScriptPlayerAimAssist inner types define
    using SetMethodResultType = ::Scripting::Result<
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptNamespaceNameError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::Error>;
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::Error>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlayerAimAssist();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> _getAimAssistSettings() const;
#else // @header-generator platform
    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> _getAimAssistSettings() const;
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
};

} // namespace ScriptModuleMinecraft
