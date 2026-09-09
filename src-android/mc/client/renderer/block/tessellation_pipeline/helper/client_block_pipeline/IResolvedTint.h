#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

struct IResolvedTint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResolvedTint();

    virtual ::mce::Color const& get(int, uchar) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
