#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/FacetPlayerData.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPlayersFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesPlayersFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RealmsStories::FacetPlayerData>>  mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                       mFetchMembersPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                       mFetchOnlineMembersPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                        mManageMembersPrevState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::UntypedStorage<8, 24>                                                    mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                 mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPlayersFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPlayersFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesPlayersFacet(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>
    );

    MCNAPI ::Realms::Stories::FetchStatus _getFetchMembersStatus() const;

    MCNAPI ::Realms::Stories::FetchStatus _getFetchOnlineMembersStatus() const;

    MCNAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
