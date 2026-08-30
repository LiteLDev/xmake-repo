#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

namespace Scripting {

struct VersionConflict {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> conflictModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedByA;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedByB;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> versionWantedByA;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> versionWantedByB;
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
