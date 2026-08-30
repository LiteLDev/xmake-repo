#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourceLoaders {

enum ResourceFileType : uint {
    Image              = 0,
    NoExtensionOrImage = 1,
    Audio              = 2,
    TextureSet         = 3,
    TextureSetOrImage  = 4,
    COUNT              = 5,
};

}
