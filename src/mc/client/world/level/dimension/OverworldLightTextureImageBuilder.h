#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

class OverworldLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldLightTextureImageBuilder();
    // NOLINTEND

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
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

class OverworldLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {};
#else // @header-generator platform
class OverworldLightTextureImageBuilder {};
#endif // @header-generator platform
#endif // @header-generator platform
