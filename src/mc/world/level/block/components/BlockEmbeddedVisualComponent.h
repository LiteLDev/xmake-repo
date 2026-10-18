#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryComponent;
struct BlockMaterialInstancesComponent;
// clang-format on

struct BlockEmbeddedVisualComponent {
public:
    // BlockEmbeddedVisualComponent inner types define
    enum class Correction : uchar {
        None              = 0,
        FlowerPotPreR26U2 = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockGeometryComponent>>          mGeometry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockMaterialInstancesComponent>> mMaterialInstances;
    ::ll::TypedStorage<1, 1, ::BlockEmbeddedVisualComponent::Correction>       mCorrection;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGeometryComponent>>          mGeometry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockMaterialInstancesComponent>> mMaterialInstances;
    ::ll::TypedStorage<1, 1, ::BlockEmbeddedVisualComponent::Correction>           mCorrection;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockEmbeddedVisualComponent& operator=(BlockEmbeddedVisualComponent const&);
    BlockEmbeddedVisualComponent(BlockEmbeddedVisualComponent const&);
    BlockEmbeddedVisualComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
