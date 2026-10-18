#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CDScopedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTagEnd;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CDScopedEvent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CDScopedEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~CDScopedEvent();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
