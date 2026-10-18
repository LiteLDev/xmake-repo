#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BlockSource;
// clang-format on

namespace ItemBlockRenderHelpers {

struct DrawItemArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>                   mRenderContext;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                              mRegion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mPos;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItemInstance;
    ::ll::TypedStorage<8, 8, ::Actor*>                                    mDisplayEntity;
    ::ll::TypedStorage<8, 8, long>                                        mUniqueId;
    ::ll::TypedStorage<4, 4, float>                                       mFrameAlpha;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::ItemTransforms::Type> mType;
    ::ll::TypedStorage<1, 1, bool>                                        mIgnoreLighting;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawItemArguments& operator=(DrawItemArguments const&);
    DrawItemArguments(DrawItemArguments const&);
    DrawItemArguments();
};

} // namespace ItemBlockRenderHelpers
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
