#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
class TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TessellationPolicy();

    virtual ::mce::Color get(::Block const&) const = 0;

    virtual ::mce::Color get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TessellationPolicy() = default;

    virtual ::mce::Color
    get(::Block const&          block,
        ::BlockSource&          region,
        ::BlockPos const&       pos,
        ::BiomeTintCache const* biomeTintCache) const = 0;

    virtual ::mce::Color get(::Block const& block) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class TessellationPolicy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BiomeColorSampling
