#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveCompare {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator()(std::string_view, std::string_view) const;
    // NOLINTEND
};

} // namespace Util
