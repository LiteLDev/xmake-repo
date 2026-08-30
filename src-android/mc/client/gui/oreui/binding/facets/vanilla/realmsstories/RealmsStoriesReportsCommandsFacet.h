#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
