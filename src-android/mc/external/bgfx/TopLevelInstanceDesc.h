#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/RtMediaType.h"
#include "mc/external/bgfx/RtObjectCategory.h"
#include "mc/external/bgfx/TextureHandle.h"

namespace bgfx {

struct TopLevelInstanceDesc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle> bottomLevelAS;
    ::ll::TypedStorage<4, 4, ::bgfx::RtObjectCategory>            objectCategory;
    ::ll::TypedStorage<4, 4, ::bgfx::RtMediaType>                 mediaType;
    ::ll::TypedStorage<4, 4, uint>                                hitGroupIdx;
    ::ll::TypedStorage<4, 4, uint>                                mask;
    ::ll::TypedStorage<2, 6, ::bgfx::TextureHandle[3]>            hTextures;
    ::ll::TypedStorage<4, 8, uint[2]>                             tintColours;
    ::ll::TypedStorage<2, 2, ushort>                              materialFlags;
    ::ll::TypedStorage<1, 1, bool>                                useIrradianceCache;
    ::ll::UntypedStorage<4, 48>                                   transform;
    ::ll::TypedStorage<8, 8, long>                                uniqueId;
    // NOLINTEND
};

} // namespace bgfx
