#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/ChestBoatModel.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GeometryPtr;
class ScreenContext;
// clang-format on

class ChestRaftModel : public ::ChestBoatModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBottomBelow;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBottomAbove;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestRaftModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestRaftModel();

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChestRaftModel(::GeometryPtr const);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
