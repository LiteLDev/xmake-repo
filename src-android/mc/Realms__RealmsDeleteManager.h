#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
// clang-format on

namespace Realms {

class RealmsDeleteManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::TypedStorage<8, 48, std::function<void()>>    mOnRealmsUpdated;
    ::ll::TypedStorage<8, 240, ::TaskGroup>             mTaskGroup;
    // NOLINTEND
};

} // namespace Realms
