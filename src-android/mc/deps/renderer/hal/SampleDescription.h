#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class SampleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> count;
    ::ll::TypedStorage<8, 8, long> quality;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::mce::SampleDescription const&) const;
    // NOLINTEND
};

} // namespace mce
