#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/Measurement.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/events/Measurement.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct EventMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<std::string, bool, double>> value;
    ::ll::UntypedStorage<4, 4>                                         aggregationType;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMeasurement& operator=(EventMeasurement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EventMeasurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EventMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, bool, double>>   value;
    ::ll::TypedStorage<4, 4, ::Social::Events::Measurement::AggregationType> aggregationType;
    // NOLINTEND
};
#else // @header-generator platform
struct EventMeasurement {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
