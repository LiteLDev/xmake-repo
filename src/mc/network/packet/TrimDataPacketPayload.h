#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/registry/TrimMaterial.h"
#include "mc/world/item/registry/TrimPattern.h"

struct TrimDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<TrimPattern>>  mTrimPatterns;
    ::ll::TypedStorage<8, 24, std::vector<TrimMaterial>> mTrimMaterials;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::TrimPattern>>  mTrimPatterns;
    ::ll::TypedStorage<8, 24, ::std::vector<::TrimMaterial>> mTrimMaterials;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TrimMaterial> const& getTrimMaterials() const;
#else // @header-generator platform
    MCAPI ~TrimDataPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
