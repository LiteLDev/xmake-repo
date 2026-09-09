#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Social {

class SocialDrawerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsVisible;
    ::ll::UntypedStorage<8, 88>    mIsVisibleChangedPublisher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(bool)>& getIsVisibleChangedConnector();

    MCNAPI bool isVisible() const;

    MCNAPI void reportIsVisible(bool);
    // NOLINTEND
};

} // namespace Social
