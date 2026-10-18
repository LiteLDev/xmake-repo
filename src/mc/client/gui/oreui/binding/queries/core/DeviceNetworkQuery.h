#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DeviceNetworkQuery : public ::OreUI::QueryBase<OreUI::DeviceNetworkQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>>      mClient;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<AppPlatform>>          mAppPlatform;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mAllowCellularToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mMobileDataOnceToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mMobileDataModalToken;
    ::ll::TypedStorage<8, 8, ulong>                                        mFrameCount;
    ::ll::UntypedStorage<8, 152>                                           mIsOnline;
    ::ll::UntypedStorage<8, 152>                                           mCellularDataFee;
    ::ll::UntypedStorage<8, 152>                                           mOnlyCellularAvailable;
    ::ll::UntypedStorage<8, 152>                                           mSupportsManualAddedServers;
    ::ll::UntypedStorage<8, 152>                                           mIsLANAllowed;
    ::ll::UntypedStorage<8, 152>                                           mIsAdHocModeActive;
    ::ll::UntypedStorage<8, 152>                                           mDefaultNetworkMaxPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceNetworkQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceNetworkQuery();

    virtual void update(double const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeviceNetworkQuery(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DeviceNetworkQuery : public ::OreUI::QueryBase<::OreUI::DeviceNetworkQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>      mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>          mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mAllowCellularToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mMobileDataOnceToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mMobileDataModalToken;
    ::ll::TypedStorage<8, 8, uint64>                                           mFrameCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mCellularDataFee;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mOnlyCellularAvailable;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mSupportsManualAddedServers;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsLANAllowed;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsAdHocModeActive;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                         mDefaultNetworkMaxPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceNetworkQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceNetworkQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double const time);
    // NOLINTEND
};
#else // @header-generator platform
class DeviceNetworkQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
