#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BoundingBox;
#endif // @header-generator platform
class Dimension;
class ITickingArea;
// clang-format on

class ScopedGameTestTickingArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>   mTickingAreaName;
    ::ll::TypedStorage<8, 8, ::Dimension&>   mDimension;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBounds;
    ::ll::TypedStorage<8, 24, std::string>   mStructureName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb32f30;
    ::ll::UntypedStorage<8, 8>  mUnk5eb88c;
    ::ll::UntypedStorage<4, 24> mUnkc921a0;
    ::ll::UntypedStorage<8, 32> mUnk4e4001;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI
    ScopedGameTestTickingArea(::Dimension& dimension, ::BoundingBox const& bounds, ::std::string const& structureName);

#endif // @header-generator platform
    MCNAPI void _createTickingArea();

    MCNAPI void _removeTickingArea();

    MCNAPI bool areChunksLoaded();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ITickingArea> getTickingArea() const;
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::ITickingArea> getTickingArea() const;

    MCNAPI ~ScopedGameTestTickingArea();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TICKING_AREA_PREFIX();
#else // @header-generator platform
    MCNAPI static ::std::string const& TICKING_AREA_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& dimension, ::BoundingBox const& bounds, ::std::string const& structureName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
