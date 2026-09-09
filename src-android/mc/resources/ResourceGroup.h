#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/resource_processing/PreloadedPathHandle.h"
#include "mc/platform/NonCopyable.h"

class ResourceGroup : public ::Bedrock::NonCopyable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Core::Path>>                              mPaths;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Resources::PreloadedPathHandle>> mPreloadedHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceGroup& operator=(ResourceGroup const&);
    ResourceGroup(ResourceGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceGroup();

    MCNAPI ~ResourceGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
