#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesReportsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesReportsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::RealmsFeedModeration>> mFeedModerationManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsStoriesReportsCommandsFacet(std::shared_ptr<Realms::Stories::RealmsFeedModeration>);

    MCNAPI void _clearDeletionStatuses();

    MCNAPI void _clearReportFeedStatus();

    MCNAPI void _clearReportStatuses(std::string const&);

    MCNAPI void _dismiss(std::string const&, std::string const&);

    MCNAPI void _fetchReportImage(std::string const&);

    MCNAPI void _fetchReportPaths();

    MCNAPI void _loadReportsSlice(int, int);

    MCNAPI void _reportFeedItemToXbox(std::string const&, std::string const&, std::string const&);

    MCNAPI void _reportGamertagToXbox(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void _reset();

    MCNAPI void _retryLoadItem(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::Stories::RealmsFeedModeration>);
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
class RealmsStoriesReportsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesReportsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModerationManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsStoriesReportsCommandsFacet(
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration
    );

    MCAPI void _clearDeletionStatuses();

    MCAPI void _clearReportFeedStatus();

    MCAPI void _clearReportStatuses(::std::string const& feedItemId);

    MCAPI void _dismiss(::std::string const& storyId, ::std::string const& reason);

    MCAPI void _fetchReportImage(::std::string const& storyId);

    MCAPI void _fetchReportPaths();

    MCAPI void _loadReportsSlice(int fromIndex, int toIndex);

    MCAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reset();

    MCAPI void _retryLoadItem(int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsStoriesReportsCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
