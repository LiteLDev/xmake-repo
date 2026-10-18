#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::Legacy {

struct ComponentItemData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                      mBlockType;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                       mTags;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                      mCreativeGroup;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                      mHoverTextColorFormat;
    ::ll::TypedStorage<4, 8, std::optional<float>>                             mSpeed;
    ::ll::TypedStorage<4, 8, std::optional<int>>                               mMaxUseDuration;
    ::ll::TypedStorage<4, 8, std::optional<int>>                               mDamage;
    ::ll::TypedStorage<4, 8, std::optional<int>>                               mEnchantValue;
    ::ll::TypedStorage<4, 8, std::optional<int>>                               mFrameCount;
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::CreativeItemCategory>> mCreativeCategory;
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::Legacy::UseAnimation>> mUseAnim;
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::EnchantSlot>>          mEnchantSlot;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                             mMaxStackSize;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mIsStackedByData;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mHandEquipped;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mIsLiquidClipped;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mIsGlint;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mAllowOffhand;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mCanDestroyInCreative;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mAnimatesInToolbar;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mShouldDespawn;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                              mRequiresInteract;
    ::ll::UntypedStorage<8, 24>                                                mItemJsonData;
    ::ll::UntypedStorage<8, 24>                                                mEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mBlockType;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                       mTags;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mCreativeGroup;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mHoverTextColorFormat;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                               mSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mMaxUseDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mDamage;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mEnchantValue;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mFrameCount;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::CreativeItemCategory>> mCreativeCategory;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::UseAnimation>> mUseAnim;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::EnchantSlot>>          mEnchantSlot;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                               mMaxStackSize;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsStackedByData;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mHandEquipped;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsLiquidClipped;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsGlint;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mAllowOffhand;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mCanDestroyInCreative;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mAnimatesInToolbar;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mShouldDespawn;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mRequiresInteract;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>                      mItemJsonData;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>                      mEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComponentItemData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItemData(::SharedTypes::Legacy::ComponentItemData const&);
#else // @header-generator platform
    MCAPI ComponentItemData(::SharedTypes::Legacy::ComponentItemData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ComponentItemData& operator=(::SharedTypes::Legacy::ComponentItemData&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ComponentItemData& operator=(::SharedTypes::Legacy::ComponentItemData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ComponentItemData& operator=(::SharedTypes::Legacy::ComponentItemData const&);
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ComponentItemData& operator=(::SharedTypes::Legacy::ComponentItemData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::Legacy::ComponentItemData const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::Legacy::ComponentItemData const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ComponentItemData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~ComponentItemData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::ComponentItemData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::ComponentItemData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
