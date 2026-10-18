#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FrameAnomalyDetector;
class IClientInstance;
class ScreenContext;
// clang-format on

class FrameTimingDisplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mFrameAnomalyDetector;
    ::ll::TypedStorage<4, 16, ::mce::Color const>              mColorGood;
    ::ll::TypedStorage<4, 16, ::mce::Color const>              mColorWarning;
    ::ll::TypedStorage<4, 16, ::mce::Color const>              mColorBad;
    ::ll::TypedStorage<4, 16, ::mce::Color const>              mColorBackground;
    ::ll::TypedStorage<8, 8, ulong>                            mSlowdownCount;
    ::ll::TypedStorage<8, 8, ulong>                            mSpikeCount;
    ::ll::TypedStorage<8, 8, ulong>                            mStutterCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSlowdownSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSpikeSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStutterSub;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameTimingDisplay();
};
#else // @header-generator platform
class FrameTimingDisplay {};
#endif // @header-generator platform
