#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/BaseGamePackLoadRequirement.h"
#include "mc/resources/ExperimentLoadRequirement.h"
#include "mc/resources/LegacyCreatorFeaturesLoadRequirement.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct PackLoadInfo;
#else // @header-generator platform
class BaseGamePackLoadRequirement;
class ExperimentLoadRequirement;
class LegacyCreatorFeaturesLoadRequirement;
#endif // @header-generator platform
// clang-format on

class PackLoadRequirement {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PackLoadRequirement inner types define
    using PackLoadRequirements =
        std::variant<ExperimentLoadRequirement, LegacyCreatorFeaturesLoadRequirement, BaseGamePackLoadRequirement>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 8, std::variant<ExperimentLoadRequirement, LegacyCreatorFeaturesLoadRequirement, BaseGamePackLoadRequirement>> mRequirement;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8> mUnk5c0b27;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackLoadRequirement& operator=(PackLoadRequirement const&);
    PackLoadRequirement(PackLoadRequirement const&);
    PackLoadRequirement();
#endif // @header-generator platform
};
