#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct DropActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk862d8e;
    ::ll::UntypedStorage<8, 40> mUnk9ae8f5;
    ::ll::UntypedStorage<1, 1>  mUnkfdec2f;
    // NOLINTEND

public:
    // prevent constructor by default
    DropActionData& operator=(DropActionData const&);
    DropActionData(DropActionData const&);
    DropActionData();
};

} // namespace ItemStackRequestCereal
