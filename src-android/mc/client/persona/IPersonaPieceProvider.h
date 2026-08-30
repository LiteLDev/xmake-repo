#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class PersonaPiece;
struct PersonaCharacter;
namespace persona { class PieceHandle; }
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class IPersonaPieceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaPieceProvider() = default;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const = 0;

    virtual bool isPersonaPieceInRepo(std::string const&) const = 0;

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const&) = 0;

    virtual ::PersonaCharacter& getCharacter(std::string const&) = 0;

    virtual ::PersonaPiece const& getPieceFromClassicSkin(std::string const&, bool const) const = 0;

    virtual ::persona::PieceHandle getPieceHandle(std::string const&) const = 0;

    virtual std::vector<std::string> const& getPieceIdsByType(::SharedTypes::persona::PieceType) const = 0;
    // NOLINTEND
};
