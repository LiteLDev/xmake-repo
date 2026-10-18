#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserPrivacy; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserPrivacy; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayerPrivacyFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerPrivacyFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PlayerPrivacyFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerPrivacyFacet> {
#else // @header-generator platform
class PlayerPrivacyFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PlayerPrivacyFacet inner types declare
    // clang-format off
    struct PrivacyData;
    // clang-format on

    // PlayerPrivacyFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PrivacyData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> viewTargetProfile;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mDirty;
    ::ll::TypedStorage<1, 1, bool>                                          mLoaded;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPrivacyFacet::PrivacyData>      mData;
    ::ll::TypedStorage<8, 16, std::optional<Social::XUID>>                  mXuid;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::XboxLiveUserPrivacy>> mPrivacy;
    ::ll::UntypedStorage<8, 24>                                             mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPrivacySubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPrivacyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPrivacyFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerPrivacyFacet(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const);

    MCNAPI ::OreUI::PlayerPrivacyFacet::PrivacyData const& getData();

    MCNAPI bool getLoaded();

    MCNAPI void load(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PrivacyData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> viewTargetProfile;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                   mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mLoaded;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPrivacyFacet::PrivacyData>               mData;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                       mXuid;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::XboxLiveUserPrivacy>>      mPrivacy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPrivacySubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPrivacyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPrivacyFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerPrivacyFacet(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);

    MCAPI ::OreUI::PlayerPrivacyFacet::PrivacyData const& getData();

    MCFOLD bool getLoaded();

    MCAPI void load(::std::string const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PrivacyData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
