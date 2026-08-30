#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class DeveloperOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::DeveloperOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    DeveloperOptionsFacet& operator=(DeveloperOptionsFacet const&);
    DeveloperOptionsFacet(DeveloperOptionsFacet const&);
    DeveloperOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeveloperOptionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeveloperOptionsFacet(::IOptionRegistry&);

    MCNAPI bool isRealmsPreproductionEnvironment() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&);
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
