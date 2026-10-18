#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class IMinecraftEventing;
class IPersonaPieceProvider;
class ISkinRepository;
class PersonaAppearance;
class PersonaGeometryBuilder;
class PersonaSkinRegistrar;
class PersonaTextureBuilder;
class SkinHandle;
class TaskGroup;
struct PersonaCharacter;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceHandle; }
namespace persona { struct FreeItemState; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
// clang-format on

class PersonaCharacterEditor {
public:
    // PersonaCharacterEditor inner types define
    using AppearanceUpdateFn = std::function<void(const PersonaAppearance&)>;

    using LoadCallback = std::function<void(bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaPieceProvider&>                       mPieceProvider;
    ::ll::TypedStorage<8, 8, ::PersonaTextureBuilder&>                       mTextureBuilder;
    ::ll::TypedStorage<8, 8, ::PersonaGeometryBuilder&>                      mGeometryBuilder;
    ::ll::TypedStorage<8, 8, ::PersonaSkinRegistrar&>                        mSkinRegistrar;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                   mTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISkinRepository>>              mSkinRepository;
    ::ll::UntypedStorage<8, 24>                                              mEntitlementManager;
    ::ll::UntypedStorage<8, 32>                                              mEventing;
    ::ll::TypedStorage<8, 48, std::function<void(const PersonaAppearance&)>> mAppearanceUpdateListener;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCharacterEditor& operator=(PersonaCharacterEditor const&);
    PersonaCharacterEditor(PersonaCharacterEditor const&);
    PersonaCharacterEditor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaCharacterEditor(
        ::IPersonaPieceProvider&,
        ::PersonaTextureBuilder&,
        ::PersonaGeometryBuilder&,
        ::PersonaSkinRegistrar&,
        ::TaskGroup&,
        std::shared_ptr<ISkinRepository>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>
    );

    MCNAPI bool _addFallbackPiece(::PersonaCharacter&, std::string const&);

    MCNAPI bool _changeEmote(::PersonaCharacter&, std::string const&, ::persona::FreeItemState const&, int);

    MCNAPI bool _changePiece(
        ::PersonaCharacter&,
        ::SharedTypes::persona::PieceType const,
        ::mce::UUID const&,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceSide
    );

    MCNAPI void
    _changePieces(::PersonaCharacter&, std::vector<persona::PieceToChange> const&, std::function<void(bool)>);

    MCNAPI void _finalizeCreation(std::string const&, bool, std::function<void(const std::string&)> const&);

    MCNAPI void _updateCharacter(::PersonaCharacter&, std::function<void(bool)>);

    MCNAPI void changeArmSize(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::ArmSizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void changeClassicSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle const&);

    MCNAPI void changeEmote(
        ::persona::PersonaCharacterHandle const&,
        std::string const&,
        ::persona::FreeItemState const&,
        int,
        std::function<void(bool)>
    );

    MCNAPI void changeHeight(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::BodySizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        ::mce::Color const&,
        ushort,
        std::function<void(bool)>
    );

    MCNAPI void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        std::vector<persona::color::ColorInfo> const&,
        std::function<void(bool)>
    );

    MCNAPI void changePiece(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType,
        ::mce::UUID const&,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceSide,
        std::function<void(bool)>
    );

    MCNAPI void changePieces(
        ::persona::PersonaCharacterHandle const&,
        std::vector<persona::PieceToChange> const&,
        std::function<void(bool)>
    );

    MCNAPI void createPersonaFromAppearance(
        std::string const&,
        ::PersonaAppearance const&,
        std::function<void(const std::string&)>,
        bool,
        ::PersonaAppearance const&
    );

    MCNAPI bool
    doesCharacterHavePieceOfTypeX(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI bool isPieceOwned(::persona::PieceHandle const&);

    MCNAPI void removeAllEmotes(::persona::PersonaCharacterHandle const&);

    MCNAPI void removeEmote(::persona::PersonaCharacterHandle const&, int);

    MCNAPI void removeEmotesWithId(::persona::PersonaCharacterHandle const&, std::string const&);

    MCNAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType,
        ::SharedTypes::persona::PieceSide const,
        std::function<void(bool)>
    );

    MCNAPI void revertPersona(::persona::PersonaCharacterHandle const&, std::function<void(bool)>);

    MCNAPI void revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI void savePersonaItems(::persona::PersonaCharacterHandle const&);

    MCNAPI void savePersonaItemsForCharacter(::PersonaCharacter&);

    MCNAPI void setAppearanceUpdateListener(std::function<void(const PersonaAppearance&)>);

    MCNAPI bool tryInitializeFallbackPieces(::PersonaAppearance&, ::PersonaCharacter&);

    MCNAPI void
    updatePersonaWithNewAppearance(::PersonaAppearance const&, ::PersonaCharacter&, std::function<void(bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IPersonaPieceProvider&,
        ::PersonaTextureBuilder&,
        ::PersonaGeometryBuilder&,
        ::PersonaSkinRegistrar&,
        ::TaskGroup&,
        std::shared_ptr<ISkinRepository>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>
    );
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
