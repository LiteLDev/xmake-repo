#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpEventDataArray.h"
#include "mc/deps/core/utility/CrashDumpFirstAssertsDataArray.h"
#include "mc/deps/core/utility/CrashDumpFrameDataArray.h"
#include "mc/deps/core/utility/CrashDumpGameplayDataArray.h"
#include "mc/deps/core/utility/CrashDumpGlobalData.h"
#include "mc/deps/core/utility/CrashDumpKeyValueDataArray.h"
#include "mc/deps/core/utility/CrashDumpLastAssertsDataArray.h"
#include "mc/deps/core/utility/CrashDumpPlayerDataArray.h"
#include "mc/deps/core/utility/CrashDumpRenderDataArray.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct CrashDump_AllData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                               mStartSentinel;
    ::ll::TypedStorage<4, 4, int>                                mFormatSize;
    ::ll::TypedStorage<4, 4, int>                                mDataBlobCount;
    ::ll::TypedStorage<1, 1500, char[1500]>                      mFormat;
    ::ll::TypedStorage<8, 2344, ::CrashDumpGlobalData>           mGlobalData;
    ::ll::TypedStorage<4, 49168, ::CrashDumpEventDataArray>      mEventDataArray;
    ::ll::TypedStorage<8, 8208, ::CrashDumpKeyValueDataArray>    mKeyValueDataArray;
    ::ll::TypedStorage<8, 272, ::CrashDumpFrameDataArray>        mFrameDataArray;
    ::ll::TypedStorage<4, 1552, ::CrashDumpGameplayDataArray>    mGameplayDataArray;
    ::ll::TypedStorage<4, 1040, ::CrashDumpRenderDataArray>      mRenderDataArray;
    ::ll::TypedStorage<4, 272, ::CrashDumpPlayerDataArray>       mPlayerDataArray;
    ::ll::TypedStorage<4, 400, ::CrashDumpFirstAssertsDataArray> mFirstAssertsDataArray;
    ::ll::TypedStorage<4, 400, ::CrashDumpLastAssertsDataArray>  mLastAssertsDataArray;
    ::ll::TypedStorage<8, 8, long>                               mEndSentinel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>     mUnk3e1fb5;
    ::ll::UntypedStorage<4, 4>     mUnka1e590;
    ::ll::UntypedStorage<4, 4>     mUnkec21fb;
    ::ll::UntypedStorage<1, 1500>  mUnkc2cd5b;
    ::ll::UntypedStorage<8, 2344>  mUnk69c5c5;
    ::ll::UntypedStorage<4, 49168> mUnkffc1fb;
    ::ll::UntypedStorage<8, 8208>  mUnkdf7fc0;
    ::ll::UntypedStorage<8, 272>   mUnkd18e80;
    ::ll::UntypedStorage<4, 1552>  mUnkf26b20;
    ::ll::UntypedStorage<4, 1040>  mUnkd788a1;
    ::ll::UntypedStorage<4, 272>   mUnkb28d77;
    ::ll::UntypedStorage<4, 400>   mUnk6fd1d7;
    ::ll::UntypedStorage<4, 400>   mUnkb0e60f;
    ::ll::UntypedStorage<8, 8>     mUnkc629c4;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDump_AllData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashDump_AllData& operator=(CrashDump_AllData const&);
    CrashDump_AllData(CrashDump_AllData const&);
    CrashDump_AllData();
#endif // @header-generator platform
};
