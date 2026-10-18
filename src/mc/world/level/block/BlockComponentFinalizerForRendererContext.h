#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Experiments;
#endif // @header-generator platform
class AtlasItemManager;
class BlockCullingGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class Experiments;
#else // @header-generator platform
#endif // @header-generator platform
class GeometryGroup;
class TextureShiftManager;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

struct BlockComponentFinalizerForRendererContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::SchematicsRepository&> mSchematicsRepo;
    ::ll::TypedStorage<8, 8, ::GeometryGroup&>                             mGeometryGroup;
    ::ll::TypedStorage<8, 8, ::BlockCullingGroup&>                         mBlockCullingGroup;
    ::ll::TypedStorage<8, 8, ::AtlasItemManager const&>                    mAtlasItemManager;
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::MaterialRepository&>   mMaterialRepository;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                         mExperiments;
    ::ll::TypedStorage<8, 8, ::TextureShiftManager const&>                 mTextureShiftManager;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFinalizerForRendererContext& operator=(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockComponentFinalizerForRendererContext(
        ::ClientBlockPipeline::SchematicsRepository&,
        ::GeometryGroup&,
        ::BlockCullingGroup&,
        ::AtlasItemManager const&,
        ::ClientBlockPipeline::MaterialRepository&,
        ::Experiments const&,
        ::TextureShiftManager const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ClientBlockPipeline::SchematicsRepository&,
        ::GeometryGroup&,
        ::BlockCullingGroup&,
        ::AtlasItemManager const&,
        ::ClientBlockPipeline::MaterialRepository&,
        ::Experiments const&,
        ::TextureShiftManager const&
    );
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
