#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class PersonaAppearance;
class SkinHandle;
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class IPersonaClient {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IPersonaClient() = default;

    virtual void createUpdatePersonaFromAppearance(::PersonaAppearance const&, ::persona::ProfileType, std::function<void (SkinHandle)>, ::persona::PersonaCharacterHandle const&, bool, bool) = 0;

    virtual ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const = 0;

    virtual ::IPersonaRepository const& getPersonaRepository() const = 0;

    virtual ::SkinHandle const& getSelectedSkinHandle() const = 0;

    virtual bool isSelectedSkinPlatformLocked() const = 0;

    virtual void savePersona(::persona::PersonaCharacterHandle const&) = 0;

    virtual void sendNewPlayerSkinPacket(::persona::ProfileType const, std::string const&, bool) = 0;

    virtual void setPersonaLegacySlotSkin(::SkinHandle const&) const = 0;

    virtual void updateCharacterSkinData(::persona::PersonaCharacterHandle const&, ::SkinHandle const&) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IPersonaClient {};
#endif // @header-generator platform
