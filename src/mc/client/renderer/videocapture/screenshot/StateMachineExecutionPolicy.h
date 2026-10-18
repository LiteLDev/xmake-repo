#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Timer;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace videocapture::screenshot::timerconstrained {

#if defined(LL_PLAT_A) // @header-generator platform
struct StateMachineExecutionPolicy {
public:
    // StateMachineExecutionPolicy inner types define
    using TimerAction = std::function<void(Timer&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Timer&> mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&> mRealTimer;
    ::ll::UntypedStorage<8, 48>        mModifyExternalTimer;
    ::ll::TypedStorage<4, 4, float>    mTicksPerScreenshot;
    ::ll::TypedStorage<4, 4, float>    mRealTicksPerScreenshot;
    ::ll::TypedStorage<4, 4, float>    mExternalTicksPerScreenshot;
    ::ll::TypedStorage<4, 4, float>    mTicksAccumulated;
    ::ll::TypedStorage<4, 4, float>    mRealTicksAccumulated;
    ::ll::UntypedStorage<4, 12>        mExternalTicksAccumulated;
    // NOLINTEND

public:
    // prevent constructor by default
    StateMachineExecutionPolicy& operator=(StateMachineExecutionPolicy const&);
    StateMachineExecutionPolicy(StateMachineExecutionPolicy const&);
    StateMachineExecutionPolicy();
};
#else // @header-generator platform
struct StateMachineExecutionPolicy {};
#endif // @header-generator platform

} // namespace videocapture::screenshot::timerconstrained
