#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::reference_wrapper<ServerLevel>> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPropertyRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPropertyRegistry(::ServerLevel&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ServerLevel>> mLevel;
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
    MCNAPI void* $ctor(::ServerLevel&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
