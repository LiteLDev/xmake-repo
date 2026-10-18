#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct SupportedBindingModule {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            module;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> dependencies;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnkd2fac2;
    ::ll::UntypedStorage<8, 24> mUnke4d2f8;
#endif // @header-generator platform
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
