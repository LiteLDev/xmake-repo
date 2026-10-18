#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/item/ItemDescriptor.h"

struct FeedItem {
public:
    // FeedItem inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FeedItem inner types define
    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     descriptionId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   descriptionId;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>              id;
        ::ll::TypedStorage<4, 4, ::EffectDuration> duration;
        ::ll::TypedStorage<4, 4, int>              amplifier;
        ::ll::TypedStorage<4, 4, float>            chance;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>              mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>              mResultItem;
    ::ll::TypedStorage<4, 4, int>                            mValue;
    ::ll::TypedStorage<8, 24, std::vector<FeedItem::Effect>> mEffects;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                  mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                  mResultItem;
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem::Effect>> mEffects;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FeedItem(::FeedItem const&);

    MCNAPI void addEffect(::FeedItem::Effect const&);

    MCNAPI ~FeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void addEffect(::FeedItem::Effect const& effect);
#endif // @header-generator platform
    // NOLINTEND
};
