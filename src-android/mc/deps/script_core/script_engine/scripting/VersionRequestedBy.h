#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/scripting/Version.h"

namespace Scripting {

struct VersionRequestedBy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          version;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          originalVersion;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
    ::ll::TypedStorage<1, 1, bool>                           supported;
    ::ll::TypedStorage<1, 1, bool>                           missing;
    ::ll::TypedStorage<1, 1, bool>                           explicitRequest;
    ::ll::TypedStorage<1, 1, bool>                           promotion;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestedBy& operator=(VersionRequestedBy const&);
    VersionRequestedBy(VersionRequestedBy const&);
    VersionRequestedBy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VersionRequestedBy(
        ::Scripting::Version,
        ::Scripting::Version,
        ::Scripting::ModuleDescriptor,
        bool,
        bool,
        bool,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Scripting::Version, ::Scripting::Version, ::Scripting::ModuleDescriptor, bool, bool, bool, bool);
    // NOLINTEND
};

} // namespace Scripting
