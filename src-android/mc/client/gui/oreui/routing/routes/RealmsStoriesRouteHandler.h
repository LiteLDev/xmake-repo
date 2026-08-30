#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on

namespace OreUI {

class RealmsStoriesRouteHandler {
public:
    // RealmsStoriesRouteHandler inner types define
    enum class Tab : uint64 {
        STORY_FEED = 0,
        MEMBERS    = 1,
        TIMELINE   = 2,
        COUNT      = 3,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string composeHardcoreRoute(::Realms::World const&);

    MCNAPI static std::string composeRoute(::OreUI::RealmsStoriesRouteHandler::Tab, ::Realms::World const&);

    MCNAPI static std::string composeShareLinkRoute(::Realms::World const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> COMMENTS_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[41]> HARDCORE_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NEW_STORY_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> REPORT_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> SETTINGS_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> SHARELINK_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[16]> STORIES_ROUTE();

    MCNAPI static ::Realms::RealmId& mWorldId();
    // NOLINTEND
};

} // namespace OreUI
