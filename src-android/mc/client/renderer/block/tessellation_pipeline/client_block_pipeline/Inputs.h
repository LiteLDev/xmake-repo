#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class StepResult; }
// clang-format on

namespace ClientBlockPipeline {

class Inputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::any>> mInputs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Inputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
