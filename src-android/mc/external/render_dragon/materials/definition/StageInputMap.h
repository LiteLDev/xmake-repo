#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/InputSemantic.h"
#include "mc/external/render_dragon/materials/definition/SemanticDescription.h"

namespace dragon::materials::definition {

struct StageInputMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<dragon::materials::definition::SemanticDescription>> mInputs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StageInputMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials::definition
