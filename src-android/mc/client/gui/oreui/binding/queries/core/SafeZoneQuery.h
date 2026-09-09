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

class SafeZoneQuery : public ::OreUI::QueryBase<OreUI::SafeZoneQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mSafeZoneX;
    ::ll::UntypedStorage<8, 104> mSafeZoneY;
    ::ll::UntypedStorage<8, 104> mScreenPositionX;
    ::ll::UntypedStorage<8, 104> mScreenPositionY;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SafeZoneQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SafeZoneQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
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
