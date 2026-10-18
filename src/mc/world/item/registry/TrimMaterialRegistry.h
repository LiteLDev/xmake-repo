#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/registry/TrimMaterial.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class TrimMaterialRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<TrimMaterial>> mTrimMaterials;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::TrimMaterial>> mTrimMaterials;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<TrimMaterial> getTrimMaterialByItemName(::HashedString const&) const;

    MCNAPI std::optional<TrimMaterial> getTrimMaterialByMaterialId(::HashedString const&) const;

    MCNAPI void initializeFromTrimMaterials(std::vector<TrimMaterial> const&);

    MCNAPI void initializeServer();
#else // @header-generator platform
    MCAPI void initializeServer();
#endif // @header-generator platform
    // NOLINTEND
};
