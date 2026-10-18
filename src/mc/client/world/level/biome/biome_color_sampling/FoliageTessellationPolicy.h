#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/biome_color_sampling/TessellationPolicy.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/biome_color_sampling/TessellationPolicy.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BiomeColorSampling {

#if defined(LL_PLAT_A) // @header-generator platform
class FoliageTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TintMethod>                                            mTintMethod;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(const Biome&, const BlockPos&)>> mSampler;
    // NOLINTEND

public:
    // prevent constructor by default
    FoliageTessellationPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FoliageTessellationPolicy();

    virtual ::mce::Color get(::Block const&) const;

    virtual ::mce::Color get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $get(::Block const&) const;

    MCNAPI ::mce::Color $get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FoliageTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TintMethod>                                                mTintMethod;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(::Biome const&, ::BlockPos const&)>> mSampler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color
    get(::Block const&          block,
        ::BlockSource&          region,
        ::BlockPos const&       pos,
        ::BiomeTintCache const* biomeTintCache) const /*override*/;

    virtual ::mce::Color get(::Block const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $get(
        ::Block const&          block,
        ::BlockSource&          region,
        ::BlockPos const&       pos,
        ::BiomeTintCache const* biomeTintCache
    ) const;

    MCAPI ::mce::Color $get(::Block const&) const;
    // NOLINTEND
};
#else // @header-generator platform
class FoliageTessellationPolicy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BiomeColorSampling
