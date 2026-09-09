#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ExperienceListingObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/store/services/ExperienceMode.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class ExperiencePreviewObject : public ::OreUI::PropertyObject<OreUI::ExperiencePreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                                    mExperienceId;
    ::ll::UntypedStorage<8, 152>                                    mMode;
    ::ll::UntypedStorage<8, 384>                                    mTitle;
    ::ll::UntypedStorage<8, 168>                                    mCreatorName;
    ::ll::UntypedStorage<8, 168>                                    mCreatorId;
    ::ll::UntypedStorage<8, 1592>                                   mListing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::LinksToObject>> mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
