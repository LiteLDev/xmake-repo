#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StructureType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> type;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureType& operator=(StructureType const&);
};

} // namespace br
