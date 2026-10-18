#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class LifetimeRegistryReference {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistry*> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                           mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk413cd2;
    ::ll::UntypedStorage<4, 4> mUnkcee42d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LifetimeRegistryReference& operator=(LifetimeRegistryReference const&);
    LifetimeRegistryReference(LifetimeRegistryReference const&);
    LifetimeRegistryReference();
#endif // @header-generator platform
};

} // namespace Scripting
