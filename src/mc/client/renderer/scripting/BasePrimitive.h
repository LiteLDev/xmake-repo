#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Scripting::RenderHelper { struct Vertex; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
class BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mDirty;
    ::ll::TypedStorage<1, 1, bool>                 mVisible;
    ::ll::TypedStorage<4, 4, int>                  mPriority;
    ::ll::UntypedStorage<4, 24>                    mColor;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>     mAttachedToEntity;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMaxRenderDistance;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mCachedAttachedPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::RenderHelper::PrimitiveType getType() const = 0;

    virtual ~BasePrimitive();

    virtual ::Vec3 getPositionRaw() const = 0;

    virtual ::Vec3 getPosition(float) const = 0;

    virtual void setPosition(::Vec3 const&);

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual void setColor(::mce::Color const&);

    virtual void _rebuild(float) = 0;

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&) = 0;

    virtual void _getLineVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WeakEntityRef getAttachedToEntity() const;

    MCNAPI std::optional<Vec3> getAttachedToPosition(float) const;

    MCNAPI bool getDirty(float) const;

    MCNAPI void setAttachedToEntity(::WeakEntityRef);

    MCNAPI void setMaxRenderDistance(std::optional<float>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setPosition(::Vec3 const&);

    MCNAPI void $updateBoundingBox(::Vec3 const&, ::AABB&) const;

    MCNAPI void $setColor(::mce::Color const&);

    MCNAPI void $_getLineVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BasePrimitive {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
