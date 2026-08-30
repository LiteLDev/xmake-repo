#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CDScopedGameplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mFunc;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTagEnd;
    ::ll::TypedStorage<4, 4, int>                    mClientId;
    ::ll::TypedStorage<4, 4, int>                    mBuildActionIntention;
    // NOLINTEND

public:
    // prevent constructor by default
    CDScopedGameplay();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CDScopedGameplay(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, int, int);

    MCNAPI ~CDScopedGameplay();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
