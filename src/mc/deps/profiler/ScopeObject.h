#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/ScopeStackStorage.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class AnnotationToken; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Core::Profile::AnnotationToken*>      mToken;
    ::ll::TypedStorage<1, 1, bool>                                   mEntered;
    ::ll::TypedStorage<8, 16, ::Bedrock::Profile::ScopeStackStorage> mScopeStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke3b426;
    ::ll::UntypedStorage<1, 1>  mUnkc9b54d;
    ::ll::UntypedStorage<8, 16> mUnk12a464;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeObject& operator=(ScopeObject const&);
    ScopeObject(ScopeObject const&);
    ScopeObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopeObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
