#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

class PositionTrackingId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromTag(::Tag const*);

    MCNAPI std::unique_ptr<Tag> getTag() const;

    MCNAPI ::PositionTrackingId& operator=(::PositionTrackingId const&);

    MCNAPI ::PositionTrackingId& operator=(::PositionTrackingId&&);

    MCNAPI std::string const toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PositionTrackingId const& INVALID_ID();

    MCNAPI static uint& sNextId();
    // NOLINTEND
};
