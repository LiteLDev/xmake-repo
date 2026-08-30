#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ExperienceImageSetObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ExperiencePdpActivityObject; }
namespace OreUI { class ExperiencePdpNewsObject; }
// clang-format on

namespace OreUI {

class ExperiencePdpObject : public ::OreUI::PropertyObject<OreUI::ExperiencePdpObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384>                                              mTitle;
    ::ll::UntypedStorage<8, 384>                                              mDescription;
    ::ll::UntypedStorage<8, 1368>                                             mBanner;
    ::ll::UntypedStorage<8, 104>                                              mActivities;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ExperiencePdpNewsObject>> mNews;
    // NOLINTEND
};

} // namespace OreUI
