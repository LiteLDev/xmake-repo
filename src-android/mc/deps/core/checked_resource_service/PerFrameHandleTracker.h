#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ValidityCheckType.h"

namespace mce {

class PerFrameHandleTracker {
public:
    // PerFrameHandleTracker inner types define
    using ValidationType = std::tuple<bool, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, std::atomic<ushort>> mCheckCount;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>   mIsValid;
    // NOLINTEND
};

} // namespace mce
