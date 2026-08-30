#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ITickingArea;
// clang-format on

class ScopedGameTestTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>   mTickingAreaName;
    ::ll::TypedStorage<8, 8, ::Dimension&>   mDimension;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBounds;
    ::ll::TypedStorage<8, 24, std::string>   mStructureName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createTickingArea();

    MCNAPI void _removeTickingArea();

    MCNAPI bool areChunksLoaded();

    MCNAPI std::shared_ptr<ITickingArea> getTickingArea() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TICKING_AREA_PREFIX();
    // NOLINTEND
};
