#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDedicatedServerUtils;
class ServerLevel;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftRealmsAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel*>                 mLevel;
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils*> mDedicatedServerUtils;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkbe3fe5;
    ::ll::UntypedStorage<8, 8> mUnk43c8e9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptMinecraftRealmsAdminModuleFactory& operator=(ScriptMinecraftRealmsAdminModuleFactory const&);
    ScriptMinecraftRealmsAdminModuleFactory(ScriptMinecraftRealmsAdminModuleFactory const&);
#endif // @header-generator platform
    ScriptMinecraftRealmsAdminModuleFactory();

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& ModuleName();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND
};
