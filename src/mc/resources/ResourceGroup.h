#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#include "mc/deps/resource_processing/PreloadedPathHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/NonCopyable.h"

class ResourceGroup : public ::Bedrock::NonCopyable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Core::Path>>                              mPaths;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Resources::PreloadedPathHandle>> mPreloadedHandles;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk9bbf33;
    ::ll::UntypedStorage<8, 24> mUnkea78c4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceGroup& operator=(ResourceGroup const&);
    ResourceGroup(ResourceGroup const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ResourceGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceGroup();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~ResourceGroup();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
