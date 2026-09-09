#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/block/GrassBlockBase.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
// clang-format on

class GrassBlock : public ::GrassBlockBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const> mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>>    mSideColors;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrassBlock();

    virtual bool _plantGrass(::BlockSource&, ::BlockPos const&, ::IRandom&) const;

    virtual bool _shouldStopRandomWalk(::BlockSource&, ::BlockPos&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrassBlock(std::string const&, int);

    MCNAPI int calcVariant(::BlockSource&, ::BlockPos const&, ::mce::Color const&) const;

    MCNAPI void initSideColorsFromAtlas(std::vector<mce::Color>) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_plantGrass(::BlockSource&, ::BlockPos const&, ::IRandom&) const;

    MCNAPI bool $_shouldStopRandomWalk(::BlockSource&, ::BlockPos&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
