#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
class IClientInstance;
// clang-format on

class NetherLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherLightTextureImageBuilder();

    virtual std::unique_ptr<BaseLightData> createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<BaseLightData> $createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
class IClientInstance;
// clang-format on

class NetherLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::BaseLightData>
    createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::BaseLightData>
    $createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND
};
#else // @header-generator platform
class NetherLightTextureImageBuilder {};
#endif // @header-generator platform
#endif // @header-generator platform
