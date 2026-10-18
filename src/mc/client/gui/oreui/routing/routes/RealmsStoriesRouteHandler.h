#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class RealmsStoriesRouteHandler {
public:
    // RealmsStoriesRouteHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Tab : uint64 {
        StoryFeed = 0,
        Members   = 1,
        Timeline  = 2,
        Count     = 3,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string composeHardcoreRoute(::Realms::World const& world);

    MCAPI static ::std::string composeRoute(::OreUI::RealmsStoriesRouteHandler::Tab tab, ::Realms::World const& world);

    MCAPI static ::std::string composeShareLinkRoute(::Realms::World const& world);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[23]> COMMENTS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[41]> HARDCORE_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[18]> NEW_STORY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[33]> REPORT_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[25]> SETTINGS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SHARELINK_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[16]> STORIES_ROUTE();

    MCAPI static ::Realms::RealmId& mWorldId();
    // NOLINTEND
#else // @header-generator platform
    enum class Tab : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
