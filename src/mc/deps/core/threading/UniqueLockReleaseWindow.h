#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/UniqueLock.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock::Threading {

class UniqueLockReleaseWindow {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::Threading::UniqueLock<std::mutex>&> mLock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>&> mLock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueLockReleaseWindow& operator=(UniqueLockReleaseWindow const&);
    UniqueLockReleaseWindow(UniqueLockReleaseWindow const&);
    UniqueLockReleaseWindow();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UniqueLockReleaseWindow();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Threading
