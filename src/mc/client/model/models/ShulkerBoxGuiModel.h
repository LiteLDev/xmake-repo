#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class ShulkerBoxGuiModel : public ::Model {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class ShulkerBoxGuiModel : public ::Model {
#else // @header-generator platform
class ShulkerBoxGuiModel {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ShulkerBoxGuiModel inner types declare
    // clang-format off
    struct FacadeQuad;
    // clang-format on

    // ShulkerBoxGuiModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct FacadeQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition0;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition1;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition2;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition3;
        ::ll::TypedStorage<4, 12, ::Vec3> mNormal;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv0;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv1;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv2;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv3;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mTopFace;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mWestFaces;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mSouthFaces;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShulkerBoxGuiModel();

    virtual void render(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShulkerBoxGuiModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct FacadeQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition0;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition1;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition2;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition3;
        ::ll::TypedStorage<4, 12, ::Vec3> mNormal;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv0;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv1;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv2;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv3;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTopFace;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mWestFaces;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mSouthFaces;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $render(::ScreenContext& screenContext);
    // NOLINTEND
#else // @header-generator platform
    struct FacadeQuad {};
#endif // @header-generator platform
#endif // @header-generator platform
};
