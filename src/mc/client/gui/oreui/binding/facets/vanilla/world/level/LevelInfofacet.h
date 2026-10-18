#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
struct LocalPlayerChangedConnector;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
struct LocalPlayerChangedConnector;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class LevelInfofacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::LevelInfofacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    ::ll::UntypedStorage<8, 48>                                mGetCurrentLocalPlayer;
    ::ll::UntypedStorage<8, 48>                                mGetCurrentLevelSummary;
    ::ll::UntypedStorage<8, 72>                                mWorldIconPathString;
    ::ll::UntypedStorage<8, 696>                               mLevelSummary;
    ::ll::TypedStorage<8, 24, std::string>                     mWorldName;
    ::ll::TypedStorage<1, 1, bool>                             mStateChanged;
    ::ll::TypedStorage<1, 1, bool>                             mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                             mLocalPlayerLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelInfofacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelInfofacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelInfofacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::LocalPlayerChangedConnector const&,
        std::function<LocalPlayer*()>,
        std::function<LevelSummary*(std::string)>
    );

    MCNAPI void _init();

    MCNAPI bool getIsInitialized() const;

    MCNAPI ::OreUI::AllowListPath const& getWorldIconPath() const;

    MCNAPI std::string const& getWorldName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::LocalPlayerChangedConnector const&,
        std::function<LocalPlayer*()>,
        std::function<LevelSummary*(std::string)>
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
class LevelInfofacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::LevelInfofacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>                          mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<::LevelSummary*(::std::string)>>            mGetCurrentLevelSummary;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mWorldIconPathString;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                            mLevelSummary;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mWorldName;
    ::ll::TypedStorage<1, 1, bool>                                                        mStateChanged;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                        mLocalPlayerLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelInfofacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelInfofacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelInfofacet(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::LocalPlayerChangedConnector const&                       localPlayerChangedConnector,
        ::std::function<::LocalPlayer*()>                          getCurrentLocalPlayer,
        ::std::function<::LevelSummary*(::std::string)>            getCurrentLevelSummary
    );

    MCAPI void _init();

    MCAPI bool getIsInitialized() const;

    MCFOLD ::OreUI::AllowListPath const& getWorldIconPath() const;

    MCAPI ::std::string const& getWorldName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::LocalPlayerChangedConnector const&                       localPlayerChangedConnector,
        ::std::function<::LocalPlayer*()>                          getCurrentLocalPlayer,
        ::std::function<::LevelSummary*(::std::string)>            getCurrentLevelSummary
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class LevelInfofacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
