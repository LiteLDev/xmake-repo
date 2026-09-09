#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ulong[2]> Data;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string asString() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool operator<(::mce::UUID const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canParse(std::string_view);

    MCNAPI static ::mce::UUID fromString(std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID& EMPTY();

    MCNAPI static ulong& STRING_LENGTH();
    // NOLINTEND
};

} // namespace mce
