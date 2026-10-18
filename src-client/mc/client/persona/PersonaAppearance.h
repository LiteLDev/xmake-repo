#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/persona/PieceHandle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class PersonaAppearance {
public:
    // PersonaAppearance inner types define
    enum class EmoteWheelIndicie : int {
        TOP     = 0,
        LEFT    = 1,
        BOTTOM  = 2,
        RIGHT   = 3,
        SIZE    = 4,
        UNKNOWN = 4,
    };

    using PieceVector = std::vector<persona::PieceHandle>;

    using EmoteWheel = std::array<persona::PieceHandle, 4>;

    using ArmSizeType = ::SharedTypes::persona::ArmSizeType;

    using PieceTintMap = std::unordered_map<SharedTypes::persona::PieceType, TintMapColor>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<persona::PieceHandle>>                                 mPieceVector;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                          mUnsupportedPieces;
    ::ll::UntypedStorage<8, 800>                                                                 mEmoteWheel;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>                                mArmSizeType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>                                mCustomSkinArmSize;
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::persona::PieceType, TintMapColor>> mPieceTintColors;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                      mSkinColor;
    ::ll::TypedStorage<8, 24, std::string> mSerializedLockedClassicSkin;
    ::ll::TypedStorage<1, 1, bool>         mUseClassicSkin;
    ::ll::TypedStorage<1, 1, bool>         mAllowUnownedPieces;
    ::ll::TypedStorage<1, 1, bool>         mSaveSerializedLockedClassicSkin;
    ::ll::TypedStorage<1, 1, bool>         mSaveSerializedUseClassicSkin;
    ::ll::TypedStorage<1, 1, bool>         mSerializedUseClassicSkin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaAppearance();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaAppearance();

    MCNAPI explicit PersonaAppearance(::persona::PieceHandle&&);

    MCNAPI PersonaAppearance(::PersonaAppearance const&);

    MCNAPI PersonaAppearance(
        std::vector<persona::PieceHandle> const&,
        std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&,
        ::mce::Color const&,
        ::SharedTypes::persona::ArmSizeType const&
    );

    MCNAPI bool _doesSerializedPieceContainFlag(::Json::Value const&, char const) const;

    MCNAPI std::string _getSerializedPieceIdNoFlags(::Json::Value const&);

    MCNAPI bool _hasEmote(std::string const&) const;

    MCNAPI bool _isSerializedPieceEmpty(::Json::Value const&) const;

    MCNAPI void _preHandleSettingPiece(::SharedTypes::persona::PieceType);

    MCNAPI void copyEquivalentGroupFrom(::PersonaAppearance const&, ::SharedTypes::persona::PieceType);

    MCNAPI bool fillFromJSON(::SemVersion const&, ::Json::Value const&);

    MCNAPI bool getAllowUnownedPieces() const;

    MCNAPI std::string getArmSizeAsString() const;

    MCNAPI ::SharedTypes::persona::ArmSizeType const& getCustomSkinArmSize() const;

    MCNAPI ::persona::PieceHandle const& getEmote(int) const;

    MCNAPI std::array<persona::PieceHandle, 4> const& getEmoteWheel() const;

    MCNAPI int getEmoteWheelIndex(std::string const&) const;

    MCNAPI ::ButtonIndiciesEnum getEmoteWheelKeyIndicie(std::string const&) const;

    MCNAPI ::persona::PieceHandle const& getEquivalentPiece(::SharedTypes::persona::PieceType) const;

    MCNAPI ulong getNumberOfSetPieces() const;

    MCNAPI ::persona::PieceHandle const& getPiece(::SharedTypes::persona::PieceType) const;

    MCNAPI ::persona::PieceHandle const& getPiece(std::string const&) const;

    MCNAPI std::vector<persona::PieceHandle> const& getPieceVector() const;

    MCNAPI std::vector<persona::PieceHandle>& getPieceVectorMutable();

    MCNAPI bool getSerializedLockedClassicSkin() const;

    MCNAPI ::mce::Color const& getSkinColor() const;

    MCNAPI ::TintMapColor const* getTintMapColor(::SharedTypes::persona::PieceType) const;

    MCNAPI bool getUseClassicSkin() const;

    MCNAPI bool hasClassicSkin() const;

    MCNAPI bool hasEquivalentPieceOfType(::SharedTypes::persona::PieceType const&) const;

    MCNAPI bool hasPiece(std::string const&) const;

    MCNAPI bool hasPiece(::SharedTypes::persona::PieceType const&, std::string const&) const;

    MCNAPI bool hasPieceOfType(::SharedTypes::persona::PieceType const&) const;

    MCNAPI void invalidate();

    MCNAPI bool isAnyEmoteSlotSet() const;

    MCNAPI bool isAppearanceEquivalent(::PersonaAppearance const&) const;

    MCNAPI bool isEmoteSlotSet(int) const;

    MCNAPI bool isEmoteWheelEqual(::PersonaAppearance const&) const;

    MCNAPI bool isPhysicalTraitEqual(::PersonaAppearance const&) const;

    MCNAPI bool isPieceVectorEqual(::PersonaAppearance const&) const;

    MCNAPI bool isPieceVectorExcludingClassicSkinEqual(::PersonaAppearance const&) const;

    MCNAPI bool isTintEqual(::PersonaAppearance const&) const;

    MCNAPI bool isTinted(::SharedTypes::persona::PieceType) const;

    MCNAPI bool isValidAppearance() const;

    MCNAPI bool operator!=(::PersonaAppearance const&) const;

    MCNAPI ::PersonaAppearance& operator=(::PersonaAppearance const&);

    MCNAPI ::PersonaAppearance& operator=(::PersonaAppearance&&);

    MCNAPI bool operator==(::PersonaAppearance const&) const;

    MCNAPI void removeAllEmotes();

    MCNAPI void removeEmote(int);

    MCNAPI bool removeEmotesWithId(std::string const&);

    MCNAPI void removeEquivalentPieces(::SharedTypes::persona::PieceType);

    MCNAPI void setAllowUnownedPieces(bool);

    MCNAPI void setEmote(int, ::persona::PieceHandle const&);

    MCNAPI void setPiece(::persona::PieceHandle const&);

    MCNAPI void setSerializedUseClassicSkin(bool);

    MCNAPI void setTintMap(::SharedTypes::persona::PieceType const, ::TintMapColor const&);

    MCNAPI void setTintMapColor(::SharedTypes::persona::PieceType const, ::mce::Color const&, ushort);

    MCNAPI void setUseClassicSkin(bool);

    MCNAPI ::Json::Value toJSONObject(bool, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PersonaAppearance const& getInvalid();

    MCNAPI static bool isPieceTypeEquivalentToX(::SharedTypes::persona::PieceType, ::SharedTypes::persona::PieceType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::persona::PieceHandle&&);

    MCNAPI void* $ctor(::PersonaAppearance const&);

    MCNAPI void* $ctor(
        std::vector<persona::PieceHandle> const&,
        std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&,
        ::mce::Color const&,
        ::SharedTypes::persona::ArmSizeType const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
