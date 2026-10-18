#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IBooleanPropertyHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IBooleanPropertyHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LevelBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // LevelBooleanDataProvider inner types define
    using SubscriptionConnector = ::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IBooleanPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>>>
                                                                              mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelBooleanDataProvider(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IBooleanPropertyHandler>                                   delegate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IBooleanPropertyHandler>                                   delegate
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canModify() const;

    MCFOLD bool $getValue() const;

    MCAPI void $setValue(bool value);
    // NOLINTEND
};
#else // @header-generator platform
class LevelBooleanDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
