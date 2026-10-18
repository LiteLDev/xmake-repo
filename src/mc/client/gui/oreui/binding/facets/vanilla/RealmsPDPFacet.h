#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPDPFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPDPFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCheckRealmsTrialAvailable;
    ::ll::UntypedStorage<1, 16> mIsRealmsTrialAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPDPFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPDPFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPDPFacet(std::function<void()>, std::function<bool()>);

    MCNAPI bool isRealmsTrialAvailable() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void()>, std::function<bool()>);
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
class RealmsPDPFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPDPFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCheckRealmsTrialAvailable;
    ::ll::TypedStorage<1, 1, bool>                     mIsRealmsTrialAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPDPFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPDPFacet(
        ::std::function<void()> updateRealmsTrialAvailable,
        ::std::function<bool()> checkRealmsTrialAvailable
    );

    MCAPI bool isRealmsTrialAvailable() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::function<void()> updateRealmsTrialAvailable, ::std::function<bool()> checkRealmsTrialAvailable);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPDPFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
