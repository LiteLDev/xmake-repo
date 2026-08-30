#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CausticsParameters.h"

namespace mce::framebuilder {

class CausticsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::CausticsParameters> mParameters;
    ::ll::TypedStorage<1, 1, uchar>                                    mCurrentFrame;
    ::ll::TypedStorage<4, 4, float>                                    mTimeAtLastUpdate;
    // NOLINTEND
};

} // namespace mce::framebuilder
