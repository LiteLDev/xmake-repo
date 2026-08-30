#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

enum class FabBaseDiscriminator : int {
    FabBase                        = 0,
    ExperienceFab                  = 1,
    ExperiencePdpFab               = 2,
    BannerFab                      = 3,
    ExperienceListFab              = 4,
    SimpleAnnouncementFab          = 5,
    StandardMarketplaceItemListFab = 6,
};

}
