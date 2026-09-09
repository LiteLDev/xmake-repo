#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/Result.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/actor/player/AnimatedImageData.h"
#include "mc/world/actor/player/SerializedPersonaPieceHandle.h"
#include "mc/world/actor/player/SkinImage.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ConnectionRequest;
class LevelData;
class ReadOnlyBinaryStream;
class SubClientConnectionRequest;
namespace Json { class Value; }
namespace mce { struct Image; }
// clang-format on

class SerializedSkinImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                               mId;
    ::ll::TypedStorage<8, 24, std::string>                               mPlayFabId;
    ::ll::TypedStorage<8, 24, std::string>                               mFullId;
    ::ll::TypedStorage<8, 24, std::string>                               mResourcePatch;
    ::ll::TypedStorage<8, 24, std::string>                               mDefaultGeometryName;
    ::ll::TypedStorage<8, 48, ::SkinImage>                               mSkinImage;
    ::ll::TypedStorage<8, 48, ::SkinImage>                               mCapeImage;
    ::ll::TypedStorage<8, 24, std::vector<AnimatedImageData>>            mSkinAnimatedImages;
    ::ll::UntypedStorage<8, 16>                                          mGeometryData;
    ::ll::UntypedStorage<8, 32>                                          mGeometryDataMinEngineVersion;
    ::ll::UntypedStorage<8, 16>                                          mGeometryDataMutable;
    ::ll::TypedStorage<8, 24, std::string>                               mAnimationData;
    ::ll::TypedStorage<8, 24, std::string>                               mCapeId;
    ::ll::TypedStorage<8, 24, std::vector<SerializedPersonaPieceHandle>> mPersonaPieces;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>        mArmSizeType;
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::persona::PieceType, TintMapColor>> mPieceTintColors;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                      mSkinColor;
    ::ll::TypedStorage<1, 1, ::TrustedSkinFlag>                                                  mIsTrustedSkin;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsPremium;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsPersona;
    ::ll::TypedStorage<1, 1, bool>         mIsPersonaCapeOnClassicSkin;
    ::ll::TypedStorage<1, 1, bool>         mIsPrimaryUser;
    ::ll::TypedStorage<1, 1, bool>         mOverridesPlayerAppearance;
    ::ll::TypedStorage<8, 24, std::string> mProfileHash;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializedSkinImpl();

    MCNAPI SerializedSkinImpl(std::string const&, ::ConnectionRequest const&);

    MCNAPI SerializedSkinImpl(std::string const&, ::SubClientConnectionRequest const&);

    MCNAPI SerializedSkinImpl(
        std::string const&,
        std::string const&,
        std::string const&,
        ::mce::Image const&,
        ushort const&,
        ushort const&,
        ::mce::Image const&,
        ushort const&,
        ushort const&,
        ::Json::Value&&,
        ::MinEngineVersion const&,
        std::string const&,
        std::string const&,
        bool,
        bool,
        bool,
        bool,
        bool const,
        bool
    );

    MCNAPI std::string getArmSizeAsString() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::SerializedSkinImpl const&) const;

    MCNAPI void setCapeImageData(::mce::Image const*);

    MCNAPI void setImageData(::mce::Image const*);

    MCNAPI void updateGeometryName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::string const&, ::ConnectionRequest const&);

    MCNAPI void* $ctor(std::string const&, ::SubClientConnectionRequest const&);

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        std::string const&,
        ::mce::Image const&,
        ushort const&,
        ushort const&,
        ::mce::Image const&,
        ushort const&,
        ushort const&,
        ::Json::Value&&,
        ::MinEngineVersion const&,
        std::string const&,
        std::string const&,
        bool,
        bool,
        bool,
        bool,
        bool const,
        bool
    );
    // NOLINTEND
};
