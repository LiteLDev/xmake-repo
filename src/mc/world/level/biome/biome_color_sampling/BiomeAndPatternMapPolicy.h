#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/biome_color_sampling/MapPolicy.h"

// auto generated forward declare list
// clang-format off
class Biome;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class BiomeAndPatternMapPolicy : public ::BiomeColorSampling::MapPolicy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(const Biome&, const BlockPos&)> const> mSampler;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos> const>                                  mPattern;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(::Biome const&, ::BlockPos const&)> const> mSampler;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos> const>                                  mPattern;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BiomeAndPatternMapPolicy();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BiomeAndPatternMapPolicy();

    virtual ::mce::Color get(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::mce::Color get(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $get(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::mce::Color $get(::BlockSource& region, ::BlockPos const& pos) const;
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

} // namespace BiomeColorSampling
