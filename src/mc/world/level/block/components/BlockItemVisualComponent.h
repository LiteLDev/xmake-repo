#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryComponent;
struct BlockMaterialInstancesComponent;
// clang-format on

struct BlockItemVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockGeometryComponent>>          mGeometryComponent;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockMaterialInstancesComponent>> mMaterialInstanceComponent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGeometryComponent>>          mGeometryComponent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockMaterialInstancesComponent>> mMaterialInstanceComponent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockItemVisualComponent& operator=(BlockItemVisualComponent const&);
    BlockItemVisualComponent(BlockItemVisualComponent const&);
    BlockItemVisualComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
