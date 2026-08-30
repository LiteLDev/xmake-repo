#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct StartScreenCapabilities : public ::TypedScreenCapabilities<StartScreenCapabilities> {
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
    ::ll::TypedStorage<1, 1, bool>                                               mEduFeedbackIgnored;
    ::ll::TypedStorage<1, 1, ::StartScreenCapabilities::EduManageAccountOptions> mEduManageAccountOption;
    ::ll::TypedStorage<1, 1, bool>                                               mCoursesIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mUnlockFullGameButtonIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mFeaturedWorldIgnored;
    ::ll::TypedStorage<1, 1, bool>                                               mBuyGameAlwaysVisible;
    ::ll::TypedStorage<1, 1, ::StartScreenCapabilities::PlayButtonTarget>        mPlayButtonTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    StartScreenCapabilities& operator=(StartScreenCapabilities const&);
    StartScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartScreenCapabilities();
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
