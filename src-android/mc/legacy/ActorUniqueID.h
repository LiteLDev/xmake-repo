#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct ActorUniqueID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> rawID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getHash() const;

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorUniqueID fromUUID(::mce::UUID const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorUniqueID const& INVALID_ID();
    // NOLINTEND
};
