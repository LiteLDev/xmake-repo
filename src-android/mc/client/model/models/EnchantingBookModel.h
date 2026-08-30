#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ScreenContext;
// clang-format on

class EnchantingBookModel : public ::Model {
public:
    // EnchantingBookModel inner types define
    enum Part : int {
        LeftLid    = 0,
        RightLid   = 1,
        LeftPages  = 2,
        RightPages = 3,
        FlipPage1  = 4,
        FlipPage2  = 5,
        Seam       = 6,
        _NUM_PARTS = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mIsOnLectern;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 3808, ::ModelPart[7]>   mBook;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingBookModel();

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(float, float, float, float, float, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnchantingBookModel();

    MCNAPI explicit EnchantingBookModel(bool const);

    MCNAPI void render(::ScreenContext&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool const);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
