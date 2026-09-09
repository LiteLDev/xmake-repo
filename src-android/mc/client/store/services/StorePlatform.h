#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::gatherings::model {

enum class StorePlatform : int {
    AndroidAmazonappstore = 0,
    AndroidGoogleplay     = 1,
    IosStore              = 2,
    NxStore               = 3,
    OculusStoreRift       = 4,
    OculusStoreGearvr     = 5,
    BStore                = 6,
    UwpStore              = 7,
    Win10Onestore         = 8,
    UwpStoreMobile        = 9,
    XboxoneStore          = 10,
    TitleBedrockvanilla   = 11,
    TitleEarth            = 12,
    TitleSunderland       = 13,
    Java                  = 14,
};

}
