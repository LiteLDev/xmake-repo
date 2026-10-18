#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ModuleDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>          name;
    ::ll::TypedStorage<8, 16, ::mce::UUID>          uuid;
    ::ll::TypedStorage<8, 32, ::Scripting::Version> version;
    ::ll::TypedStorage<1, 1, bool>                  isPeer;
    ::ll::TypedStorage<1, 1, bool>                  isOptional;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8e16be;
    ::ll::UntypedStorage<8, 16> mUnk456b76;
    ::ll::UntypedStorage<8, 40> mUnk27e2ca;
    ::ll::UntypedStorage<1, 1>  mUnka437da;
    ::ll::UntypedStorage<1, 1>  mUnk8656a2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ModuleDescriptor& operator=(ModuleDescriptor const&);
#endif // @header-generator platform
    ModuleDescriptor();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCNAPI ModuleDescriptor(::Scripting::ModuleDescriptor const&);

    MCNAPI ::Scripting::ModuleDescriptor& operator=(::Scripting::ModuleDescriptor&&);

    MCNAPI ::std::string toString() const;
#endif // @header-generator platform

    MCNAPI ~ModuleDescriptor();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleDescriptor const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
