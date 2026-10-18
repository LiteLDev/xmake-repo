#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CausticsParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class CausticsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::CausticsParameters> mParameters;
    ::ll::TypedStorage<1, 1, uchar>                                    mCurrentFrame;
    ::ll::TypedStorage<4, 4, float>                                    mTimeAtLastUpdate;
    // NOLINTEND
};
#else // @header-generator platform
class CausticsManager {};
#endif // @header-generator platform

} // namespace mce::framebuilder
