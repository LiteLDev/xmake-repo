#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class IntOptionQuery : public ::OreUI::QueryBase<OreUI::IntOptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOptionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IntOptionQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IntOptionQuery(::OreUI::ClientDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, std::string const&);
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

} // namespace OreUI
