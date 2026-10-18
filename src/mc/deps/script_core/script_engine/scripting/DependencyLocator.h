#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<entt::meta_any>> mServices;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5eb976;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DependencyLocator& operator=(DependencyLocator const&);
    DependencyLocator(DependencyLocator const&);
    DependencyLocator();
#endif // @header-generator platform
};

} // namespace Scripting
