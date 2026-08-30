#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ITimeZoneProvider.h"

// auto generated forward declare list
// clang-format off
struct tm;
// clang-format on

namespace OreUI {

class CustomTimeZoneProvider : public ::cohtml::ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomTimeZoneProvider();

    virtual void GetLocalTimezoneName(double, char*, ulong);

    virtual double GetDaylightSavingsOffset(double);

    virtual double GetLocalTimeOffset(double, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $GetLocalTimezoneName(double, char*, ulong);

    MCNAPI double $GetDaylightSavingsOffset(double);

    MCNAPI double $GetLocalTimeOffset(double, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
