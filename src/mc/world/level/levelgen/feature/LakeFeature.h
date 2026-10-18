#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class LakeFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString const>                                          mFluidBlock;
    ::ll::TypedStorage<8, 40, ::HashedString>                                                mBarrierBlock;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>> const> mProhibitedBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString const>                                                mFluidBlock;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                      mBarrierBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>> const> mProhibitedBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LakeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LakeFeature();
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual ~LakeFeature() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    LakeFeature(::HashedString const, ::HashedString, std::vector<std::reference_wrapper<const HashedString>> const&);
#else // @header-generator platform
    MCAPI LakeFeature(
        ::HashedString                                                       fluidBlock,
        ::HashedString                                                       barrierBlock,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& prohibitedBlocks
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::HashedString const, ::HashedString, std::vector<std::reference_wrapper<const HashedString>> const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::HashedString                                                       fluidBlock,
        ::HashedString                                                       barrierBlock,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& prohibitedBlocks
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
