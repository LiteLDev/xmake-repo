#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform
#include "mc/resources/MinEngineVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/AnimatedImageData.h"
#include "mc/world/actor/player/SerializedPersonaPieceHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/player/SkinImage.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
class AnimatedImageData;
#endif // @header-generator platform
class ConnectionRequest;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelData;
class ReadOnlyBinaryStream;
#else // @header-generator platform
class SerializedPersonaPieceHandle;
#endif // @header-generator platform
class SubClientConnectionRequest;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
class TintMapColor;
#endif // @header-generator platform
namespace mce { struct Image; }
// clang-format on

class SerializedSkinImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                 mId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlayFabId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mFullId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mResourcePatch;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mDefaultGeometryName;
    ::ll::TypedStorage<8, 48, ::SkinImage>                                   mSkinImage;
    ::ll::TypedStorage<8, 48, ::SkinImage>                                   mCapeImage;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimatedImageData>>            mSkinAnimatedImages;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mGeometryData;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                            mGeometryDataMinEngineVersion;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mGeometryDataMutable;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAnimationData;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCapeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedPersonaPieceHandle>> mPersonaPieces;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>            mArmSizeType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor>> mPieceTintColors;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                            mSkinColor;
    ::ll::TypedStorage<1, 1, ::TrustedSkinFlag>                                                        mIsTrustedSkin;
    ::ll::TypedStorage<1, 1, bool>                                                                     mIsPremium;
    ::ll::TypedStorage<1, 1, bool>                                                                     mIsPersona;
    ::ll::TypedStorage<1, 1, bool>           mIsPersonaCapeOnClassicSkin;
    ::ll::TypedStorage<1, 1, bool>           mIsPrimaryUser;
    ::ll::TypedStorage<1, 1, bool>           mOverridesPlayerAppearance;
    ::ll::TypedStorage<8, 32, ::std::string> mProfileHash;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinImpl();
#else // @header-generator platform
    MCAPI SerializedSkinImpl();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinImpl(std::string const&, ::ConnectionRequest const&);
#else // @header-generator platform
    MCAPI SerializedSkinImpl(::std::string const& playFabId, ::ConnectionRequest const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinImpl(std::string const&, ::SubClientConnectionRequest const&);
#else // @header-generator platform
    MCAPI SerializedSkinImpl(::std::string const& playFabId, ::SubClientConnectionRequest const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI SerializedSkinImpl(
        ::std::string const&      name,
        ::std::string const&      playFabId,
        ::std::string const&      resourcePatch,
        ::mce::Image const&       skinImage,
        ushort const&             skinImageWidth,
        ushort const&             skinImageHeight,
        ::mce::Image const&       capeImage,
        ushort const&             capeImageWidth,
        ushort const&             capeImageHeight,
        ::Json::Value&&           geometryData,
        ::MinEngineVersion const& geometryDataMinEngineVersion,
        ::std::string const&      animationData,
        ::std::string const&      capeId,
        bool                      isTrustedSkin,
        bool                      isPremium,
        bool                      isPersona,
        bool                      isPersonaCapeOnClassicSkin,
        bool                      isPrimaryUser,
        bool                      overridesPlayerAppearance
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getArmSizeAsString() const;
#else // @header-generator platform
    MCAPI bool operator==(::SerializedSkinImpl const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCAPI void setCapeId(::std::string const& capeId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SerializedSkinImpl const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setCapeImageData(::mce::Image const* image);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCapeImageData(::mce::Image const*);
#else // @header-generator platform
    MCAPI void setId(::std::string const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setImageData(::mce::Image const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setImageData(::mce::Image const* image);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateGeometryName();
#else // @header-generator platform
    MCAPI void setPersonaAppearanceData(
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::mce::Color const&                                                            skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                                  personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCAPI void updateGeometryName();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::ConnectionRequest const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& playFabId, ::ConnectionRequest const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::SubClientConnectionRequest const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& playFabId, ::SubClientConnectionRequest const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&      name,
        ::std::string const&      playFabId,
        ::std::string const&      resourcePatch,
        ::mce::Image const&       skinImage,
        ushort const&             skinImageWidth,
        ushort const&             skinImageHeight,
        ::mce::Image const&       capeImage,
        ushort const&             capeImageWidth,
        ushort const&             capeImageHeight,
        ::Json::Value&&           geometryData,
        ::MinEngineVersion const& geometryDataMinEngineVersion,
        ::std::string const&      animationData,
        ::std::string const&      capeId,
        bool                      isTrustedSkin,
        bool                      isPremium,
        bool                      isPersona,
        bool                      isPersonaCapeOnClassicSkin,
        bool                      isPrimaryUser,
        bool                      overridesPlayerAppearance
#endif // @header-generator platform
    );
    // NOLINTEND
};
