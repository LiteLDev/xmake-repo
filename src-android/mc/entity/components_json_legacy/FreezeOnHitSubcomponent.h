#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class FreezeOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // FreezeOnHitSubcomponent inner types define
    enum class Shape : uchar {
        Cube   = 0,
        Sphere = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::FreezeOnHitSubcomponent::Shape> mShape;
    ::ll::TypedStorage<4, 4, float>                            mSize;
    ::ll::TypedStorage<1, 1, bool>                             mSnapToBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FreezeOnHitSubcomponent();

    virtual void readfromJSON(::Json::Value&);

    virtual void writetoJSON(::Json::Value&) const;

    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value&);

    MCNAPI void $writetoJSON(::Json::Value&) const;

    MCNAPI void $doOnHitEffect(::Actor&, ::ProjectileComponent&);

    MCNAPI char const* $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
