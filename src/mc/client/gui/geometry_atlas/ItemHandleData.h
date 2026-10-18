#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct ItemHandleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                     mBag;
    ::ll::UntypedStorage<8, 64>                     mVisitItem;
    ::ll::TypedStorage<8, 8, ulong>                 mHash;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType> mRenderType;
    ::ll::TypedStorage<1, 1, bool>                  mIsAnimated;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ItemHandleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PropertyBag>> mBag;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            void(::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)>) const>>
                                                    mVisitItem;
    ::ll::TypedStorage<8, 8, uint64>                mHash;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType> mRenderType;
    ::ll::TypedStorage<1, 1, bool>                  mIsAnimated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemHandleData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ItemHandleData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
