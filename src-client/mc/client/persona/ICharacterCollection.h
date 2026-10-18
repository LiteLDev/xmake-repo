#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PersonaCharacter;
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

namespace persona {

class ICharacterCollection {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const&) = 0;

    virtual ::PersonaCharacter& getCharacter(std::string const&) = 0;

    virtual void removeCharacter(::persona::PersonaCharacterHandle const&) = 0;

    virtual void removeCharacter(std::string const&) = 0;
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
