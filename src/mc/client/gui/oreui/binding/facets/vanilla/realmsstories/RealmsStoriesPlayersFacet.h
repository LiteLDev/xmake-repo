#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetPlayerData; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsStoriesPlayersFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesPlayersFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetPlayerData>>  mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                           mFetchMembersPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                           mFetchOnlineMembersPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                            mManageMembersPrevState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPlayersFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPlayersFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPlayersFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::Realms::Stories::FetchStatus _getFetchMembersStatus() const;

    MCAPI ::Realms::Stories::FetchStatus _getFetchOnlineMembersStatus() const;

    MCAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsStoriesPlayersFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
