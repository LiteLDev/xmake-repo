#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/world/level/ILevelCrashDumpManager.h"

class LevelCrashDumpManager : public ::ILevelCrashDumpManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>          mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId const> mSubClientId;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkd9b23f;
    ::ll::UntypedStorage<1, 1> mUnkf2302b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelCrashDumpManager& operator=(LevelCrashDumpManager const&);
    LevelCrashDumpManager(LevelCrashDumpManager const&);
#endif // @header-generator platform
    LevelCrashDumpManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelCrashDumpManager();
#else // @header-generator platform
    virtual ~LevelCrashDumpManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCrashDumpLogStringID(::CrashDumpLogStringID) const;
#else // @header-generator platform
    MCNAPI void $setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
