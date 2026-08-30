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
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class CommonModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonModuleFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonModuleFactory();

    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace Scripting
