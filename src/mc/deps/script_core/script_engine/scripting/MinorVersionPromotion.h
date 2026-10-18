#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/scripting/Version.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct MinorVersionPromotion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> promotedModule;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          originalVersion;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          promotedToVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnka26ca1;
    ::ll::UntypedStorage<8, 96> mUnk3c4dad;
    ::ll::UntypedStorage<8, 40> mUnk762736;
    ::ll::UntypedStorage<8, 40> mUnk21cc95;
#endif // @header-generator platform
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
