#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Core__FileLRUTouchPolicy.h"
#include "mc/Core__FileLRUTouchResult.h"
#include "mc/Core__FileLRUTracker.h"
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PackDiskLRUIndexBase {
public:
    // PackDiskLRUIndexBase inner types define
    using ClockFn = std::function<long()>;

    using TouchResult = ::Core::FileLRUTouchResult;

    using TouchPolicy = ::Core::FileLRUTouchPolicy;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                         mLruIndexPath;
    ::ll::TypedStorage<8, 48, std::function<long()>>    mClock;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mReflectionCtx;
    ::ll::UntypedStorage<8, 80>                         mTracker;
    ::ll::TypedStorage<8, 8, long>                      mNextSaveSec;
    ::ll::TypedStorage<4, 4, int>                       mSaveFailures;
    ::ll::TypedStorage<1, 1, bool>                      mDirty;
    ::ll::TypedStorage<1, 1, bool>                      mNeedsEvictionCheck;
    // NOLINTEND
};
