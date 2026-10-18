#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PrivacyAndOnlineSafetyFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PrivacyAndOnlineSafetyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>> mUser;
    ::ll::TypedStorage<1, 1, bool>                         mDirty;
    ::ll::TypedStorage<1, 1, bool const>                   mStatus_DEPRECATED;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivacyAndOnlineSafetyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrivacyAndOnlineSafetyFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrivacyAndOnlineSafetyFacet(std::weak_ptr<Social::User>);

    MCNAPI void doPermissionCheck();

    MCNAPI bool getAllowCapturesResult() const;

    MCNAPI bool getClubCheckResult() const;

    MCNAPI bool getMultiplayerCheckResult() const;
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
    MCNAPI void* $ctor(std::weak_ptr<Social::User>);
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
class PrivacyAndOnlineSafetyFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PrivacyAndOnlineSafetyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Social::User>> mUser;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<1, 1, bool const>                       mStatus_DEPRECATED;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivacyAndOnlineSafetyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PrivacyAndOnlineSafetyFacet(::std::weak_ptr<::Social::User> user);

    MCAPI void doPermissionCheck();

    MCAPI bool getAllowCapturesResult() const;

    MCAPI bool getClubCheckResult() const;

    MCAPI bool getMultiplayerCheckResult() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::Social::User> user);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PrivacyAndOnlineSafetyFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
