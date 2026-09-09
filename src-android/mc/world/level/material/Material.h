#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

class Material {
public:
    // Material inner types define
    enum class Settings : int {
        Solid    = 0,
        Liquid   = 1,
        NonSolid = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType> mType;
    ::ll::TypedStorage<1, 1, bool>                                  mNeverBuildable;
    ::ll::TypedStorage<1, 1, bool>                                  mLiquid;
    ::ll::TypedStorage<1, 1, bool>                                  mBlocksMotion;
    ::ll::TypedStorage<1, 1, bool>                                  mBlocksPrecipitation;
    ::ll::TypedStorage<1, 1, bool>                                  mSolid;
    ::ll::TypedStorage<1, 1, bool>                                  mSuperHot;
    // NOLINTEND

public:
    // prevent constructor by default
    Material();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getBlocksMotion() const;

    MCNAPI bool isLiquid() const;

    MCNAPI bool isSolid() const;

    MCNAPI bool isSolidBlocking() const;

    MCNAPI bool isSuperHot() const;

    MCNAPI bool isTopSolid(bool, bool) const;

    MCNAPI bool isType(::SharedTypes::v1_26_20::MaterialType) const;

    MCNAPI bool operator!=(::Material const&) const;

    MCNAPI bool operator==(::Material const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setupMaterials();

    MCNAPI static void addMaterial(std::unique_ptr<Material>);

    MCNAPI static ::Material const& getMaterial(::SharedTypes::v1_26_20::MaterialType);

    MCNAPI static void initMaterials();

    MCNAPI static void teardownMaterials();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mInitialized();

    MCNAPI static std::vector<std::unique_ptr<Material>>& mMaterials();
    // NOLINTEND
};
