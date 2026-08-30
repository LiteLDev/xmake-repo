#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ScreenContext;
// clang-format on

class SerializedActorModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ModelPart>> mParts;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>     mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>     mGuiMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SerializedActorModel();

    virtual void render(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializedActorModel();

    MCNAPI void load(::GeometryPtr const, ::gsl::span<const std::string_view>);

    MCNAPI void setGuiMaterial();

    MCNAPI void setInWorldMaterial();
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
};
