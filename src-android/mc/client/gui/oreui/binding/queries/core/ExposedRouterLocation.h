#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class RouterLocation; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExposedRouterLocation : public ::OreUI::PropertyObject<OreUI::ExposedRouterLocation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mPath;
    ::ll::UntypedStorage<8, 168> mQuery;
    ::ll::UntypedStorage<8, 168> mFragment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExposedRouterLocation& operator=(ExposedRouterLocation const&);
    ExposedRouterLocation(ExposedRouterLocation const&);
    ExposedRouterLocation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExposedRouterLocation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExposedRouterLocation(
        ::OreUI::Detail::IPropertyObject*,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, std::string const&, std::string const&, std::string const&);
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
