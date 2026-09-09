#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class AbstractSceneProxy;
// clang-format on

struct SceneStackProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mForEachScreen;
    ::ll::UntypedStorage<8, 48> mForEachAlwaysAcceptInputScreenWithTop;
    ::ll::UntypedStorage<8, 48> mGetScreen;
    ::ll::UntypedStorage<8, 48> mGetScreenName;
    ::ll::UntypedStorage<8, 48> mHasScheduledScreens;
    ::ll::UntypedStorage<8, 48> mPushScreen;
    ::ll::UntypedStorage<8, 48> mSchedulePopScreen;
    ::ll::UntypedStorage<8, 48> mScreenOnStack;
    ::ll::UntypedStorage<8, 48> mGetScreenTicking;
    ::ll::UntypedStorage<8, 48> mSetScreenTicking;
    ::ll::UntypedStorage<8, 48> mUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackProxyCallbacks& operator=(SceneStackProxyCallbacks const&);
    SceneStackProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SceneStackProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
