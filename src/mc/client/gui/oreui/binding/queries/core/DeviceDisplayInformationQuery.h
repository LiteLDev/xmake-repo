#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DeviceDisplayInformationQuery : public ::OreUI::QueryBase<OreUI::DeviceDisplayInformationQuery>,
                                      public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mSplitScreenToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mGuiScaleChangedToken;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<AppPlatform>>     mAppPlatform;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>> mClient;
    ::ll::UntypedStorage<8, 152>                                      mDisplayWidth;
    ::ll::UntypedStorage<8, 152>                                      mDisplayHeight;
    ::ll::UntypedStorage<8, 152>                                      mGuiScaleModifier;
    ::ll::UntypedStorage<8, 152>                                      mGuiScaleBase;
    ::ll::UntypedStorage<8, 152>                                      mPixelsPerMillimeter;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceDisplayInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceDisplayInformationQuery();

    virtual void onResizeEnd();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeviceDisplayInformationQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onResizeEnd();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DeviceDisplayInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceDisplayInformationQuery>,
                                      public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mGuiScaleChangedToken;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>     mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mDisplayWidth;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mDisplayHeight;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mGuiScaleModifier;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mGuiScaleBase;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>                  mPixelsPerMillimeter;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceDisplayInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onResizeEnd() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    DeviceDisplayInformationQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onResizeEnd();
    // NOLINTEND
};
#else // @header-generator platform
class DeviceDisplayInformationQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
