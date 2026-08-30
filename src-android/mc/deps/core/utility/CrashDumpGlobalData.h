#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#include "mc/platform/diagnostics/CrashDumpLogGUID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpGlobalData : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 32, char[32]>           mPlatform;
    ::ll::TypedStorage<1, 32, char[32]>           mGameVersion;
    ::ll::TypedStorage<4, 4, int>                 mResourcePack;
    ::ll::TypedStorage<4, 4, int>                 mWorldSeed;
    ::ll::TypedStorage<2, 2, short>               mRegion;
    ::ll::TypedStorage<2, 2, short>               mEditorWorld;
    ::ll::TypedStorage<2, 2, short>               mDynamicTexturesEnabled;
    ::ll::TypedStorage<2, 2, short>               mGraphicsMode;
    ::ll::TypedStorage<8, 8, ulong>               mTotalMemory;
    ::ll::TypedStorage<4, 16, ::CrashDumpLogGUID> mDeviceSessionId;
    ::ll::TypedStorage<1, 48, char[48]>           mDeviceId;
    ::ll::TypedStorage<1, 1024, char[1024]>       mResourcePackIds;
    ::ll::TypedStorage<1, 1024, char[1024]>       mBehaviorPackIds;
    ::ll::TypedStorage<1, 128, char[128]>         mMainSceneStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool setDeviceSessionID(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[14]> kFormat();
    // NOLINTEND
};
