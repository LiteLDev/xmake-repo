#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/biome_color_sampling/TessellationPolicy.h"

// auto generated forward declare list
// clang-format off
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

// auto generated forward declare list
// clang-format off
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
class WhiteTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WhiteTessellationPolicy();

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
class WhiteTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const
        /*override*/;

    virtual ::mce::Color get(::Block const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const;

    MCFOLD ::mce::Color $get(::Block const&) const;
    // NOLINTEND
};
#else // @header-generator platform
class WhiteTessellationPolicy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BiomeColorSampling
