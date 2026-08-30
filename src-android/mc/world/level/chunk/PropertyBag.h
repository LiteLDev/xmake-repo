#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn::transform {

class PropertyBag {
public:
    // PropertyBag inner types define
    using Entry = std::variant<ulong, double, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ulong, double, std::string>>> mValues;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mKeys;
    // NOLINTEND
};

} // namespace br::spawn::transform
