#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace gametest { class GameTestRegistry; }
namespace mce { class UUID; }
// clang-format on

class ScriptGameTestModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::GameTestRegistry&> mGameTestRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestModuleFactory& operator=(ScriptGameTestModuleFactory const&);
    ScriptGameTestModuleFactory(ScriptGameTestModuleFactory const&);
    ScriptGameTestModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptGameTestModuleFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptGameTestModuleFactory(::gametest::GameTestRegistry&);

    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID getModuleUUID();
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
    MCNAPI void* $ctor(::gametest::GameTestRegistry&);
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
    // NOLINTEND
};
