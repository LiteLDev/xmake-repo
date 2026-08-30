#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/AnimatedTextureDefinition.h"
#include "mc/client/persona/PersonaAppearance.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IPersonaImageProvider;
class ISkinRepository;
class SerializedSkinRef;
class TintMapColor;
struct PersonaTextureResources;
namespace Json { class Value; }
namespace Social { class User; }
namespace mce { struct Image; }
namespace persona { class DefaultAppearanceManager; }
// clang-format on

struct PersonaCharacter {
public:
    // PersonaCharacter inner types define
    enum class Status : int {
        None    = 0,
        Loading = 1,
        Failed  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 96, ::SkinHandle> mCurrentSkinHandle;
    ::ll::TypedStorage<8, 24, std::string> mAppearanceDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mSkinDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mSkinName;
    ::ll::TypedStorage<8, 24, std::string> mGeoID;
    ::ll::TypedStorage<8, 24, std::string> mTextureID;
    ::ll::TypedStorage<8, 24, std::string> mCapeTextureID;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSavedSkinColor;
    ::ll::UntypedStorage<8, 952> mLastSavedAppearance;
    ::ll::UntypedStorage<8, 952> mCurrentAppearance;
    ::ll::TypedStorage<1, 1, bool> mWearingCape;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<1, 1, bool> mIsUpdating;
    ::ll::TypedStorage<4, 4, ::PersonaCharacter::Status> mStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<persona::AnimatedTextureType, AnimatedTextureDefinition>> mAnimatedTextures;
    ::ll::TypedStorage<4, 4, uint> mSkinAnimationAdjustments;
    ::ll::TypedStorage<4, 4, uint> mLastSavedSkinAnimationAdjustments;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType const> mProfileType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PersonaTextureResources>> mTextures;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>> mPersonaTexture;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mBodySize;
    ::ll::TypedStorage<4, 4, int> mSkinIndex;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCharacter& operator=(PersonaCharacter const&);
    PersonaCharacter(PersonaCharacter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaCharacter();

    MCNAPI void fillPersonaSkin(::IPersonaImageProvider&, ::Json::Value const&, ::SerializedSkinRef&);

    MCNAPI ::SharedTypes::persona::ArmSizeType const& getArmSize() const;

    MCNAPI ::SharedTypes::persona::BodySizeType const& getBodySize() const;

    MCNAPI ::persona::ProfileType const& getProfileType() const;

    MCNAPI int const& getSkinIndex() const;

    MCNAPI bool getUseClassicSkin() const;

    MCNAPI bool hasClassicSkin() const;

    MCNAPI bool hasProfileType(::persona::ProfileType) const;

    MCNAPI bool hasValidSkinIndex() const;

    MCNAPI void initDisplayNames(
        ::ISkinRepository const&,
        ::persona::DefaultAppearanceManager const&,
        std::shared_ptr<Social::User>
    );

    MCNAPI bool isInitialized() const;

    MCNAPI bool isInvalidCharacter() const;

    MCNAPI bool isPieceEquipped(std::string const&) const;

    MCNAPI bool isPrimaryUser() const;

    MCNAPI void setCustomSkinArmSize(::SharedTypes::persona::ArmSizeType const&);

    MCNAPI void setUseClassicSkin(bool);

    MCNAPI ~PersonaCharacter();
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
};
