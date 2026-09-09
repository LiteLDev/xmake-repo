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
    // prevent constructor by default
    CDScopedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CDScopedEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCNAPI ~CDScopedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
