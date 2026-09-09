#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

struct CrashDump_AllData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDump_AllData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
