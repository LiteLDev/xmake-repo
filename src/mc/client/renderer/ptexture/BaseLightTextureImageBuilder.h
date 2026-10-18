#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseLightData;
class Dimension;
class IClientInstance;
class IOptionRegistry;
class Player;
namespace mce { struct Image; }
// clang-format on

class BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension const*> mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseLightTextureImageBuilder();

    virtual void init(::Dimension*);

    virtual bool buildImage(::BaseLightData const&, ::mce::Image*, uint, float, float, bool);

    virtual bool buildImageSplit(::BaseLightData const&, ::mce::Image*, uint, float, bool);

    virtual std::unique_ptr<BaseLightData> createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseLightTextureImageBuilder();

    MCNAPI void setDimension(::Dimension*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _updateDarknessLightData(::BaseLightData&, ::Player const&, ::IOptionRegistry const&);
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
    MCNAPI void $init(::Dimension*);

    MCNAPI bool $buildImage(::BaseLightData const&, ::mce::Image*, uint, float, float, bool);

    MCNAPI bool $buildImageSplit(::BaseLightData const&, ::mce::Image*, uint, float, bool);

    MCNAPI std::unique_ptr<BaseLightData> $createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseLightData;
class Dimension;
class IClientInstance;
namespace mce { struct Image; }
// clang-format on

class BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension const*> mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseLightTextureImageBuilder() = default;

    virtual void init(::Dimension* d);

    virtual bool buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );

    virtual bool buildImageSplit(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        bool                   clampToMinimum
    );

    virtual ::std::unique_ptr<::BaseLightData>
    createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $init(::Dimension* d);

    MCAPI bool $buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );

    MCAPI bool $buildImageSplit(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        bool                   clampToMinimum
    );

    MCAPI ::std::unique_ptr<::BaseLightData>
    $createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND
};
#else // @header-generator platform
class BaseLightTextureImageBuilder {};
#endif // @header-generator platform
#endif // @header-generator platform
