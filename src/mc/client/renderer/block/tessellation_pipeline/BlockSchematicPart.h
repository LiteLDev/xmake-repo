#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/BoxSchematic.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BoxSchematic; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockSchematicPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::BoxSchematic>> mBoxes;
    ::ll::TypedStorage<8, 24, std::string>                                    mName;
    ::ll::TypedStorage<1, 1, uchar>                                           mCullPart;
    ::ll::UntypedStorage<1, 2>                                                mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                            mCullAgainstFullAndOpaque;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSchematicPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::BlockSchematicPart& operator=(::ClientBlockPipeline::BlockSchematicPart&&);

    MCNAPI ~BlockSchematicPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BlockSchematicPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::BoxSchematic>>         mBoxes;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mName;
    ::ll::TypedStorage<1, 1, uchar>                                                       mCullPart;
    ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockSchematicPart {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
