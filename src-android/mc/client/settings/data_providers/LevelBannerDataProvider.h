#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

namespace Settings {

class LevelBannerDataProvider : public ::Settings::IDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::function<Bedrock::PubSub::Subscription (std::function<void ()>)>>> mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mSubscriptions;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBannerDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelBannerDataProvider();

    virtual bool canModify() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelBannerDataProvider(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
