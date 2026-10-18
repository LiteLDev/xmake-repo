#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/components/BlockMaterialInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockMaterialInstance;
#endif // @header-generator platform
struct BlockMaterialInstancesDescription;
// clang-format on

struct BlockMaterialInstancesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BlockMaterialInstance>> mMaterials;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockMaterialInstance>> mMaterials;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&);
#else // @header-generator platform
    BlockMaterialInstancesComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockMaterialInstancesComponent(::BlockMaterialInstancesDescription const&);

    MCNAPI ::BlockRenderLayer getRenderLayer() const;
#else // @header-generator platform
    MCAPI explicit BlockMaterialInstancesComponent(
        ::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockMaterialInstancesDescription const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription);
#endif // @header-generator platform
    // NOLINTEND
};
