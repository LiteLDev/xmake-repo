#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/OptionData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IOptionPropertyHandler; }
// clang-format on

namespace Settings {

class LevelOptionsDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 16> mDelegate;
    ::ll::UntypedStorage<8, 80> mInfo;
    ::ll::TypedStorage<8, 24, std::vector<Settings::OptionData>> mValues;
    ::ll::TypedStorage<8, 24, std::vector<std::function<Bedrock::PubSub::Subscription (std::function<void ()>)>>> mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::UntypedStorage<8, 32> mSubscriptions;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelOptionsDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelOptionsDataProvider();

    virtual bool canModify() const;

    virtual ::gsl::span<const Settings::OptionData> getOptions() const;

    virtual int getValue() const;

    virtual void setValue(int);

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> const& getInfo() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelOptionsDataProvider(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IOptionPropertyHandler>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>,
        std::vector<std::function<Bedrock::PubSub::Subscription(std::function<void()>)>>,
        std::unique_ptr<Settings::IOptionPropertyHandler>
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

    MCNAPI ::gsl::span<const Settings::OptionData> $getOptions() const;

    MCNAPI int $getValue() const;

    MCNAPI void $setValue(int);

    MCNAPI std::optional<std::variant<std::string, std::function<std::string()>, Settings::LocStringData>> const&
           $getInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
