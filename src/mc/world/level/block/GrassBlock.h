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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const> mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>>    mSideColors;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>  mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>> mSideColors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GrassBlock();
#else // @header-generator platform
    virtual bool _plantGrass(::BlockSource& region, ::BlockPos const& abovePos, ::IRandom& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _plantGrass(::BlockSource&, ::BlockPos const&, ::IRandom&) const;

    virtual bool _shouldStopRandomWalk(::BlockSource&, ::BlockPos&) const;
#else // @header-generator platform
    virtual bool _shouldStopRandomWalk(::BlockSource& region, ::BlockPos& pos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GrassBlock(std::string const&, int);
#else // @header-generator platform
    MCAPI GrassBlock(::std::string const& nameId, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int calcVariant(::BlockSource&, ::BlockPos const&, ::mce::Color const&) const;

    MCNAPI void initSideColorsFromAtlas(std::vector<mce::Color>) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCAPI void initSideColorsFromAtlas(::std::vector<::mce::Color> colors) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_plantGrass(::BlockSource&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    MCAPI bool $_plantGrass(::BlockSource& region, ::BlockPos const& abovePos, ::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldStopRandomWalk(::BlockSource&, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI bool $_shouldStopRandomWalk(::BlockSource& region, ::BlockPos& pos) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
