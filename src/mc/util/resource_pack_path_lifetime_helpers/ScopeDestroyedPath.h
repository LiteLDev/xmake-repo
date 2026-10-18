#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ResourcePackPathLifetimeHelpers {

class ScopeDestroyedPath {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mPath;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::BasicLockbox<std::unordered_map<std::string, std::weak_ptr<ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>, std::mutex>>>> mCacheContainer;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8207d4;
    ::ll::UntypedStorage<8, 16> mUnk199715;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScopeDestroyedPath& operator=(ScopeDestroyedPath const&);
    ScopeDestroyedPath(ScopeDestroyedPath const&);
    ScopeDestroyedPath();
#endif // @header-generator platform
};

} // namespace ResourcePackPathLifetimeHelpers
