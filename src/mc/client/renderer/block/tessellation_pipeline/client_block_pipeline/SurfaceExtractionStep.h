#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Matrix;
class Vec3;
namespace BlockGeoType { class GeoTypeResolver; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BoxSchematic; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlock; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
namespace ClientBlockPipeline { struct GeoTypeVertexAttributes; }
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
namespace ClientBlockPipeline { struct PartialFaceCount; }
namespace ClientBlockPipeline { struct PartialOpaqueFullBlock; }
namespace ClientBlockPipeline { struct PartialOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
namespace ClientBlockPipeline { struct TextureShiftNoiseCache; }
namespace ClientBlockPipeline { struct TextureShiftNoiseVertexAttributes; }
namespace ClientBlockPipeline { struct TintFaceAttributes; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
namespace BlockGeoType { class GeoTypeResolver; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct BlockLookupData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class SurfaceExtractionStep : public ::ClientBlockPipeline::Step {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceExtractionStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addUvTransformsForUnitCubes(
        ::ClientBlockPipeline::BoxSchematic const*,
        ::Flip,
        uchar,
        ::ClientBlockPipeline::ImageUvFaceAttributes&
    );

    MCNAPI static ::Matrix _getUnitCubeWorldTransform(::ClientBlockPipeline::BlockLookupData const&, ::Vec3 const&);

    MCNAPI static void addFaceMaterial(
        ::ClientBlockPipeline::
            VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId> const&,
        ::ClientBlockPipeline::BlockLookupId,
        uchar,
        ::ClientBlockPipeline::IResolvedTint const&,
        ::ClientBlockPipeline::MaterialFaceAttributes&,
        ::ClientBlockPipeline::TintFaceAttributes&,
        float
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockGeoType::GeoTypeResolver& mGeoTypeResolver();

    MCNAPI static float& mLastPositionRandom();

    MCNAPI static ::ClientBlockPipeline::Material const*& mLastResolvedMaterial();

    MCNAPI static uchar& mLastTextureIndex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SurfaceExtractionStep : public ::ClientBlockPipeline::Step {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Matrix
    _getUnitCubeWorldTransform(::ClientBlockPipeline::BlockLookupData const& blockData, ::Vec3 const& localPosition);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockGeoType::GeoTypeResolver& mGeoTypeResolver();

    MCAPI static float& mLastPositionRandom();

    MCAPI static ::ClientBlockPipeline::Material const*& mLastResolvedMaterial();

    MCAPI static uchar& mLastTextureIndex();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const& inputs) const;
    // NOLINTEND
};
#else // @header-generator platform
class SurfaceExtractionStep {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
