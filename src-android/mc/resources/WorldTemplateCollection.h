#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/WorldTemplateMutableInfo.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
struct WorldTemplateData;
struct WorldTemplateInfo;
// clang-format on

class WorldTemplateCollection {
public:
    // WorldTemplateCollection inner types define
    using Storage = std::vector<std::unique_ptr<const WorldTemplateInfo>>;

    using SortMethod = ::brstd::function_ref<
        bool(const std::unique_ptr<const WorldTemplateInfo>&, const std::unique_ptr<const WorldTemplateInfo>&)>;

    using Finder = ::brstd::function_ref<bool(const WorldTemplateInfo&) const, bool(const WorldTemplateInfo&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<std::vector<std::unique_ptr<const WorldTemplateInfo>>>>> mWorldTemplates;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, WorldTemplateMutableInfo>> mWorldTemplatesMutable;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateCollection& operator=(WorldTemplateCollection const&);
    WorldTemplateCollection(WorldTemplateCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldTemplateMutableInfo* getMutableInfo(::WorldTemplateInfo const&);
    // NOLINTEND
};
