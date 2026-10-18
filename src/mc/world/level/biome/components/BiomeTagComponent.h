#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/TagsComponent.h"
#include "mc/util/IDType.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeTagComponent : public ::BiomeComponentBase, public ::TagsComponent<IDType<BiomeTagSetIDType>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeTagComponent();
    // NOLINTEND
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct BiomeTagSetIDType;
// clang-format on
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeTagComponent : public ::BiomeComponentBase, public ::TagsComponent<::IDType<::BiomeTagSetIDType>> {};
#endif // @header-generator platform
