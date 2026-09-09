#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class GeometryPtr;
class ScreenContext;
// clang-format on

class SkeletonHeadModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mHead;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkeletonHeadModel();

    virtual void render(::BaseActorRenderContext&);

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    virtual void render(::ScreenContext&);

    virtual void setupAnim(float, float, float, float, float, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SkeletonHeadModel(::GeometryPtr const);
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
    MCNAPI void $render(::BaseActorRenderContext&);

    MCNAPI void $render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $render(::ScreenContext&);

    MCNAPI void $setupAnim(float, float, float, float, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
