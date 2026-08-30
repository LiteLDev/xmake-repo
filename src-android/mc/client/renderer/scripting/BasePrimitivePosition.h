#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitive.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class BasePrimitivePosition : public ::Scripting::RenderHelper::BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitivePosition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasePrimitivePosition();

    virtual ::Vec3 getPositionRaw() const;

    virtual ::Vec3 getPosition(float) const;

    virtual void setPosition(::Vec3 const&);

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Vec3 $getPositionRaw() const;

    MCNAPI ::Vec3 $getPosition(float) const;

    MCNAPI void $setPosition(::Vec3 const&);

    MCNAPI void $updateBoundingBox(::Vec3 const&, ::AABB&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
