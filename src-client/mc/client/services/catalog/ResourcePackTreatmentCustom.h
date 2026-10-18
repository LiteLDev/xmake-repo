#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DateRange.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
struct HardwareCompatibilityContext;
namespace Json { class Value; }
// clang-format on

struct ResourcePackTreatmentCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mPackIdentities;
    ::ll::TypedStorage<8, 48, ::DateRange>                mDateRange;
    ::ll::TypedStorage<8, 24, std::string>                mRequiredTreatmentTag;
    ::ll::TypedStorage<4, 4, int>                         mPriority;
    ::ll::TypedStorage<1, 1, bool>                        mIsHardwareCompatible;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackTreatmentCustom& operator=(ResourcePackTreatmentCustom const&);
    ResourcePackTreatmentCustom(ResourcePackTreatmentCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*, ::HardwareCompatibilityContext const&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
