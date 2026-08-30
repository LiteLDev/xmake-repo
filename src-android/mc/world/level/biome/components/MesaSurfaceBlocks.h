#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
struct MesaSurfaceAttributes;
// clang-format on

struct MesaSurfaceBlocks {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::array<const Block*, 16> buildClayMaterials(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MesaSurfaceAttributes const&);
    // NOLINTEND
};
