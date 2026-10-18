#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/puv/Logger.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Puv::internal {

struct ScopedLogger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Puv::Logger&> mLogRef;
    ::ll::TypedStorage<8, 80, ::Puv::Logger> mSwappedLog;
    ::ll::TypedStorage<1, 1, bool>           mDone;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk5d9f89;
    ::ll::UntypedStorage<8, 80> mUnk45a0a2;
    ::ll::UntypedStorage<1, 1>  mUnk1f5128;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedLogger& operator=(ScopedLogger const&);
    ScopedLogger(ScopedLogger const&);
    ScopedLogger();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void commit();

    MCNAPI ~ScopedLogger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Puv::internal
