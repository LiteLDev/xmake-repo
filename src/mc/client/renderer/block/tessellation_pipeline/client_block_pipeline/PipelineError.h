#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct PipelineError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    PipelineError& operator=(PipelineError const&);
    PipelineError();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PipelineError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mError;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PipelineError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PipelineError {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
