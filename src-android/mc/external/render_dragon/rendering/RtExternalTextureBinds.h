#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class RtExternalTextureBinds : int {
    SkyTexture     = 0,
    TextureAtlas   = 1,
    MissingTexture = 2,
};

}
