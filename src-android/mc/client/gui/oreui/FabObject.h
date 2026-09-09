#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/RefreshPolicyObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class FabObject : public ::OreUI::PropertyObject<OreUI::FabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                                              mId;
    ::ll::UntypedStorage<8, 176>                                              mType;
    ::ll::UntypedStorage<8, 624>                                              mRefreshPolicy;
    ::ll::UntypedStorage<8, 176>                                              mVariant;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::IPropertyObject>> mDerivedFab;
    // NOLINTEND
};

} // namespace OreUI
