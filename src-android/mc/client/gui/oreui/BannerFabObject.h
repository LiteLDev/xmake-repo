#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ImageObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class BannerFabObject : public ::OreUI::PropertyObject<OreUI::BannerFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384>                                    mMainText;
    ::ll::UntypedStorage<8, 384>                                    mStaticImage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ImageObject>>   mAnimatedImage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::LinksToObject>> mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
