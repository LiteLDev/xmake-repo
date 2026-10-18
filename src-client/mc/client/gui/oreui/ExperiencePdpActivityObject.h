#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ExperienceImageSetObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class ExperiencePdpActivityObject : public ::OreUI::PropertyObject<OreUI::ExperiencePdpActivityObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384>  mTitle;
    ::ll::UntypedStorage<8, 384>  mSubtitle;
    ::ll::UntypedStorage<8, 384>  mDescription;
    ::ll::UntypedStorage<8, 1368> mImage;
    ::ll::UntypedStorage<8, 176>  mWorldId;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
