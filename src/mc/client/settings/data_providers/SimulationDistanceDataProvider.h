#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/OptionData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class SimulationDistanceDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                           mLevelData;
    ::ll::UntypedStorage<8, 80>                                           mInfo;
    ::ll::UntypedStorage<8, 80>                                           mIndexValueMap;
    ::ll::TypedStorage<8, 24, std::vector<Settings::OptionData>>          mLabels;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mLevelDataSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulationDistanceDataProvider& operator=(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SimulationDistanceDataProvider();

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
    MCNAPI SimulationDistanceDataProvider(
        ::LevelDataWrapper&,
        std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>
    );

    MCNAPI void _updateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::LevelDataWrapper&, std::function<Bedrock::PubSub::Subscription(std::function<void(LevelDataWrapper&)>)>);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SimulationDistanceDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                                                              mInfo;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint>>        mIndexValueMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>>          mLabels;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mLevelDataSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulationDistanceDataProvider& operator=(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int index) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimulationDistanceDataProvider(
        ::LevelDataWrapper& levelData,
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback
    );

    MCAPI void _updateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelDataWrapper& levelData,
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCAPI void $setValue(int index);

    MCFOLD ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    $getInfo() const;
    // NOLINTEND
};
#else // @header-generator platform
class SimulationDistanceDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
