#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> requests;
    ::ll::TypedStorage<8, 8, ulong> retries;
    ::ll::TypedStorage<8, 8, ulong> retrySuccess;
    ::ll::TypedStorage<8, 8, ulong> failures;
    // NOLINTEND
};

} // namespace Core::Profile
