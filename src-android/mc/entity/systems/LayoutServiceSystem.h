#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/services/FabBaseDiscriminator.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LayoutService;
namespace Bedrock::Services { template<typename T0, auto T1> class Discriminated; }
namespace Bedrock::Services::layout::model { struct BannerFab; }
namespace Bedrock::Services::layout::model { struct ExperienceFab; }
namespace Bedrock::Services::layout::model { struct ExperienceListFab; }
namespace Bedrock::Services::layout::model { struct ExperiencePdpFab; }
namespace Bedrock::Services::layout::model { struct FabBase; }
namespace Bedrock::Services::layout::model { struct LayoutResponseData; }
namespace Bedrock::Services::layout::model { struct SimpleAnnouncementFab; }
namespace Bedrock::Services::layout::model { struct StandardMarketplaceItemListFab; }
// clang-format on

class LayoutServiceSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LayoutServiceSystem inner types declare
    // clang-format off
    struct CachedLayout;
    struct CachedFab;
    // clang-format on

    // LayoutServiceSystem inner types define
    struct CachedLayout {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 136> data;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> cachedAt;
        // clang-format on
        // NOLINTEND
    };

    struct CachedFab {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 416> data;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> cachedAt;
        // clang-format on
        // NOLINTEND
    };

    using FabVariant = std::variant<
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::FabBase,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)0>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::ExperienceFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)1>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::ExperiencePdpFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)2>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::BannerFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)3>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::ExperienceListFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)4>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::SimpleAnnouncementFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)5>,
        Bedrock::Services::Discriminated<
            Bedrock::Services::layout::model::StandardMarketplaceItemListFab,
            (Bedrock::Services::layout::model::FabBaseDiscriminator)6>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                   mLayoutService;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                                       mTaskGroup;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LayoutServiceSystem::CachedLayout>> mLayoutCache;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LayoutServiceSystem::CachedFab>>    mFabCache;
    // NOLINTEND
};
