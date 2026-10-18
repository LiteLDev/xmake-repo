#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Vec3;
// clang-format on

class CustomParticle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomParticle() = default;

    virtual void normalTick() = 0;

    virtual void render(::BaseActorRenderContext&, ::Vec3 const&, float) = 0;

    virtual bool isRemoved() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class CustomParticle {};
#endif // @header-generator platform
