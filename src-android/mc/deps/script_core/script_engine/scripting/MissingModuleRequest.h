#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

namespace Scripting {

struct MissingModuleRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> missingModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
    // NOLINTEND

public:
    // prevent constructor by default
    MissingModuleRequest& operator=(MissingModuleRequest const&);
    MissingModuleRequest(MissingModuleRequest const&);
    MissingModuleRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MissingModuleRequest(::Scripting::ModuleDescriptor const&, ::Scripting::ModuleDescriptor const&);

    MCNAPI ~MissingModuleRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleDescriptor const&, ::Scripting::ModuleDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
