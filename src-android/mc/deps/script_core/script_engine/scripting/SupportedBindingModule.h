#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

namespace Scripting {

struct SupportedBindingModule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            module;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> dependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedBindingModule& operator=(SupportedBindingModule const&);
    SupportedBindingModule(SupportedBindingModule const&);
    SupportedBindingModule();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SupportedBindingModule();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
