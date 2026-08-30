#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ImageObject.h"
#include "mc/client/gui/oreui/LinksToObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SimpleAnnouncementFabObject : public ::OreUI::PropertyObject<OreUI::SimpleAnnouncementFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384> mTitle;
    ::ll::UntypedStorage<8, 384> mDescription;
    ::ll::UntypedStorage<8, 384> mLinkText;
    ::ll::UntypedStorage<8, 384> mStaticImage;
    ::ll::UntypedStorage<8, 536> mLink;
    // NOLINTEND
};

} // namespace OreUI
