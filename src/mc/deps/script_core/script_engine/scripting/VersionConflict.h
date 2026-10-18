#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct VersionConflict {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> conflictModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedByA;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedByB;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> versionWantedByA;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> versionWantedByB;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnk4bdd5f;
    ::ll::UntypedStorage<8, 96> mUnkbb2d45;
    ::ll::UntypedStorage<8, 96> mUnk10a861;
    ::ll::UntypedStorage<8, 96> mUnkaf947b;
    ::ll::UntypedStorage<8, 96> mUnk8c70b9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VersionConflict& operator=(VersionConflict const&);
    VersionConflict(VersionConflict const&);
    VersionConflict();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionConflict();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
