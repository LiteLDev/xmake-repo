#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/deps/voxel_shapes/VoxelShape.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { class RegistryHandle; }
namespace VoxelShapes { class VoxelShape; }
// clang-format on
#endif // @header-generator platform

struct VoxelShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<VoxelShapes::VoxelShape>>                          mShapes;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, VoxelShapes::RegistryHandle>> mNameMap;
    ::ll::TypedStorage<2, 2, ushort>                                                         mCustomShapeCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::VoxelShapes::VoxelShape>>                            mShapes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle>> mNameMap;
    ::ll::TypedStorage<2, 2, ushort>                                                               mCustomShapeCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VoxelShapesPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VoxelShapesPacketPayload(
        std::vector<VoxelShapes::VoxelShape> const&,
        std::unordered_map<HashedString, VoxelShapes::RegistryHandle> const&,
        ushort const
#else // @header-generator platform
    MCAPI VoxelShapesPacketPayload(
        ::std::vector<::VoxelShapes::VoxelShape> const&                            shapes,
        ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle> const& nameMap,
        ushort                                                                     customShapeCount
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~VoxelShapesPacketPayload();
#else // @header-generator platform
    MCAPI ~VoxelShapesPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::vector<VoxelShapes::VoxelShape> const&,
        std::unordered_map<HashedString, VoxelShapes::RegistryHandle> const&,
        ushort const
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::vector<::VoxelShapes::VoxelShape> const&                            shapes,
        ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle> const& nameMap,
        ushort                                                                     customShapeCount
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
