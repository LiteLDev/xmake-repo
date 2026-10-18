#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PositionTrackingId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fromTag(::Tag const*);

    MCNAPI std::unique_ptr<Tag> getTag() const;

    MCNAPI ::PositionTrackingId& operator=(::PositionTrackingId const&);

    MCNAPI ::PositionTrackingId& operator=(::PositionTrackingId&&);

    MCNAPI std::string const toString() const;
#else // @header-generator platform
    MCAPI ::std::string const toString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PositionTrackingId const& INVALID_ID();
#else // @header-generator platform
    MCAPI static ::PositionTrackingId const& INVALID_ID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint& sNextId();
#else // @header-generator platform
    MCAPI static uint& sNextId();
#endif // @header-generator platform
    // NOLINTEND
};
