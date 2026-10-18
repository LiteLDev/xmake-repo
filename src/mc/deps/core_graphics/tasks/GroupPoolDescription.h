#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cg {

#if defined(LL_PLAT_A) // @header-generator platform
struct GroupPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WorkerPool&> mPool;
    ::ll::TypedStorage<8, 8, ::Scheduler&>  mScheduler;
    ::ll::TypedStorage<1, 1, bool>          mIsHelper;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupPoolDescription& operator=(GroupPoolDescription const&);
    GroupPoolDescription(GroupPoolDescription const&);
    GroupPoolDescription();
};
#else // @header-generator platform
struct GroupPoolDescription {};
#endif // @header-generator platform

} // namespace cg
