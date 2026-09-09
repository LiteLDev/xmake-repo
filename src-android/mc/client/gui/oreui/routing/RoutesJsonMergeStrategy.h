#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
struct PackIdVersion;
struct PackInstanceId;
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
