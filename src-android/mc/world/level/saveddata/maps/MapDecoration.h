#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class MapDecoration {
public:
    // MapDecoration inner types define
    enum class Type : uchar {
        MarkerWhite      = 0,
        MarkerGreen      = 1,
        MarkerRed        = 2,
        MarkerBlue       = 3,
        XWhite           = 4,
        TriangleRed      = 5,
        SquareWhite      = 6,
        MarkerSign       = 7,
        MarkerPink       = 8,
        MarkerOrange     = 9,
        MarkerYellow     = 10,
        MarkerTeal       = 11,
        TriangleGreen    = 12,
        SmallSquareWhite = 13,
        Mansion          = 14,
        Monument         = 15,
        NoDraw           = 16,
        VillageDesert    = 17,
        VillagePlains    = 18,
        VillageSavanna   = 19,
        VillageSnowy     = 20,
        VillageTaiga     = 21,
        JungleTemple     = 22,
        WitchHut         = 23,
        TrialChambers    = 24,
        Count            = 25,
        Player           = 0,
        PlayerOffMap     = 6,
        PlayerOffLimits  = 13,
        PlayerHidden     = 16,
        ItemFrame        = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mLabel;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type> mImage;
    ::ll::TypedStorage<1, 1, schar>                 mX;
    ::ll::TypedStorage<1, 1, schar>                 mY;
    ::ll::TypedStorage<1, 1, schar>                 mRotation;
    ::ll::TypedStorage<4, 16, ::mce::Color>         mColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::Color const& getColor() const;

    MCNAPI ::MapDecoration::Type getImg() const;

    MCNAPI schar getRot() const;

    MCNAPI schar getX() const;

    MCNAPI schar getY() const;

    MCNAPI bool isRenderedOnFrame() const;

    MCNAPI void setColor(::mce::Color const&);

    MCNAPI void setImg(::MapDecoration::Type);

    MCNAPI void setLabel(std::string const&);

    MCNAPI void setRot(schar);

    MCNAPI void setX(schar);

    MCNAPI void setY(schar);
    // NOLINTEND
};
