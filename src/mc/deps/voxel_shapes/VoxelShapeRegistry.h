#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/deps/voxel_shapes/VoxelShape.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
namespace VoxelShapes { class RegistryHandle; }
namespace VoxelShapes { class VoxelShape; }
// clang-format on
#endif // @header-generator platform

namespace VoxelShapes {

class VoxelShapeRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                           mInitialized;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>                                  mEmptyShapeHandle;
    ::ll::UntypedStorage<2, 0>                                                               mUnitCubeShapeHandle;
    ::ll::TypedStorage<8, 8, ulong>                                                          mVanillaShapes;
    ::ll::TypedStorage<8, 8, ulong>                                                          mCustomShapes;
    ::ll::TypedStorage<8, 24, std::vector<VoxelShapes::VoxelShape>>                          mVoxelShapes;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, VoxelShapes::RegistryHandle>> mNameMap;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk3a4b31;
    ::ll::UntypedStorage<2, 2>  mUnk937122;
    ::ll::UntypedStorage<2, 2>  mUnk11cf12;
    ::ll::UntypedStorage<8, 8>  mUnk903343;
    ::ll::UntypedStorage<8, 8>  mUnka5e922;
    ::ll::UntypedStorage<8, 24> mUnk92b9be;
    ::ll::UntypedStorage<8, 64> mUnka8a263;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeRegistry& operator=(VoxelShapeRegistry const&);
    VoxelShapeRegistry(VoxelShapeRegistry const&);
    VoxelShapeRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VoxelShapes::RegistryHandle _insertOrFindDuplicate(::VoxelShapes::VoxelShape&& shape, bool isVanillaShape);

    MCNAPI ::VoxelShapes::RegistryHandle getHandleByName(::HashedString const& name) const;

    MCNAPI bool hasName(::HashedString const& name) const;

    MCNAPI void initialize();

#ifdef LL_PLAT_C
    MCNAPI void initializeFromNetwork(
        ::std::vector<::VoxelShapes::VoxelShape> const&                            shapes,
        ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle> const& nameMap,
        ushort                                                                     customShapeCount
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _computeIsCubeShapeEquivalent(::VoxelShapes::VoxelShape const& shape);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& EMPTY_ID();

    MCNAPI static ::HashedString const& UNIT_CUBE_ID();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes
