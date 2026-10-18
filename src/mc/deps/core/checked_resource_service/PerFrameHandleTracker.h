#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ValidityCheckType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class PerFrameHandleTracker {};
#endif // @header-generator platform

} // namespace mce
