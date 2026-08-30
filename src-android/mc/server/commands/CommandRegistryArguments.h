#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/PlayerListEntry.h"

// auto generated forward declare list
// clang-format off
struct AutoCompleteInformation;
// clang-format on

struct CommandRegistryArguments {
public:
    // CommandRegistryArguments inner types define
    using AutoCompletePlayerList = std::string (*)(
        std::string const&,
        std::unordered_map<mce::UUID, PlayerListEntry> const&,
        ::AutoCompleteInformation&
    );

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::TypedStorage<8, 8, std::string(*)(std::string const&, std::unordered_map<mce::UUID, PlayerListEntry> const&, ::AutoCompleteInformation&)> mAutoCompletePlayerMention;
    // clang-format on
    // NOLINTEND
};
