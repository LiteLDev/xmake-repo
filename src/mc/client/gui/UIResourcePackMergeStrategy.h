#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class PackReport;
namespace Json { class Value; }
// clang-format on

class UIResourcePackMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>       mFileName;
    ::ll::TypedStorage<8, 8, ::Json::Value&>           mRoot;
    ::ll::TypedStorage<8, 8, std::vector<PackReport>&> mPackReports;
    // NOLINTEND

public:
    // prevent constructor by default
    UIResourcePackMergeStrategy& operator=(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIResourcePackMergeStrategy();

    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $mergeFiles(std::vector<LoadedResourceData> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class PackReport;
namespace Json { class Value; }
// clang-format on

class UIResourcePackMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>         mFileName;
    ::ll::TypedStorage<8, 8, ::Json::Value&>               mRoot;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackReport>&> mPackReports;
    // NOLINTEND

public:
    // prevent constructor by default
    UIResourcePackMergeStrategy& operator=(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);
    // NOLINTEND
};
#else // @header-generator platform
class UIResourcePackMergeStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform
