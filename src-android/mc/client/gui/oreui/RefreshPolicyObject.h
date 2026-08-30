#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
// clang-format on

namespace OreUI {

class RefreshPolicyObject : public ::OreUI::PropertyObject<OreUI::RefreshPolicyObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mMinRefreshDelayInSeconds;
    ::ll::UntypedStorage<8, 152> mTimeToLiveInSeconds;
    ::ll::UntypedStorage<8, 104> mEvents;
    // NOLINTEND
};

} // namespace OreUI
