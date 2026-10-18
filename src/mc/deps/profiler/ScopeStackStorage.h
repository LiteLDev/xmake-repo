#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/Whisker_ScopeStackStorage.h"
#include "mc/deps/profiler/platform/Tracy_ScopeStackStorage.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profile {

class ScopeStackStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Bedrock::Profile::Tracy_ScopeStackStorage>   mTracy;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profile::Whisker_ScopeStackStorage> mWhisker;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk1b8b6b;
    ::ll::UntypedStorage<8, 8> mUnkf6d55c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScopeStackStorage& operator=(ScopeStackStorage const&);
    ScopeStackStorage(ScopeStackStorage const&);
    ScopeStackStorage();
#endif // @header-generator platform
};

} // namespace Bedrock::Profile
