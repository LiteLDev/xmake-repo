#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct ChunkStructureAccess {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ChunkStructureAccess();
#else // @header-generator platform
    virtual ~ChunkStructureAccess() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const br::worldgen::StructureInstance> getStructureInstance(::br::worldgen::Structure const&) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::br::worldgen::StructureInstance const>
    getStructureInstance(::br::worldgen::Structure const& structure) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStructureInstance(::br::worldgen::Structure const&, std::shared_ptr<br::worldgen::StructureInstance>) = 0;
#else // @header-generator platform
    virtual void setStructureInstance(
        ::br::worldgen::Structure const&                     structure,
        ::std::shared_ptr<::br::worldgen::StructureInstance> instance
    ) = 0;
#endif // @header-generator platform

    virtual ::ChunkPos getPos() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
