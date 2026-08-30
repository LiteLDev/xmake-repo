#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/DoublePlantBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Player;
class Random;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class DoubleSaplingBlock : public ::DoublePlantBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // prevent constructor by default
    DoubleSaplingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DoubleSaplingBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DoubleSaplingBlock(
        std::string const&,
        int,
        std::optional<std::string> const&,
        std::optional<std::string> const&,
        std::optional<std::string> const&
    );

    MCNAPI std::optional<BlockPos> _getQuadrupleSaplingOffset(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        int,
        std::optional<std::string> const&,
        std::optional<std::string> const&,
        std::optional<std::string> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
