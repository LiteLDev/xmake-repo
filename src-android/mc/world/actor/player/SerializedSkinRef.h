#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/Result.h"
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class BinaryStream;
class ConnectionRequest;
class LevelData;
class MinEngineVersion;
class ReadOnlyBinaryStream;
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
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Application::ThreadOwner<SerializedSkinImpl, (Bedrock::Application::ThreadOwnerBehavior)0>>> mSkinImpl;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializedSkinRef(::SerializedSkinRef&&);

    MCNAPI SerializedSkinRef(std::string const&, ::ConnectionRequest const&);

    MCNAPI SerializedSkinRef(std::string const&, ::SubClientConnectionRequest const&);

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
    );

    MCNAPI long estimateSizeInBytes() const;

    MCNAPI std::vector<AnimatedImageData> const& getAnimatedImageData() const;

    MCNAPI std::string const& getAnimationData() const;

    MCNAPI float getAnimationFrames(::persona::AnimatedTextureType) const;

    MCNAPI ::SharedTypes::persona::ArmSizeType const& getArmSize() const;

    MCNAPI std::string getArmSizeAsString() const;

    MCNAPI std::string const& getCapeId() const;

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
    );

    MCNAPI void setPersonaPieces(std::vector<SerializedPersonaPieceHandle> const&);

    MCNAPI void setPieceTintColors(std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&);

    MCNAPI void setPlayFabId(std::string const&);

    MCNAPI void setProfileHash(std::string const&);

    MCNAPI void setResourcePatch(std::string const&);

    MCNAPI void setSkinColor(::mce::Color const&);

    MCNAPI void updateGeometryName();

    MCNAPI bool useBlinkingAnimation() const;

    MCNAPI ~SerializedSkinRef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SerializedSkinRef createTrustedDefaultSerializedSkin();

    MCNAPI static bool isSkinDisabled(::SerializedSkinRef const&, ::LevelData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SerializedSkinRef&&);

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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
