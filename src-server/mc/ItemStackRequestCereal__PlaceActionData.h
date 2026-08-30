#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct PlaceActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkdb53b9;
    ::ll::UntypedStorage<8, 40> mUnk10bd8f;
    ::ll::UntypedStorage<8, 40> mUnk72c465;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceActionData& operator=(PlaceActionData const&);
    PlaceActionData(PlaceActionData const&);
    PlaceActionData();
};

} // namespace ItemStackRequestCereal
