#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
