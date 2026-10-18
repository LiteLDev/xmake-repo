#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class AnnotationToken; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiler::details {

struct PredeclaredAnnotation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Profile::AnnotationToken>> mToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkead3f3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PredeclaredAnnotation& operator=(PredeclaredAnnotation const&);
    PredeclaredAnnotation(PredeclaredAnnotation const&);
#endif // @header-generator platform
    PredeclaredAnnotation();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Profiler::details
