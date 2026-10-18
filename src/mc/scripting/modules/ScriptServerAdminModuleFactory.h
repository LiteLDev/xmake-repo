#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDedicatedServerUtils;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
class ScriptPackConfigurationManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IScriptDedicatedServerUtils;
#endif // @header-generator platform
// clang-format on

class ScriptServerAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPackConfigurationManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk81b286;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptServerAdminModuleFactory& operator=(ScriptServerAdminModuleFactory const&);
    ScriptServerAdminModuleFactory(ScriptServerAdminModuleFactory const&);
#endif // @header-generator platform
    ScriptServerAdminModuleFactory();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerAdminModuleFactory();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerAdminModuleFactory(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>,
        ::Level*,
        ::IScriptDedicatedServerUtils*
#else // @header-generator platform
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Level*                                                     level,
        ::IScriptDedicatedServerUtils*                               dedicatedServerUtils
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void _addVersions(::Level*, ::IScriptDedicatedServerUtils*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& ModuleName();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>, ::Level*, ::IScriptDedicatedServerUtils*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Level*                                                     level,
        ::IScriptDedicatedServerUtils*                               dedicatedServerUtils
    );
#endif // @header-generator platform
    // NOLINTEND
};
