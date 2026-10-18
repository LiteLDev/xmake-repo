#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> requests;
    ::ll::TypedStorage<8, 8, ulong> retries;
    ::ll::TypedStorage<8, 8, ulong> retrySuccess;
    ::ll::TypedStorage<8, 8, ulong> failures;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk8aa63e;
    ::ll::UntypedStorage<8, 8> mUnk166212;
    ::ll::UntypedStorage<8, 8> mUnk6d09f3;
    ::ll::UntypedStorage<8, 8> mUnk37cdb7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileCounters& operator=(FileCounters const&);
    FileCounters(FileCounters const&);
    FileCounters();
#endif // @header-generator platform
};

} // namespace Core::Profile
