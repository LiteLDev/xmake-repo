#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>          mCollectionIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI bool isActive() const;

    MCNAPI bool matches(::SlotData const&) const;

    MCNAPI bool operator!=(::SlotData const&) const;

    MCNAPI bool operator==(::SlotData const&) const;

    MCNAPI void set(std::string const&, int);

    MCNAPI ~SlotData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
