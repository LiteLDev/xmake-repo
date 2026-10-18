#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/Measurements.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/platform/brstd/flat_map.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social::Events { class Measurement; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social::Events { class Property; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Social::Events {

class CompoundMeasurement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mDynamicColumnName;
    ::ll::TypedStorage<8, 24, std::string>                           mPropertyName;
    ::ll::UntypedStorage<8, 48>                                      mMeasurementMap;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mPrivacyTag;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxSize;
    ::ll::TypedStorage<8, 8, ulong>                                  mCurrentNumberOfOperations;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxNumberOfOperations;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkaceeb0;
    ::ll::UntypedStorage<8, 32> mUnk5e940f;
    ::ll::UntypedStorage<8, 48> mUnk4585e8;
    ::ll::UntypedStorage<1, 1>  mUnk5f6365;
    ::ll::UntypedStorage<8, 8>  mUnkc6ce7b;
    ::ll::UntypedStorage<8, 8>  mUnkaeec3d;
    ::ll::UntypedStorage<8, 8>  mUnk97f62b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundMeasurement& operator=(CompoundMeasurement const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompoundMeasurement(CompoundMeasurement const&);
    CompoundMeasurement();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CompoundMeasurement(
        std::string const&,
        std::string const&,
        int,
        ::Social::Events::Measurement const&,
        ::Social::Events::PrivacyTagEnterprise,
        ulong,
        ulong
    );
#else // @header-generator platform
    MCNAPI ::std::vector<::Social::Events::Property> getAsDynamicPropertyVector() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void updateMeasurements(::Social::Events::CompoundMeasurement const& other);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
