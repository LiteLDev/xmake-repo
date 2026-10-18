#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Village;
namespace mce { class UUID; }
// clang-format on

class IVillageManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IVillageManager() = default;
#else // @header-generator platform
    virtual ~IVillageManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<Village> fetchClosestVillage(::BlockPos const&, int, uint) const = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::Village>
    fetchClosestVillage(::BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<Village> getVillageByID(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::Village> getVillageByID(::mce::UUID const& villageID) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
