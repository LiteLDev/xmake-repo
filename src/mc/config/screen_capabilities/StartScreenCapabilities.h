#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct StartScreenCapabilities : public ::TypedScreenCapabilities<StartScreenCapabilities> {
#else // @header-generator platform
struct StartScreenCapabilities : public ::TypedScreenCapabilities<::StartScreenCapabilities> {
#endif // @header-generator platform
public:
    // StartScreenCapabilities inner types define
    enum class EduManageAccountOptions : uchar {
        Upsell = 0,
        Prompt = 1,
        SignIn = 2,
    };

    enum class PlayButtonTarget : uchar {
        None    = 0,
        Vanilla = 1,
        Edu     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                               mEduFeedbackIgnored;
    ::ll::TypedStorage<1, 1, ::StartScreenCapabilities::EduManageAccountOptions> mEduManageAccountOption;
    ::ll::TypedStorage<1, 1, bool>                                               mCoursesIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mUnlockFullGameButtonIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mFeaturedWorldIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mBuyGameAlwaysVisible;
    ::ll::TypedStorage<1, 1, ::StartScreenCapabilities::PlayButtonTarget>        mPlayButtonTarget;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk7f7d50;
    ::ll::UntypedStorage<1, 1> mUnk297420;
    ::ll::UntypedStorage<1, 1> mUnkead217;
    ::ll::UntypedStorage<1, 1> mUnkfb08d9;
    ::ll::UntypedStorage<1, 1> mUnk363f55;
    ::ll::UntypedStorage<1, 1> mUnk359aaa;
    ::ll::UntypedStorage<1, 1> mUnkabaaeb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StartScreenCapabilities& operator=(StartScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StartScreenCapabilities(StartScreenCapabilities const&);
#endif // @header-generator platform
    StartScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StartScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~StartScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
