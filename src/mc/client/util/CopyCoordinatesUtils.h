#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
class IClientInstance;
class Vec3;
// clang-format on

class CopyCoordinatesUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getCurrentCoordinatesString(::Vec3 const&);

    MCNAPI static std::string getFacingCoordinatesString(::BlockPos const&);

    MCNAPI static ::BlockPos getPlayerFacingPosition(::IClientInstance&);

    MCNAPI static ::Vec3 getPlayerPosition(::IClientInstance&);
    // NOLINTEND
};
#else // @header-generator platform
class CopyCoordinatesUtils {};
#endif // @header-generator platform
