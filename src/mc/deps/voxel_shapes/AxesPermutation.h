#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/voxel_shapes/Axis.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace VoxelShapes {

class AxesPermutation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 3> mAxisPermutation;
    ::ll::UntypedStorage<1, 1> mIsAxisInverted;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 3> mUnk57480b;
    ::ll::UntypedStorage<1, 1> mUnk13390c;
    // NOLINTEND

public:
    // prevent constructor by default
    AxesPermutation& operator=(AxesPermutation const&);
    AxesPermutation(AxesPermutation const&);
    AxesPermutation();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::AxesPermutation const& Identity();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX90();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY90();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ90();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes
