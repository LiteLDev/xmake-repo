#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"

namespace Scripting {

struct DependencyWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Scripting::ModuleDependency> deps;
    ::ll::TypedStorage<1, 1, bool>                           explicitRequest;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyWrapper& operator=(DependencyWrapper const&);
    DependencyWrapper(DependencyWrapper const&);
    DependencyWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DependencyWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
