#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"

// auto generated forward declare list
// clang-format off
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ResourcePackPathLifetimeHelpers {

class ResourcePackPathCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::BasicLockbox<std::unordered_map<std::string, std::weak_ptr<ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>, std::mutex>>>> mContainer;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7cbdf7;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackPathCache& operator=(ResourcePackPathCache const&);
    ResourcePackPathCache(ResourcePackPathCache const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackPathCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
