#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform
#include "mc/util/ThreadOwner.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/TrustedSkinFlag.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AnimatedImageData;
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ConnectionRequest;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelData;
#else // @header-generator platform
#endif // @header-generator platform
class MinEngineVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class SerializedPersonaPieceHandle;
class SerializedSkinImpl;
class SubClientConnectionRequest;
class TintMapColor;
struct SkinImage;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class SerializedSkinRef {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // SerializedSkinRef inner types define
    using SerializedSkinWrapper = ::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Application::ThreadOwner<SerializedSkinImpl, (Bedrock::Application::ThreadOwnerBehavior)0>>> mSkinImpl;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>>>
        mSkinImpl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SerializedSkinRef(SerializedSkinRef const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinRef(::SerializedSkinRef&&);
#else // @header-generator platform
    MCAPI SerializedSkinRef();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinRef(std::string const&, ::ConnectionRequest const&);
#else // @header-generator platform
    MCAPI SerializedSkinRef(::std::string const& playFabId, ::ConnectionRequest const& connectionRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinRef(std::string const&, ::SubClientConnectionRequest const&);
#else // @header-generator platform
    MCAPI SerializedSkinRef(::std::string const& playFabId, ::SubClientConnectionRequest const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedSkinRef(
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
    MCAPI SerializedSkinRef(
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
    MCNAPI long estimateSizeInBytes() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int64 estimateSizeInBytes() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<AnimatedImageData> const& getAnimatedImageData() const;
#else // @header-generator platform
    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getAnimationData() const;
#else // @header-generator platform
    MCAPI ::SerializedSkinRef& operator=(::SerializedSkinRef const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAnimationFrames(::persona::AnimatedTextureType) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void setCapeImageDataCereal(::SkinImage const& image);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::persona::ArmSizeType const& getArmSize() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getArmSizeAsString() const;
#else // @header-generator platform
    MCAPI void setGeometryDataMinEngineVersion(::MinEngineVersion minEngineVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getCapeId() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void setImageDataCereal(::SkinImage const& image);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Image const& getCapeImageData() const;

    MCNAPI ::mce::Image& getCapeImageData();

    MCNAPI ::SkinImage const& getCapeImageDataCereal() const;

    MCNAPI std::string const& getDefaultGeometryName() const;

    MCNAPI std::string const& getFullId() const;

    MCNAPI ::Json::Value const& getGeometryData() const;

    MCNAPI ::MinEngineVersion const& getGeometryDataMinEngineVersion() const;

    MCNAPI ::Json::Value& getGeometryDataMutable() const;

    MCNAPI std::string getGeometryDataStr() const;

    MCNAPI std::string const& getId() const;

    MCNAPI ::mce::Image const& getImageData() const;

    MCNAPI ::mce::Image& getImageData();

    MCNAPI ::SkinImage const& getImageDataCereal() const;

    MCNAPI ::mce::Image& getImageDataMutable();

    MCNAPI bool getIsPersona() const;

    MCNAPI bool getIsPersonaCapeOnClassicSkin() const;

    MCNAPI bool getIsPremium() const;

    MCNAPI ::TrustedSkinFlag const& getIsTrustedSkinFlag() const;

    MCNAPI std::string const& getName() const;

    MCNAPI std::vector<SerializedPersonaPieceHandle> const& getPersonaPieces() const;

    MCNAPI std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const& getPieceTintColors() const;

    MCNAPI std::string const& getPlayFabId() const;

    MCNAPI std::string const& getProfileHash() const;

    MCNAPI std::string const& getResourcePatch() const;

    MCNAPI ::mce::Color const& getSkinColor() const;

    MCNAPI bool isPrimaryUser() const;

    MCNAPI bool isTrustedSkin() const;

    MCNAPI bool isValid() const;

    MCNAPI ::SerializedSkinRef& operator=(::SerializedSkinRef const&);

    MCNAPI ::SerializedSkinRef& operator=(::SerializedSkinRef&&);

    MCNAPI bool operator==(::SerializedSkinRef const&) const;

    MCNAPI bool overridesPlayerAppearance() const;

    MCNAPI void releaseThread();

    MCNAPI void setAnimatedImageData(std::vector<AnimatedImageData> const&);

    MCNAPI void setAnimationData(std::string const&);

    MCNAPI void setArmSize(::SharedTypes::persona::ArmSizeType const&);

    MCNAPI void setCapeId(std::string const&);

    MCNAPI void setCapeImageData(::mce::Image const*);

    MCNAPI void setCapeImageDataCereal(::SkinImage const&);

    MCNAPI void setFullId(std::string const&);

    MCNAPI void setGeometryData(::Json::Value, ::MinEngineVersion);

    MCNAPI void setGeometryDataCereal(::Json::Value);

    MCNAPI void setGeometryDataMinEngineVersion(::MinEngineVersion);

    MCNAPI void setId(std::string const&);

    MCNAPI void setImageData(::mce::Image const*);

    MCNAPI void setImageDataCereal(::SkinImage const&);

    MCNAPI void setIsPersona(bool);

    MCNAPI void setIsPersonaCapeOnClassicSkin(bool);

    MCNAPI void setIsPremium(bool);

    MCNAPI void setIsPrimaryUser(bool const);

    MCNAPI void setIsTrustedSkin(bool);

    MCNAPI void setIsTrustedSkinFlag(::TrustedSkinFlag const&);

    MCNAPI void setOverridesPlayerAppearance(bool);

    MCNAPI void setPersonaAppearanceData(
        ::SharedTypes::persona::ArmSizeType const&,
        ::mce::Color const&,
        std::vector<SerializedPersonaPieceHandle> const,
        std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&
#else // @header-generator platform
    MCAPI void setPersonaAppearanceData(
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::mce::Color const&                                                            skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                                  personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPersonaPieces(std::vector<SerializedPersonaPieceHandle> const&);

    MCNAPI void setPieceTintColors(std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&);

    MCNAPI void setPlayFabId(std::string const&);

    MCNAPI void setProfileHash(std::string const&);

    MCNAPI void setResourcePatch(std::string const&);

    MCNAPI void setSkinColor(::mce::Color const&);

    MCNAPI void updateGeometryName();

    MCNAPI bool useBlinkingAnimation() const;

    MCNAPI ~SerializedSkinRef();
#else // @header-generator platform
    MCAPI ~SerializedSkinRef();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SerializedSkinRef createTrustedDefaultSerializedSkin();

    MCNAPI static bool isSkinDisabled(::SerializedSkinRef const&, ::LevelData const&);
#else // @header-generator platform
    MCAPI static ::SerializedSkinRef createTrustedDefaultSerializedSkin();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SerializedSkinRef&&);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::ConnectionRequest const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& playFabId, ::ConnectionRequest const& connectionRequest);
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

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
