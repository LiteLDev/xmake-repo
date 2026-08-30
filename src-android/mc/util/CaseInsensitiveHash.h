#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveHash {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong operator()(std::string_view) const;
    // NOLINTEND
};

} // namespace Util
