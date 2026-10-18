#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class VerticalAnchor {
public:
    // VerticalAnchor inner types define
    using AnchorHandler = int (*)(::br::worldgen::WorldGenContext const&, int);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                  mValue;
    ::ll::TypedStorage<8, 8, int (*)(::br::worldgen::WorldGenContext const&, int)> mHandler;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int resolveY(::br::worldgen::WorldGenContext const&) const;

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::VerticalAnchor aboveBottom(int);

    MCNAPI static ::br::worldgen::VerticalAnchor absolute(int);

    MCNAPI static ::br::worldgen::VerticalAnchor belowTop(int);

    MCNAPI static ::br::worldgen::VerticalAnchor fromSea(int);
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
