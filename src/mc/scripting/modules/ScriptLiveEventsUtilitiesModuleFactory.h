#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class ScriptLiveEventsUtilitiesModuleFactory : public ::Scripting::GenericModuleBindingFactory {
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
