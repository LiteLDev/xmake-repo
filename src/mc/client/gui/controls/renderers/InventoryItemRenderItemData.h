#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

struct InventoryItemRenderItemData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mCustomId;
    ::ll::TypedStorage<4, 4, int> mItemId;
    ::ll::TypedStorage<4, 4, int> mAuxVal;
    ::ll::TypedStorage<4, 4, int> mCustomColor;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPickupTime;
    ::ll::TypedStorage<1, 1, bool> mIsShowPickup;
    ::ll::TypedStorage<1, 1, bool> mIsFiltered;
    ::ll::TypedStorage<4, 4, int> mAnimationFrame;
    ::ll::TypedStorage<1, 1, bool> mIsEnchanted;
    ::ll::TypedStorage<1, 1, bool> mHidingIcon;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<8, 24, std::string> mTextureName;
    ::ll::TypedStorage<4, 4, ::UIMaterialType> mUIMaterialType;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem> mTextureFileSystem;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet> mIcon;
    ::ll::UntypedStorage<8, 8> mItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItemInstance;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType> mItemRenderType;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryItemRenderItemData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

struct InventoryItemRenderItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                     mCustomId;
    ::ll::TypedStorage<4, 4, int>                                     mItemId;
    ::ll::TypedStorage<4, 4, int>                                     mAuxVal;
    ::ll::TypedStorage<4, 4, int>                                     mCustomColor;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mPickupTime;
    ::ll::TypedStorage<1, 1, bool>                                    mIsShowPickup;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFiltered;
    ::ll::TypedStorage<4, 4, int>                                     mAnimationFrame;
    ::ll::TypedStorage<1, 1, bool>                                    mIsEnchanted;
    ::ll::TypedStorage<1, 1, bool>                                    mHidingIcon;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                          mTextureName;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                        mUIMaterialType;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>                    mTextureFileSystem;
    ::ll::TypedStorage<8, 96, ::TextureUVCoordinateSet>               mIcon;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item>>                       mItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                           mItemInstance;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType>                   mItemRenderType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryItemRenderItemData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct InventoryItemRenderItemData {};
#endif // @header-generator platform
#endif // @header-generator platform
