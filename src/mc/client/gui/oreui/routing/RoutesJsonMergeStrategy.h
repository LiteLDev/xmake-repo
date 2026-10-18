#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
struct PackIdVersion;
struct PackInstanceId;
namespace OreUI { struct RouteData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
struct PackIdVersion;
namespace OreUI { struct RouteData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RoutesJsonMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<OreUI::RouteData>&>     mRoutes;
    ::ll::TypedStorage<8, 8, std::vector<PackIdVersion>&>        mRoutesMetadata;
    ::ll::TypedStorage<8, 8, std::vector<PackInstanceId> const&> mFullStackMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutesJsonMergeStrategy& operator=(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RoutesJsonMergeStrategy();

    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RoutesJsonMergeStrategy(
        std::vector<OreUI::RouteData>&,
        std::vector<PackIdVersion>&,
        std::vector<PackInstanceId> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<OreUI::RouteData>&, std::vector<PackIdVersion>&, std::vector<PackInstanceId> const&);
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
class RoutesJsonMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::OreUI::RouteData>&>     mRoutes;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackIdVersion>&>        mRoutesMetadata;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackInstanceId> const&> mFullStackMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutesJsonMergeStrategy& operator=(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy();

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RoutesJsonMergeStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
