#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
// clang-format on

namespace OreUI {

class ProfanityFilterFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ProfanityFilterFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mProfanityFilterContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfanityFilterFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfanityFilterFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfanityFilterFacet(::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const);

    MCNAPI bool isProfanityInString(std::string const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[24]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const);
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

} // namespace OreUI
