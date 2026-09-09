#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeStackStorage.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class AnnotationToken; }
// clang-format on

namespace Core::Profile {

class ScopeObject {
public:
    // ScopeObject inner types declare
    // clang-format off
    struct ExplicitlyInvalid;
    // clang-format on

    // ScopeObject inner types define
    struct ExplicitlyInvalid {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Core::Profile::AnnotationToken*>      mToken;
    ::ll::TypedStorage<1, 1, bool>                                   mEntered;
    ::ll::TypedStorage<8, 16, ::Bedrock::Profile::ScopeStackStorage> mScopeStorage;
    // NOLINTEND
};

} // namespace Core::Profile
