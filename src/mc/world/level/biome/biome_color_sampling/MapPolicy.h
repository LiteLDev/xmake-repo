#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class MapPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MapPolicy();
#else // @header-generator platform
    virtual ~MapPolicy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color get(::BlockSource&, ::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::mce::Color get(::BlockSource& region, ::BlockPos const& pos) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BiomeColorSampling
