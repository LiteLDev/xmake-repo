#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class GameVersion {
public:
    // GameVersion inner types define
    enum class Octet : uint {
        MAJOR      = 0,
        MINOR      = 1,
        PATCH      = 2,
        REVISION   = 3,
        BETA       = 4,
        NUM_OCTETS = 5,
        INVALID    = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, uint[5]>     mDigit;
    ::ll::TypedStorage<8, 24, std::string> mString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameVersion(::ListTag const&);

    MCNAPI GameVersion(::GameVersion const&);

    MCNAPI GameVersion(uint, uint, uint, uint, uint);

    MCNAPI std::string const& asString() const;

    MCNAPI uint octet(::GameVersion::Octet const) const;

    MCNAPI bool operator!=(::GameVersion const&) const;

    MCNAPI bool operator<(::GameVersion const&) const;

    MCNAPI bool operator<=(::GameVersion const&) const;

    MCNAPI bool operator>(::GameVersion const&) const;

    MCNAPI bool operator>=(::GameVersion const&) const;

    MCNAPI std::unique_ptr<ListTag> serialize() const;

    MCNAPI ~GameVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::GameVersion current();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameVersion const& Zero();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ListTag const&);

    MCNAPI void* $ctor(::GameVersion const&);

    MCNAPI void* $ctor(uint, uint, uint, uint, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
