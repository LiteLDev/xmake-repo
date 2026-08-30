#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/scripting/Version.h"

namespace Scripting {

struct MinorVersionPromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> promotedModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          originalVersion;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          promotedToVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    MinorVersionPromotion& operator=(MinorVersionPromotion const&);
    MinorVersionPromotion(MinorVersionPromotion const&);
    MinorVersionPromotion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinorVersionPromotion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
