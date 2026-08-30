#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/UvGenerationType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { class UvTransform; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class MaterialOverrideStep : public ::ClientBlockPipeline::Step {
public:
    // MaterialOverrideStep inner types define
    using MaterialPtr = ::Bedrock::NonOwnerPointer<const ClientBlockPipeline::Material>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                       mMaterialOverride;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::UvGenerationType> mUvGenerationType;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialOverrideStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialOverrideStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _runUvGeneration(
        ::ClientBlockPipeline::QuadIndicesFaceAttributes const&,
        ::ClientBlockPipeline::PositionVertexAttributes const&,
        ::ClientBlockPipeline::FaceNormalAttributes const&,
        ::ClientBlockPipeline::ImageUvFaceAttributes&
    ) const;
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

} // namespace ClientBlockPipeline
