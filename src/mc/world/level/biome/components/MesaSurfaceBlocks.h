#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
struct MesaSurfaceAttributes;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MesaSurfaceBlocks {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, std::array<const Block*, 16>> mClayMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool const>                     mBrycePillars;
    ::ll::TypedStorage<1, 1, bool const>                     mHasForest;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBlocks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MesaSurfaceBlocks(::MesaSurfaceAttributes const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::std::array<::Block const*, 16>> mClayMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool const>                         mBrycePillars;
    ::ll::TypedStorage<1, 1, bool const>                         mHasForest;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<const Block*, 16> buildClayMaterials(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MesaSurfaceAttributes const&);
#else // @header-generator platform
    MCAPI static ::std::array<::Block const*, 16> buildClayMaterials(::Block const& base);
#endif // @header-generator platform
    // NOLINTEND
};
