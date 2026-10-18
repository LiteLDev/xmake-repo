#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

class SuspendHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, std::condition_variable> mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>              mMutex;
    ::ll::UntypedStorage<8, 32>                        mAppPlatform;
    ::ll::UntypedStorage<8, 48>                        mRunOnSuspendThread;
    ::ll::TypedStorage<1, 1, bool>                     mSuspending;
    ::ll::UntypedStorage<1, 15>                        mResuming;
    // NOLINTEND

public:
    // prevent constructor by default
    SuspendHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SuspendHandler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SuspendHandler(::Bedrock::NonOwnerPointer<AppPlatform>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<AppPlatform>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SuspendHandler {};
#endif // @header-generator platform
