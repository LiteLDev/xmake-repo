#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/realms/RealmsServerSettingsSliderData.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/network/realms/RealmsTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsServerSettingsManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/realms/RealmsServerSettingsSliderData.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/network/realms/RealmsTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsServerSettingsManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsServerSettingsQuery : public ::OreUI::QueryBase<OreUI::RealmsServerSettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mRealmsServerSettingsManager;
    ::ll::UntypedStorage<8, 152>                               mRealmsServerMode;
    ::ll::UntypedStorage<8, 824>                               mRealmsPlayerCount;
    ::ll::UntypedStorage<8, 824>                               mRealmsRenderDistance;
    ::ll::UntypedStorage<8, 824>                               mRealmsSimDistance;
    ::ll::UntypedStorage<8, 152>                               mRealmsTier;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsServerModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServerSettingsQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsServerSettingsQuery(::OreUI::GameDependencies const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsServerSettingsQuery : public ::OreUI::QueryBase<::OreUI::RealmsServerSettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServerSettingsManager>>
                                                                              mRealmsServerSettingsManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::RealmsServerMode>> mRealmsServerMode;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsPlayerCount;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsRenderDistance;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsSimDistance;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::RealmsTier>>       mRealmsTier;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mRealmsServerModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsServerSettingsQuery(::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsServerSettingsQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
