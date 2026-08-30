#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IBooleanPropertyHandler; }
// clang-format on

namespace Settings {

class LevelBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IBooleanPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 24, std::vector<std::function<Bedrock::PubSub::Subscription (std::function<void ()>)>>> mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::UntypedStorage<8, 32> mSubscriptions;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelBooleanDataProvider();

    virtual bool canModify() const;

    virtual bool getValue() const;

    virtual void setValue(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelBooleanDataProvider(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IBooleanPropertyHandler>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IBooleanPropertyHandler>
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

    MCNAPI bool $getValue() const;

    MCNAPI void $setValue(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
