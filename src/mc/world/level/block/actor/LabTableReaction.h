#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class LabTableReactionComponent;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LabTableReaction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                      mLifetime;
    ::ll::TypedStorage<4, 4, int>                                                      mMaxLifetime;
    ::ll::TypedStorage<4, 4, int>                                                      mStartDelay;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStack>>                               mResultItem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockPos>>                                mPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Random>>                                  mRandom;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LabTableReactionComponent>>> mComponents;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType>                                   mType;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsClientSide;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                            mLifetime;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxLifetime;
    ::ll::TypedStorage<4, 4, int>                                                            mStartDelay;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStack>>                                 mResultItem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPos>>                                  mPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Random>>                                    mRandom;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LabTableReactionComponent>>> mComponents;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType>                                         mType;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsClientSide;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LabTableReaction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LabTableReaction();
#else // @header-generator platform
    virtual ~LabTableReaction() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addComponent(std::unique_ptr<LabTableReactionComponent>);

    MCNAPI void addResultItem(::ItemStack const&);

    MCNAPI int getReactionId();

    MCNAPI ::LabTableReactionType getType();

    MCNAPI bool tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void addResultItem(::ItemStack const& resultItem);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LabTableReaction> createReaction(::LabTableReactionType, ::BlockPos const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::LabTableReaction>
    createReaction(::LabTableReactionType type, ::BlockPos const& pos, bool isClientSide);
#endif // @header-generator platform
    // NOLINTEND
};
