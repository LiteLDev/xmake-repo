#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BoxFaceSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mExists;
    ::ll::TypedStorage<1, 1, uchar>                               mCullAgainst;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform> mUvTransform;
    ::ll::UntypedStorage<1, 2>                                    mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                mCullAgainstFullAndOpaque;
    ::ll::TypedStorage<4, 4, int>                                 mMaterialInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxFaceSchematic(BoxFaceSchematic const&);
    BoxFaceSchematic();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BoxFaceSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mExists;
    ::ll::TypedStorage<1, 1, uchar>                                                       mCullAgainst;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform>                         mUvTransform;
    ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
    ::ll::TypedStorage<4, 4, int>                                                         mMaterialInstanceId;
    // NOLINTEND
};
#else // @header-generator platform
struct BoxFaceSchematic {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
