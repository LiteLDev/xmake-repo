#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ScreenContext;
// clang-format on

class DragonHeadModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mAnimationPos;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mHead;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mJaw;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mSnout;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonHeadModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonHeadModel();

    virtual void render(::ScreenContext&, float);

    virtual void render(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DragonHeadModel(::GeometryPtr const);

    MCNAPI ::ModelPart const& getHeadModel() const;
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
    MCNAPI void $render(::ScreenContext&, float);

    MCNAPI void $render(::ScreenContext&);
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

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ScreenContext;
// clang-format on

class DragonHeadModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mAnimationPos;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mHead;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mJaw;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mSnout;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonHeadModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonHeadModel() /*override*/ = default;

    virtual void render(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext& screenContext, float scale);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DragonHeadModel(::GeometryPtr source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::ScreenContext& screenContext);

    MCAPI void $render(::ScreenContext& screenContext, float scale);
    // NOLINTEND
};
#else // @header-generator platform
class DragonHeadModel {};
#endif // @header-generator platform
#endif // @header-generator platform
