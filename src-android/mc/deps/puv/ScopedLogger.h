#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Logger.h"

namespace Puv::internal {

struct ScopedLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Puv::Logger&> mLogRef;
    ::ll::TypedStorage<8, 80, ::Puv::Logger> mSwappedLog;
    ::ll::TypedStorage<1, 1, bool>           mDone;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedLogger& operator=(ScopedLogger const&);
    ScopedLogger(ScopedLogger const&);
    ScopedLogger();

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
};

} // namespace Puv::internal
