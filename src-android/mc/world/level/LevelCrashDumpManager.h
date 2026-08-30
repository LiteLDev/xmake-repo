#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/world/level/ILevelCrashDumpManager.h"

class LevelCrashDumpManager : public ::ILevelCrashDumpManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>          mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId const> mSubClientId;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCrashDumpManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCrashDumpManager();

    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelCrashDumpManager(bool, ::SubClientId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, ::SubClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setCrashDumpLogStringID(::CrashDumpLogStringID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
