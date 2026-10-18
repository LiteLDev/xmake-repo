#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct MissingModuleRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> missingModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnke95a67;
    ::ll::UntypedStorage<8, 96> mUnkf9e291;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MissingModuleRequest& operator=(MissingModuleRequest const&);
    MissingModuleRequest(MissingModuleRequest const&);
    MissingModuleRequest();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MissingModuleRequest(::Scripting::ModuleDescriptor const&, ::Scripting::ModuleDescriptor const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~MissingModuleRequest();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleDescriptor const&, ::Scripting::ModuleDescriptor const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
