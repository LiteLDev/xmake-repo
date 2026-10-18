#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class ScriptServerGraphicsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mServerLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkfdad11;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptServerGraphicsModuleFactory& operator=(ScriptServerGraphicsModuleFactory const&);
    ScriptServerGraphicsModuleFactory(ScriptServerGraphicsModuleFactory const&);
#endif // @header-generator platform
    ScriptServerGraphicsModuleFactory();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerGraphicsModuleFactory();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptServerGraphicsModuleFactory(::ServerLevel*);
#else // @header-generator platform
    MCNAPI explicit ScriptServerGraphicsModuleFactory(::ServerLevel* serverLevel);
#endif // @header-generator platform

    MCNAPI void _addVersions();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&  moduleBuilder,
        bool                                allowUntagged,
        ::std::vector<::std::string> const& allowedTags
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerLevel*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerLevel* serverLevel);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
