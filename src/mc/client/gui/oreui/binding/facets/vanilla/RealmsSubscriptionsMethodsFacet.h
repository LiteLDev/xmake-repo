#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsSubscriptions; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsSubscriptions; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsSubscriptionsMethodsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsSubscriptionsMethodsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsMethodsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsMethodsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSubscriptionsMethodsFacet(std::shared_ptr<Realms::RealmsSubscriptions>);

    MCNAPI void initialize();

    MCNAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[35]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsSubscriptions>);
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
class RealmsSubscriptionsMethodsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsSubscriptionsMethodsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsMethodsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsMethodsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSubscriptionsMethodsFacet(
        ::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions
    );

    MCAPI void initialize();

    MCAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);
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
class RealmsSubscriptionsMethodsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
