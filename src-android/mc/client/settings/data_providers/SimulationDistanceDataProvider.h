#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace Settings {

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

} // namespace Settings
