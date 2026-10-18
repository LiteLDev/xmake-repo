#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::details {

#if defined(LL_PLAT_A) // @header-generator platform
class WorkToken {
public:
    // WorkToken inner types define
    using SharedLifetime = std::shared_ptr<gsl::final_action<std::function<void()>>> const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsDone;
    // NOLINTEND
};
#else // @header-generator platform
class WorkToken {};
#endif // @header-generator platform

} // namespace cg::details
