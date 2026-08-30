#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
// clang-format on

struct WorldContentItemCollectionsModel {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mSelectedResourcePackCollection;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mAvailableResourcePackCollection;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mMarketplacePassResourcePackCollection;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mSelectedBehaviorPackCollection;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mAvailableBehaviorPackCollection;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>> mMarketplacePassBehaviorPackCollection;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldContentItemCollectionsModel& operator=(WorldContentItemCollectionsModel const&);
};
