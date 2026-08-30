#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
