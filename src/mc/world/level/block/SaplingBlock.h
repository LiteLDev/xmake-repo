#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class SaplingBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mQuadrupleSaplingTree;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SaplingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SaplingBlock();
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
#else // @header-generator platform
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fertilizerType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SaplingBlock(
        std::string const&,
        int,
        std::optional<std::string>,
        std::optional<std::string>,
        std::optional<std::string>
#else // @header-generator platform
    MCAPI SaplingBlock(
        ::std::string const&           nameId,
        int                            id,
        ::std::optional<::std::string> singleSaplingTree,
        ::std::optional<::std::string> singleSaplingTreeWithBeehive,
        ::std::optional<::std::string> quadrupleSaplingTree
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> _getQuadrupleSaplingOffset(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos>
    _getQuadrupleSaplingOffset(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::string const&, int, std::optional<std::string>, std::optional<std::string>, std::optional<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&           nameId,
        int                            id,
        ::std::optional<::std::string> singleSaplingTree,
        ::std::optional<::std::string> singleSaplingTreeWithBeehive,
        ::std::optional<::std::string> quadrupleSaplingTree
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
#else // @header-generator platform
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fertilizerType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
