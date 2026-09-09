#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IStringDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IStringPropertyHandler; }
// clang-format on

namespace Settings {

class LevelStringDataProvider : public ::Settings::IStringDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IStringPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 24, std::vector<std::function<Bedrock::PubSub::Subscription (std::function<void ()>)>>> mSubscriptionConnectors;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mCachedValue;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::UntypedStorage<8, 32> mSubscriptions;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStringDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStringDataProvider();

    virtual bool canModify() const;

    virtual std::string getValue() const;

    virtual void setValue(std::string_view);

    virtual void commitValue();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStringDataProvider(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IStringPropertyHandler>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IStringPropertyHandler>
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

    MCNAPI std::string $getValue() const;

    MCNAPI void $setValue(std::string_view);

    MCNAPI void $commitValue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
