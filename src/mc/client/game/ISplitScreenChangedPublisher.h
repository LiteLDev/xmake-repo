#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ISplitScreenChangedPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(std::function<void (uchar)>) const = 0;

    virtual uchar getSplitScreenCount() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ISplitScreenChangedPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Subscription
    registerSplitScreenChangedListener(::std::function<void(uchar)> callback) const = 0;

    virtual uchar getSplitScreenCount() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISplitScreenChangedPublisher {};
#endif // @header-generator platform
#endif // @header-generator platform
