#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

struct HeightProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HeightProvider();

    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
