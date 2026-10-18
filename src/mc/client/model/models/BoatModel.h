#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/Side.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Boat;
class GeometryPtr;
class ScreenContext;
// clang-format on

class BoatModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBottom;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBack;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mFront;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeft;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mRight;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeftPaddle;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mRightPaddle;
    // NOLINTEND

public:
    // prevent constructor by default
    BoatModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoatModel();

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(float, float, float, float, float, float);

    virtual ::ModelPart _makePaddle(bool, ::ModelPart);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BoatModel(::GeometryPtr const);

    MCNAPI void _animatePaddle(::ModelPart&, ::ScreenContext&, ::Boat const&, ::SharedTypes::Side, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeometryPtr const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $setupAnim(float, float, float, float, float, float);

    MCNAPI ::ModelPart $_makePaddle(bool, ::ModelPart);
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
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/Side.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Boat;
class GeometryPtr;
class ScreenContext;
// clang-format on

class BoatModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBottom;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBack;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mFront;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeft;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRight;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeftPaddle;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRightPaddle;
    // NOLINTEND

public:
    // prevent constructor by default
    BoatModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoatModel() /*override*/;

    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    ) /*override*/;

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale) /*override*/;

    virtual ::ModelPart _makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BoatModel(::GeometryPtr source);

    MCAPI void _animatePaddle(
        ::ModelPart&        paddle,
        ::ScreenContext&    screenContext,
        ::Boat const&       boat,
        ::SharedTypes::Side side,
        float               scale,
        float               a
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCFOLD void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    MCFOLD ::ModelPart $_makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BoatModel {};
#endif // @header-generator platform
#endif // @header-generator platform
