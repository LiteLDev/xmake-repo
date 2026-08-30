#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"

// auto generated forward declare list
// clang-format off
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on

namespace ResourcePackPathLifetimeHelpers {

class ResourcePackPathCache {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::BasicLockbox<std::unordered_map<std::string, std::weak_ptr<ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>, std::mutex>>>> mContainer;
    // clang-format on
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
