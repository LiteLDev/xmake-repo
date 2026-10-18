#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/ConstantHeight.h"
#include "mc/world/level/levelgen/v2/HeightProvider.h"
#include "mc/world/level/levelgen/v2/UniformHeight.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class StructureHeightProvider : public ::br::worldgen::HeightProvider {
public:
    // StructureHeightProvider inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Data = std::variant<br::worldgen::ConstantHeight, br::worldgen::UniformHeight>;
#else // @header-generator platform
    using Data = ::std::variant<::br::worldgen::ConstantHeight, ::br::worldgen::UniformHeight>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::variant<br::worldgen::ConstantHeight, br::worldgen::UniformHeight>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::variant<::br::worldgen::ConstantHeight, ::br::worldgen::UniformHeight>> mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureHeightProvider();

    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::br::worldgen::HeightProvider const* operator->() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const;
#else // @header-generator platform
    MCAPI int $sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
