#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ITimeZoneProvider.h"

// auto generated forward declare list
// clang-format off
struct tm;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ITimeZoneProvider.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CustomTimeZoneProvider : public ::cohtml::ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize) /*override*/;

    virtual double GetDaylightSavingsOffset(double timeMsUtc) /*override*/;

    virtual double GetLocalTimeOffset(double timeMs, bool isTimeUtc) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize);

    MCAPI double $GetDaylightSavingsOffset(double timeMsUtc);

    MCAPI double $GetLocalTimeOffset(double timeMs, bool isTimeUtc);
    // NOLINTEND
};
#else // @header-generator platform
class CustomTimeZoneProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
