#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/HeightProvider.h"
#include "mc/world/level/levelgen/v2/VerticalAnchor.h"

// auto generated forward declare list
// clang-format off
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { class VerticalAnchor; }
#endif // @header-generator platform
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class ConstantHeight : public ::br::worldgen::HeightProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::br::worldgen::VerticalAnchor> mAnchor;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ConstantHeight();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ConstantHeight();

    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const& heightAccessor) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const;
#else // @header-generator platform
    MCAPI int $sample(::IRandom&, ::br::worldgen::WorldGenContext const& heightAccessor) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
