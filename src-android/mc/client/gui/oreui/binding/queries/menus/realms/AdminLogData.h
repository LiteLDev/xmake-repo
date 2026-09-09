#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace Realms { struct AdminLog; }
// clang-format on

namespace OreUI {

class AdminLogData : public ::OreUI::PropertyObject<OreUI::AdminLogData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mLogType;
    ::ll::UntypedStorage<8, 168> mDatePosted;
    ::ll::UntypedStorage<8, 168> mTimePosted;
    ::ll::UntypedStorage<8, 104> mParameters;
    ::ll::UntypedStorage<8, 104> mKeys;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogData& operator=(AdminLogData const&);
    AdminLogData(AdminLogData const&);
    AdminLogData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogData();
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
