#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/serialization/BiomeDefinitionData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/serialization/BiomeStringList.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BiomeDefinitionData;
// clang-format on
#endif // @header-generator platform

struct BiomeDefinitionListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<ushort, BiomeDefinitionData>> mBiomeData;
    ::ll::TypedStorage<8, 64, ::BiomeStringList>                     mStringList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeDefinitionListPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<ushort, ::BiomeDefinitionData>> mBiomeData;
    ::ll::TypedStorage<8, 88, ::BiomeStringList>                         mStringList;
#endif // @header-generator platform
    // NOLINTEND
};
