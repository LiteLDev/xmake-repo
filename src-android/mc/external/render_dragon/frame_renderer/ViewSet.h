#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

class ViewSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ushort> const> mSets;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewSet& operator=(ViewSet const&);
};

} // namespace dragon::framerenderer
