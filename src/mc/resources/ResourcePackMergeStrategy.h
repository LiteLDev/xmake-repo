#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LoadedResourceData;
// clang-format on

class ResourcePackMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackMergeStrategy();

    virtual void mergeFiles(std::vector<LoadedResourceData> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LoadedResourceData;
// clang-format on

class ResourcePackMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackMergeStrategy() = default;

    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ResourcePackMergeStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform
