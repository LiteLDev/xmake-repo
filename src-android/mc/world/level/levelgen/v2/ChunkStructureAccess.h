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
    // clang-format off
    virtual ~ChunkStructureAccess();

    virtual std::shared_ptr<const br::worldgen::StructureInstance> getStructureInstance(::br::worldgen::Structure const&) const = 0;

    virtual void setStructureInstance(::br::worldgen::Structure const&, std::shared_ptr<br::worldgen::StructureInstance>) = 0;

    virtual ::ChunkPos getPos() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
