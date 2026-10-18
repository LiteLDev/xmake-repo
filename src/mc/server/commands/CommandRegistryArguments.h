#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/PlayerListEntry.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PlayerListEntry;
#endif // @header-generator platform
struct AutoCompleteInformation;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace mce { class UUID; }
#endif // @header-generator platform
// clang-format on

struct CommandRegistryArguments {
public:
    // CommandRegistryArguments inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using AutoCompletePlayerList = std::string (*)(
        std::string const&,
        std::unordered_map<mce::UUID, PlayerListEntry> const&,
#else // @header-generator platform
    using AutoCompletePlayerList = ::std::string (*)(
        ::std::string const&,
        ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
#endif // @header-generator platform
        ::AutoCompleteInformation&
    );

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::string(*)(std::string const&, std::unordered_map<mce::UUID, PlayerListEntry> const&, ::AutoCompleteInformation&)> mAutoCompletePlayerMention;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::std::string (*)(
            ::std::string const&,
            ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
            ::AutoCompleteInformation&
        )>
        mAutoCompletePlayerMention;
#endif // @header-generator platform
    // NOLINTEND
};
