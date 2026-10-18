#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Status.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Instance; }
namespace ClientBlockPipeline { class Step; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Status.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Instance; }
namespace ClientBlockPipeline { class Step; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace ClientBlockPipeline {

class Description {
public:
    // Description inner types declare
    // clang-format off
    struct BakedStep;
    // clang-format on

    // Description inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct BakedStep {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>               mStepId;
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mDependencies;
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mDependants;
        // NOLINTEND

    public:
        // prevent constructor by default
        BakedStep& operator=(BakedStep const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI BakedStep(::ClientBlockPipeline::Description::BakedStep const&);

        MCNAPI ~BakedStep();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ClientBlockPipeline::Description::BakedStep const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ClientBlockPipeline::Step>>> mSteps;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ClientBlockPipeline::Step>>> mOutputs;
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::Description::BakedStep>>      mBakedSteps;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                                 mRenderChunkPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Description();

    MCNAPI explicit Description(::SubChunkPos const&);

    MCNAPI ::ClientBlockPipeline::Status _addStepDependency(ulong, ulong);

    MCNAPI ::ClientBlockPipeline::Description::BakedStep const*
    _findBakedStep(::ClientBlockPipeline::Step const&) const;

    MCNAPI ::ClientBlockPipeline::Status addDependency(
        std::shared_ptr<const ClientBlockPipeline::Step>,
        std::shared_ptr<const ClientBlockPipeline::Step>
    );

    MCNAPI std::unique_ptr<ClientBlockPipeline::Instance> makeInstance() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SubChunkPos const&);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct BakedStep {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                 mStepId;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mDependencies;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mDependants;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Step const>>> mSteps;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Step const>>> mOutputs;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::Description::BakedStep>>        mBakedSteps;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                                       mRenderChunkPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::Status _checkForCycles(uint64 stepId) const;

    MCAPI ::ClientBlockPipeline::Status addDependency(
        ::std::shared_ptr<::ClientBlockPipeline::Step const> step,
        ::std::shared_ptr<::ClientBlockPipeline::Step const> dependency
    );

    MCAPI ::std::unique_ptr<::ClientBlockPipeline::Instance> makeInstance() const;

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct BakedStep {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ClientBlockPipeline
