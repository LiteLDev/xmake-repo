#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/ServerRegion.h"
#include "mc/client/realms/RealmsRegionSettingsState.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsRegionSettingsState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
namespace Realms { struct ServerRegion; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmRegionSettingsQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmRegionSettingsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>       mStatus;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsRegionSettingsState>          mRealmRegionSettingsState;
    ::ll::TypedStorage<4, 4, int>                                          mRegionSelectedIndex;
    ::ll::TypedStorage<1, 1, bool>                                         mTriggerLowPingWarning;
    ::ll::TypedStorage<1, 1, bool>                                         mDoNotLowPingWarning;
    ::ll::TypedStorage<8, 24, std::vector<Realms::ServerRegion>>           mRegionData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mRealmRegionSettingsUpdateSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mRealmEditorStatusUpdateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmRegionSettingsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmRegionSettingsQueriesFacet(std::weak_ptr<Realms::RealmsRegionSettings>);

    MCNAPI bool getDoNotShowPingWarning() const;

    MCNAPI bool getLowPingWarning() const;

    MCNAPI ::Realms::RealmsRegionSettingsState getRealmRegionSettingsState() const;

    MCNAPI int getRegionSelectedIndex() const;

    MCNAPI std::vector<Realms::ServerRegion> const& getRegions() const;

    MCNAPI ::Realms::RealmsWorldEditorStateStatus getStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Realms::RealmsRegionSettings>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmRegionSettingsQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmRegionSettingsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>           mStatus;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsRegionSettingsState>              mRealmRegionSettingsState;
    ::ll::TypedStorage<4, 4, int>                                              mRegionSelectedIndex;
    ::ll::TypedStorage<1, 1, bool>                                             mTriggerLowPingWarning;
    ::ll::TypedStorage<1, 1, bool>                                             mDoNotLowPingWarning;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::ServerRegion>>           mRegionData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmRegionSettingsUpdateSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmEditorStatusUpdateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmRegionSettingsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmRegionSettingsQueriesFacet(
        ::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings
    );

    MCAPI bool getDoNotShowPingWarning() const;

    MCFOLD bool getLowPingWarning() const;

    MCFOLD ::Realms::RealmsRegionSettingsState getRealmRegionSettingsState() const;

    MCFOLD int getRegionSelectedIndex() const;

    MCFOLD ::std::vector<::Realms::ServerRegion> const& getRegions() const;

    MCFOLD ::Realms::RealmsWorldEditorStateStatus getStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmRegionSettingsQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
