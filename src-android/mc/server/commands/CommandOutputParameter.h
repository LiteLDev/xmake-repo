#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Player;
class Vec3;
// clang-format on

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
    enum NoCountType : uint {
        NoCount = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mString;
    ::ll::TypedStorage<4, 4, int>          mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputParameter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandOutputParameter(char const*);

    MCNAPI explicit CommandOutputParameter(::Actor const&);

    MCNAPI explicit CommandOutputParameter(::Actor const*);

    MCNAPI explicit CommandOutputParameter(bool);

    MCNAPI explicit CommandOutputParameter(::BlockPos);

    MCNAPI explicit CommandOutputParameter(::CommandOutputParameter::NoCountType);

    MCNAPI explicit CommandOutputParameter(std::vector<const Actor*> const&);

    MCNAPI explicit CommandOutputParameter(std::vector<const Player*> const&);

    MCNAPI explicit CommandOutputParameter(std::vector<std::string> const&);

    MCNAPI explicit CommandOutputParameter(::CommandSelectorResults<Actor> const&);

    MCNAPI explicit CommandOutputParameter(::CommandSelectorResults<Player> const&);

    MCNAPI CommandOutputParameter(::CommandOutputParameter const&);

    MCNAPI ::CommandOutputParameter& operator=(::CommandOutputParameter&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*);

    MCNAPI void* $ctor(::Actor const&);

    MCNAPI void* $ctor(::Actor const*);

    MCNAPI void* $ctor(bool);

    MCNAPI void* $ctor(::BlockPos);

    MCNAPI void* $ctor(::CommandOutputParameter::NoCountType);

    MCNAPI void* $ctor(std::vector<const Actor*> const&);

    MCNAPI void* $ctor(std::vector<const Player*> const&);

    MCNAPI void* $ctor(std::vector<std::string> const&);

    MCNAPI void* $ctor(::CommandSelectorResults<Actor> const&);

    MCNAPI void* $ctor(::CommandSelectorResults<Player> const&);

    MCNAPI void* $ctor(::CommandOutputParameter const&);
    // NOLINTEND
};
