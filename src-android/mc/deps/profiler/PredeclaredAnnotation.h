#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class AnnotationToken; }
// clang-format on

namespace Bedrock::Profiler::details {

struct PredeclaredAnnotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Profile::AnnotationToken>> mToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PredeclaredAnnotation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PredeclaredAnnotation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profiler::details
