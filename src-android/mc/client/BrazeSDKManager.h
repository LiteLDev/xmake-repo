#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
// clang-format on

class BrazeSDKManager : public ::std::enable_shared_from_this<BrazeSDKManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrazeSDKManager();

    virtual void enableBrazeSDK();

    virtual void disableBrazeSDK();

    virtual void setBrazeId(std::string const&);

    virtual void _enableBrazeSDK();

    virtual void _disableBrazeSDK();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<OptionRegistry> _getPrimaryUserOptions();

    MCNAPI static std::shared_ptr<BrazeSDKManager> getShared();

    MCNAPI static bool isBrazeEnabled();

    MCNAPI static void setOption(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mInitialized();

    MCNAPI static std::shared_ptr<BrazeSDKManager>& mInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $enableBrazeSDK();

    MCNAPI void $disableBrazeSDK();

    MCNAPI void $setBrazeId(std::string const&);

    MCNAPI void $_enableBrazeSDK();

    MCNAPI void $_disableBrazeSDK();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
