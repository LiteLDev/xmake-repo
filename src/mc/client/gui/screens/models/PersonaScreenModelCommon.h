#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/PreviewedItemEventInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/store_event_data/StoreType.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class DateManager;
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
class IStoreCatalogItem;
class PersonaAppearance;
class PersonaClient;
class PersonaPiece;
class SkinHandle;
struct PersonaCharacter;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct FreeItemState; }
namespace persona::color { class ColorInfo; }
// clang-format on

class PersonaScreenModelCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                  mMinecraft;
    ::ll::UntypedStorage<8, 24>                                  mClient;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                   mSkinRepoClientInterface;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>              mEventing;
    ::ll::TypedStorage<8, 128, ::PreviewedItemEventInformation>  mPreviewedItemInfo;
    ::ll::TypedStorage<8, 8, long>                               mNextPossibleEventTime;
    ::ll::TypedStorage<1, 1, bool>                               mIsCurrentSkinPackOwned;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>             mExistanceTracker;
    ::ll::TypedStorage<8, 32, ::persona::PersonaCharacterHandle> mActiveCharacterHandle;
    ::ll::TypedStorage<1, 1, bool>                               mActiveCharacterInitialized;
    ::ll::TypedStorage<1, 1, bool>                               mWaitingForNewPersona;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaScreenModelCommon& operator=(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaScreenModelCommon();

    virtual void update(::ui::DirtyFlag&);

    virtual void updateSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PersonaScreenModelCommon(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);

    MCNAPI std::function<void(bool)>
           _getNormalPersonaChangedCallback(::persona::PersonaCharacterHandle const&, std::function<void(bool)>);

    MCNAPI void attemptCopyValidActiveAppearanceToCurrentCharacter(std::function<void(bool)>);

    MCNAPI void changePersonaArmSize(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::ArmSizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const&,
        std::string const&,
        ::persona::FreeItemState const&,
        int,
        std::function<void(bool)>
    );

    MCNAPI void changePersonaHeight(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::BodySizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void changePersonaPiece(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        ::mce::UUID const&,
        std::string const&,
        ::persona::FreeItemState const&,
        std::function<void(bool)>,
        ::SharedTypes::persona::PieceSide const
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

    MCNAPI bool createActivePersonaFromCurrentCharacter(std::function<void(bool)>);

    MCNAPI void fireEventPersonaAvatarUpdated(::PersonaAppearance const&, bool);

    MCNAPI void fireEventPersonaGeneralError(::persona::PersonaError) const;

    MCNAPI ::PersonaCharacter const& getActiveCharacter() const;

    MCNAPI ::PersonaCharacter& getActiveCharacter();

    MCNAPI ::persona::PersonaCharacterHandle& getActiveCharacterHandle();

    MCNAPI ::SkinHandle const& getActiveCharacterSkinHandle() const;

    MCNAPI ::PersonaCharacter& getCurrentCharacter();

    MCNAPI ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const;

    MCNAPI ::SkinHandle const& getCurrentCharacterSkinHandle() const;

    MCNAPI ::persona::PieceOfferWrapper getEmotePieceOfferFromAppearance(::persona::PersonaCharacterHandle const&, int);

    MCNAPI ::PersonaCharacter const& getPersonaCharacter(::persona::ProfileType) const;

    MCNAPI ::PersonaCharacter& getPersonaCharacter(::persona::ProfileType);

    MCNAPI int getPersonaFilledSlotsCount() const;

    MCNAPI ::SkinHandle const& getPersonaHandleFromSlot(int) const;

    MCNAPI ::PersonaPiece const& getPersonaPiece(std::string const&) const;

    MCNAPI ::SkinHandle getPersonaSkinHandle(::persona::PersonaCharacterHandle const&);

    MCNAPI ::persona::ProfileType getPersonaType(::persona::PersonaCharacterHandle const&);

    MCNAPI ::persona::ProfileType getSelectedPersonaSkinSlot() const;

    MCNAPI ::PersonaCharacter& getSelectedSlotCharacter();

    MCNAPI ::mce::Color getTintColor(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType, int);

    MCNAPI void invalidateActiveCharacter();

    MCNAPI bool isActivePersonaInitialized() const;

    MCNAPI bool isBuiltInPackId(::mce::UUID const&) const;

    MCNAPI bool isPieceOwned(::IStoreCatalogItem const&);

    MCNAPI void removeAllPersonaEmotes(::persona::PersonaCharacterHandle const&);

    MCNAPI void removeCurrentPersonaSlot();

    MCNAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const&,
        std::function<void(bool)>,
        ::SharedTypes::persona::PieceSide const
    );

    MCNAPI void revertPersona(::persona::PersonaCharacterHandle const&, std::function<void(bool)>);

    MCNAPI void revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI void saveCurrentCharacterPersona();

    MCNAPI void savePersona(::persona::PersonaCharacterHandle const&);

    MCNAPI bool selectNextPersonaSkinSlot();

    MCNAPI bool selectPersonaSlot(int const);

    MCNAPI bool selectPreviousPersonaSkinSlot();

    MCNAPI void updateClassicSkinCape(::persona::PersonaCharacterHandle const&);

    MCNAPI void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&,
        ::persona::PersonaCharacterHandle const&,
        std::function<void(bool)>
    ) const;

    MCNAPI void updatePreviewedItem(::PreviewedItemEventInformation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<mce::UUID> const& mBuiltInSkinPackIds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(::ui::DirtyFlag&);

    MCNAPI void $updateSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/PreviewedItemEventInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
class PersonaAppearance;
class PersonaClient;
class SkinHandle;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct FreeItemState; }
namespace persona::color { class ColorInfo; }
// clang-format on

class PersonaScreenModelCommon {
public:
    // PersonaScreenModelCommon inner types define
    using ColorInfo = ::persona::color::ColorInfo;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                 mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                                  mSkinRepoClientInterface;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
    ::ll::TypedStorage<8, 152, ::PreviewedItemEventInformation>                 mPreviewedItemInfo;
    ::ll::TypedStorage<8, 8, int64>                                             mNextPossibleEventTime;
    ::ll::TypedStorage<1, 1, bool>                                              mIsCurrentSkinPackOwned;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                          mExistanceTracker;
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle>                mActiveCharacterHandle;
    ::ll::TypedStorage<1, 1, bool>                                              mActiveCharacterInitialized;
    ::ll::TypedStorage<1, 1, bool>                                              mWaitingForNewPersona;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaScreenModelCommon& operator=(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaScreenModelCommon() = default;

    virtual void update(::ui::DirtyFlag& dirtyFlags);

    virtual void updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PersonaScreenModelCommon(
        ::IMinecraftGame&                                       minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client
    );

    MCAPI ::std::function<void(bool)> _getNormalPersonaChangedCallback(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::function<void(bool)>              finalCallback
    );

    MCAPI void attemptCopyValidActiveAppearanceToCurrentCharacter(::std::function<void(bool)> callback);

    MCAPI void changePersonaArmSize(
        ::persona::PersonaCharacterHandle const&   handle,
        ::SharedTypes::persona::ArmSizeType const& armSize,
        ::std::function<void(bool)>                callback
    );

    MCAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::string const&                     pieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaHeight(
        ::persona::PersonaCharacterHandle const&    handle,
        ::SharedTypes::persona::BodySizeType const& bodyType,
        ::std::function<void(bool)>                 callback
    );

    MCAPI void changePersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType        pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::std::function<void(bool)>              callback,
        ::SharedTypes::persona::PieceSide        side
    );

    MCAPI void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType        pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          handle,
        ::SharedTypes::persona::PieceType                 pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    );

    MCAPI bool createActivePersonaFromCurrentCharacter(::std::function<void(bool)> callback);

    MCAPI void fireEventPersonaAvatarUpdated(::PersonaAppearance const& oldAppearance, bool isBeingDeleted);

    MCAPI ::std::string
    getEmoteFileSystemFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::persona::PieceOfferWrapper
    getEmotePieceOfferFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::SkinHandle getPersonaClassicSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI ::SkinHandle getPersonaSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI ::mce::Color
    getTintColor(::persona::PersonaCharacterHandle const& handle, ::SharedTypes::persona::PieceType type, int channel);

    MCAPI bool isEmoteSlotSetOnCurrentAppearance(int emoteWheelSlot);

    MCAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType const& pieceTypeToRemove,
        ::std::function<void(bool)>              callback,
        ::SharedTypes::persona::PieceSide        side
    );

    MCAPI void
    revertPersona(::persona::PersonaCharacterHandle const& characterHandle, ::std::function<void(bool)> callback);

    MCAPI void saveCurrentCharacterPersona();

    MCAPI void savePersona(::persona::PersonaCharacterHandle const& characterHandle);

    MCAPI void updatePreviewedItem(::PreviewedItemEventInformation previewedItemEventInfo);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::mce::UUID> const& mBuiltInSkinPackIds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame& minecraft, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(::ui::DirtyFlag& dirtyFlags);

    MCAPI void $updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND
};
#else // @header-generator platform
class PersonaScreenModelCommon {};
#endif // @header-generator platform
#endif // @header-generator platform
