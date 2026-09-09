#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/Measurements.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class CompoundMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mDynamicColumnName;
    ::ll::TypedStorage<8, 24, std::string>                           mPropertyName;
    ::ll::UntypedStorage<8, 48>                                      mMeasurementMap;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mPrivacyTag;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxSize;
    ::ll::TypedStorage<8, 8, ulong>                                  mCurrentNumberOfOperations;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxNumberOfOperations;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundMeasurement& operator=(CompoundMeasurement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundMeasurement(
        std::string const&,
        std::string const&,
        int,
        ::Social::Events::Measurement const&,
        ::Social::Events::PrivacyTagEnterprise,
        ulong,
        ulong
    );

    MCNAPI void addOrUpdateMeasurement(int, ::Social::Events::Measurement const&);

    MCNAPI std::vector<Social::Events::Property> getAsDynamicPropertyVector() const;

    MCNAPI void updateMeasurements(::Social::Events::CompoundMeasurement const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        int,
        ::Social::Events::Measurement const&,
        ::Social::Events::PrivacyTagEnterprise,
        ulong,
        ulong
    );
    // NOLINTEND
};

} // namespace Social::Events
