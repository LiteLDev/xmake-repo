#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class StepResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Inputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::any>> mInputs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Inputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class Inputs {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
