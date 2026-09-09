#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class DateManager;
class Pack;
class PersonaAppearance;
class PersonaPiece;
class SemVersion;
class SkinHandle;
class TintMapColor;
struct PersonaCharacter;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class DefaultAppearanceManager; }
namespace persona { class PersonaCharacterHandleArray; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct DefaultAppearance; }
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class IPersonaRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual bool isInitialized() const = 0;

    virtual bool isOfferLoading(::persona::PieceOfferWrapper const&) const = 0;

    virtual bool isPieceLoaded(::mce::UUID const&) const = 0;

    virtual bool isKnownPersonaPiece(::mce::UUID const&) const = 0;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const&) const = 0;

    virtual bool isLoadingAppearances(::persona::PersonaCharacterHandleArray const&) const = 0;

    virtual bool isLoadingAppearance(::persona::PersonaCharacterHandle const&) const = 0;

    virtual bool isPersonaPieceLoading(::mce::UUID const&) const = 0;

    virtual bool isPersonaPieceInRepo(std::string const&) const = 0;

    virtual bool isPersonaPieceInRepo(::mce::UUID const&) const = 0;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const = 0;

    virtual void forEachPersonaPack(std::function<void (const Pack&)> const&) const = 0;

    virtual std::vector<persona::PieceOfferWrapper> getDefaultPieceWrappersOfTypes(std::vector<SharedTypes::persona::PieceType> const&) const = 0;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const&) const = 0;

    virtual ::persona::PersonaCharacterHandle createPersonaOnUser(::persona::ProfileType, ::PersonaAppearance const&, std::string const&, std::function<void (const std::string&)>) = 0;

    virtual ::persona::PersonaCharacterHandle createAStartingPersonaOnUser(::persona::ProfileType, std::string const&, int, std::function<void (const std::string&)>) = 0;

    virtual ::PersonaAppearance createAppearancefromData(std::vector<persona::PieceHandle> const&, std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&, ::mce::Color const&, ::SharedTypes::persona::ArmSizeType const&) = 0;

    virtual ::SkinHandle createPersona(::persona::ProfileType, ::PersonaAppearance const&, std::string const&, std::function<void (const std::string&)>) = 0;

    virtual ::SkinHandle createAStartingPersona(::persona::ProfileType, ::mce::UUID const&, std::string const&, std::function<void (const std::string&)>) = 0;

    virtual ::SkinHandle createAStartingPersona(::persona::ProfileType, std::string const&, uint const, std::function<void (const std::string&)>) = 0;

    virtual void tryToReloadPersona(::persona::PersonaCharacterHandle const&, ::PersonaAppearance const&, std::function<void (const std::string&)>) = 0;

    virtual bool isAppearanceDefault(::PersonaAppearance const&) const = 0;

    virtual ::PersonaPiece const& getPieceFromClassicSkin(std::string const&, bool const) const = 0;

    virtual void saveOfflinePersonaCatalogCache() = 0;

    virtual void loadOfflinePersonaCatalogCache() = 0;

    virtual void loadPiecePack(::mce::UUID) = 0;

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<std::shared_ptr<Pack>>) = 0;

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const&) = 0;

    virtual ::PersonaCharacter& getCharacter(std::string const&) = 0;

    virtual void removeCharacter(::persona::PersonaCharacterHandle const&) = 0;

    virtual void removeCharacter(std::string const&) = 0;

    virtual void registerPersonaSkinsForCharacter(::PersonaCharacter&, std::string const&) = 0;

    virtual ::persona::PieceHandle getPieceHandle(std::string const&) const = 0;

    virtual ::persona::DefaultAppearance const& getDefaultAppearance(uint const&) = 0;

    virtual ::persona::DefaultAppearanceManager const& getDefaultAppearanceManager() const = 0;

    virtual void createSplitscreenUser(std::string, int, ::Json::Value&&) = 0;

    virtual ::PersonaAppearance const getSplitscreenAppearance(std::string const&, int const) = 0;

    virtual void saveSplitscreenAppearanceData(std::string const&, int, ::Json::Value&&) = 0;

    virtual void loadDefaultCharactersIfNeeded() = 0;

    virtual void addToOfflinePersonaCatalogMap(::persona::PieceOfferWrapper const&, std::string const) = 0;

    virtual std::vector<std::string> const getAllPiecesFromOfflineMapForPlayfabId(std::string const&) const = 0;

    virtual void loadOfflinePieceMapIntoStoreCatalog(::DateManager const&) = 0;

    virtual void queuePersonaGeneralError(::persona::PersonaError) = 0;

    virtual void downloadAndLoadPieces(std::vector<std::string> const&, std::vector<std::string> const&) = 0;

    virtual void update(bool, std::shared_ptr<ActorAnimationGroup>) = 0;

    virtual void reloadEmoteAnimationData(std::shared_ptr<ActorAnimationGroup>) = 0;

    virtual ::PersonaCharacter& _addCharacter(::persona::ProfileType, std::string const&) = 0;
    // clang-format on
    // NOLINTEND
};
