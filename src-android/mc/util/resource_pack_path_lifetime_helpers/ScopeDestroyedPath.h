#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"

namespace ResourcePackPathLifetimeHelpers {

class ScopeDestroyedPath {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mPath;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::BasicLockbox<std::unordered_map<std::string, std::weak_ptr<ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>, std::mutex>>>> mCacheContainer;
    // clang-format on
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
