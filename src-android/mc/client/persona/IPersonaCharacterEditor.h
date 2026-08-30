#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class PersonaAppearance;
class SkinHandle;
struct PersonaCharacter;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceHandle; }
namespace persona { struct FreeItemState; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
// clang-format on

class IPersonaCharacterEditor {
public:
    // IPersonaCharacterEditor inner types define
    using LoadCallback = std::function<void(bool)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IPersonaCharacterEditor() = default;

    virtual void changePiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::mce::UUID const&, std::string const&, ::persona::FreeItemState const&, ::SharedTypes::persona::PieceSide, std::function<void (bool)>) = 0;

    virtual void changePieces(::persona::PersonaCharacterHandle const&, std::vector<persona::PieceToChange> const&, std::function<void (bool)>) = 0;

    virtual void removePieceByType(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::SharedTypes::persona::PieceSide const, std::function<void (bool)>) = 0;

    virtual void changeEmote(::persona::PersonaCharacterHandle const&, std::string const&, ::persona::FreeItemState const&, int, std::function<void (bool)>) = 0;

    virtual void removeEmote(::persona::PersonaCharacterHandle const&, int) = 0;

    virtual void removeAllEmotes(::persona::PersonaCharacterHandle const&) = 0;

    virtual void removeEmotesWithId(::persona::PersonaCharacterHandle const&, std::string const&) = 0;

    virtual void changeClassicSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle const&) = 0;

    virtual void changeArmSize(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::ArmSizeType const&, std::function<void (bool)>) = 0;

    virtual void changeHeight(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::BodySizeType const&, std::function<void (bool)>) = 0;

    virtual void changePersonaTintColor(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::mce::Color const&, ushort, std::function<void (bool)>) = 0;

    virtual void changePersonaTintColors(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, std::vector<persona::color::ColorInfo> const&, std::function<void (bool)>) = 0;

    virtual void savePersonaItems(::persona::PersonaCharacterHandle const&) = 0;

    virtual void revertPersona(::persona::PersonaCharacterHandle const&, std::function<void (bool)>) = 0;

    virtual void revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&) = 0;

    virtual bool doesCharacterHavePieceOfTypeX(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&) = 0;

    virtual bool isPieceOwned(::persona::PieceHandle const&) = 0;

    virtual void updatePersonaWithNewAppearance(::PersonaAppearance const&, ::PersonaCharacter&, std::function<void (bool)>) = 0;
    // clang-format on
    // NOLINTEND
};
