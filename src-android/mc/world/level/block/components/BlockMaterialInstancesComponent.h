#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/components/BlockMaterialInstance.h"

// auto generated forward declare list
// clang-format off
struct BlockMaterialInstancesDescription;
// clang-format on

struct BlockMaterialInstancesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BlockMaterialInstance>> mMaterials;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockMaterialInstancesComponent(::BlockMaterialInstancesDescription const&);

    MCNAPI ::BlockRenderLayer getRenderLayer() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockMaterialInstancesDescription const&);
    // NOLINTEND
};
