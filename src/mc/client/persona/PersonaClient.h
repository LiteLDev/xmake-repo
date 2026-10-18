#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/DefaultSkinType.h"
#include "mc/client/persona/IPersonaClient.h"
#include "mc/client/persona/PickCustomSkinResult.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/client/persona/SyncContext.h"
#include "mc/client/services/persona/PersonaCharacterHandleArray.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class CustomSkinManager;
class DateManager;
class IClientInstance;
class IPersonaRepository;
class OptionRegistry;
class PersonaAppearance;
class PersonaPiece;
class PersonaRepository;
class PersonaService;
class ResourceLocation;
class Skin;
class SkinPack;
class SkinRepository;
class TaskGroup;
struct PersonaCharacter;
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Social { class IUserManager; }
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { struct FreeItemState; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
namespace persona::edu { class Context; }
// clang-format on

class PersonaClient : public ::IPersonaClient, public ::std::enable_shared_from_this<PersonaClient> {
#else // @header-generator platform
class PersonaClient {
#endif // @header-generator platform
public:
    // PersonaClient inner types declare
    // clang-format off
    class SkinEntitlementChangeListener;
    // clang-format on

    // PersonaClient inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SyncSource : int {
        Cache   = 0,
        Edu     = 1,
        Service = 2,
    };
#else // @header-generator platform
    enum class SyncSource : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class SkinEntitlementChangeListener : public ::EntitlementChangeListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PersonaClient*>     mPersonaClient;
        ::ll::TypedStorage<8, 16, std::weak_ptr<bool>> mExistanceTracker;
        // NOLINTEND

    public:
        // prevent constructor by default
        SkinEntitlementChangeListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SkinEntitlementChangeListener();

        virtual void _onEntitlementRefreshFinished();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $_onEntitlementRefreshFinished();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    using OnPersonaSyncedCallback = std::function<void()>;

    using CreatePersonaCallback = std::function<void(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinRepository>>                         mSkinRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CustomSkinManager>>                       mCustomSkinManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                       mClient;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                                     mPersonaRepository;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<persona::edu::Context>>> mEduContext;
    ::ll::UntypedStorage<8, 24>                                                        mUserManager;
    ::ll::UntypedStorage<8, 24>                                                        mDateManager;
    ::ll::UntypedStorage<8, 24>                                                        mPersonaService;
    ::ll::UntypedStorage<8, 24>                                                        mOptions;
    ::ll::UntypedStorage<8, 48>                                                        mOnPersonaSyncedCallback;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mStorageOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mSkinIdOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mXuidOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mPlayfabUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mPlayfabUserSignOutSubscription;
    ::ll::TypedStorage<8, 96, ::SkinHandle>                                            mSelectedSkinHandle;
    ::ll::TypedStorage<8, 96, ::SkinHandle>                                            mPendingSelectedSkin;
    ::ll::TypedStorage<1, 1, bool>                                                     mSelectedSkinInitialized;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                mRecentSkinSerializableNames;
    ::ll::TypedStorage<4, 4, uint>                                                     mUserId;
    ::ll::TypedStorage<8, 32, ::persona::PersonaCharacterHandle>                       mSendPacketForCharacterAfterSave;
    ::ll::TypedStorage<4, 4, int>                                                      mControllerId;
    ::ll::TypedStorage<8, 24, std::string>                                             mXuid;
    ::ll::UntypedStorage<8, 16>                                                        mLastQueuedSync;
    ::ll::UntypedStorage<8, 24>                                                        mSkinPublishReadyPromise;
    ::ll::TypedStorage<1, 1, bool>                                                     mSkinPublishReady;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                                   mExistanceTracker;
    ::ll::TypedStorage<1, 1, bool>                                                     mUserUpdateInProcess;
    ::ll::TypedStorage<8, 8, long>                                                     mPersonaSyncStartTime;
    ::ll::TypedStorage<1, 1, bool>                                                     mPersonaSyncInitialized;
    ::ll::TypedStorage<1, 1, bool>                                      mSelectedSkinInitializedNotTimedOut;
    ::ll::TypedStorage<1, 1, bool>                                      mCustomSkinCleanupDone;
    ::ll::TypedStorage<8, 40, std::unordered_set<persona::ProfileType>> mProcessingProfileTypes;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>                    mCurrentProfileType;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>                    mSelectedSlot;
    ::ll::TypedStorage<8, 192, ::persona::PersonaCharacterHandleArray>  mPersonaCharacterHandles;
    ::ll::TypedStorage<8, 32, ::persona::PersonaCharacterHandle>        mTemporaryPersonaHandle;
    ::ll::TypedStorage<1, 1, bool>                                      mPendingSplitScreenInitSkinUpdate;
    ::ll::TypedStorage<8, 32, ::persona::SyncContext>                   mSyncContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PersonaClient::SkinEntitlementChangeListener>> mEntitlementChangeListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                     mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaClient& operator=(PersonaClient const&);
    PersonaClient(PersonaClient const&);
    PersonaClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PersonaClient();

    virtual void createUpdatePersonaFromAppearance(::PersonaAppearance const&, ::persona::ProfileType, std::function<void (SkinHandle)>, ::persona::PersonaCharacterHandle const&, bool, bool);

    virtual ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const;

    virtual ::IPersonaRepository const& getPersonaRepository() const;

    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    virtual bool isSelectedSkinPlatformLocked() const;

    virtual void savePersona(::persona::PersonaCharacterHandle const&);

    virtual void sendNewPlayerSkinPacket(::persona::ProfileType const, std::string const&, bool);

    virtual void setPersonaLegacySlotSkin(::SkinHandle const&) const;

    virtual void updateCharacterSkinData(::persona::PersonaCharacterHandle const&, ::SkinHandle const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaClient(
        std::shared_ptr<SkinRepository>,
        ::PersonaRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> const,
        std::weak_ptr<OptionRegistry>,
        uint const&,
        int const&,
        ::IClientInstance&,
        std::function<void()>
    );

    MCNAPI std::function<void(const std::string&)>
           _constructCreatePersonaCallback(::persona::ProfileType const, std::function<void()>&&);

    MCNAPI void _createDefaultPersonaInSlot(::persona::ProfileType, int);

    MCNAPI void _firstTimePersonaSlotSetup();

    MCNAPI ::SkinHandle _getAppearanceFromCharacter(::PersonaCharacter const&) const;

    MCNAPI void _handleNewScreen(std::function<void(const std::string&)>);

    MCNAPI void _handleReenteringScreen(::persona::PersonaCharacterHandle&, std::function<void(const std::string&)>);

    MCNAPI void _invalidatePersonaProfiles();

    MCNAPI bool _isPrimaryUser() const;

    MCNAPI void _onPlayFabSignIn(uint);

    MCNAPI void _registerGeoDefaultSkins(::persona::DefaultSkinType);

    MCNAPI void _replaceSlotHandle(::persona::ProfileType, ::persona::PersonaCharacterHandle const&);

    MCNAPI void _runSync(::PersonaClient::SyncSource);

    MCNAPI void _setAppearanceOption(::Skin const*);

    MCNAPI void _setSelectedAppearance(::Skin const*, bool const, std::function<void(SkinHandle)>);

    MCNAPI void _startInitForEdu(std::string const&);

    MCNAPI void _updateSelectedAppearance(::SkinHandle const&, bool, std::function<void(SkinHandle)>);

    MCNAPI bool _updateSelectedPersonaProfileSkin();

    MCNAPI void addRecentSkin(std::string const&);

    MCNAPI bool arePersonaAppearancesLoading() const;

    MCNAPI bool canUseSkin(::Skin const*) const;

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
        ::SharedTypes::persona::PieceSide const,
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

    MCNAPI void createPersona(::persona::ProfileType, uint const, std::function<void()>);

    MCNAPI void createPersona(::persona::ProfileType, ::mce::UUID const&, std::function<void()>);

    MCNAPI void equipDefaultSkin();

    MCNAPI void firePersonaInitializationCompleteEvent();

    MCNAPI ::PersonaCharacter& getCurrentPersonaCharacter() const;

    MCNAPI ::persona::ProfileType getCurrentPersonaCharacterType() const;

    MCNAPI ::Skin const& getDefaultSkin() const;

    MCNAPI ::Skin const& getDefaultSkin(::persona::DefaultSkinType) const;

    MCNAPI ::Skin const* getDefaultSkinBySerializableName(std::string const&) const;

    MCNAPI std::weak_ptr<EntitlementChangeListener> getEntitlementChangeListener() const;

    MCNAPI std::vector<int> getFailedAppearanceForToast();

    MCNAPI int getLastCustomSkinIndex() const;

    MCNAPI std::vector<persona::ProfileType> getNonLegacyPersonaFilledSlots() const;

    MCNAPI int getNonLegacyPersonaFilledSlotsCount() const;

    MCNAPI ::SkinHandle getPendingSelectedSkin() const;

    MCNAPI ::PersonaAppearance const& getPersonaAppearanceFromCurrentCharacter() const;

    MCNAPI ::PersonaCharacter& getPersonaCharacter(std::string const&) const;

    MCNAPI ::PersonaCharacter& getPersonaCharacter(::persona::PersonaCharacterHandle const&) const;

    MCNAPI ::PersonaCharacter& getPersonaCharacter(::persona::ProfileType) const;

    MCNAPI ::SkinHandle const& getPersonaHandleFromSlot(int) const;

    MCNAPI ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const;

    MCNAPI std::string getPlayFabIdFromUser();

    MCNAPI ::persona::ProfileType getSelectedPersonaSkinSlot() const;

    MCNAPI std::string const& getSelectedProfileHash() const;

    MCNAPI ::Skin const* getSelectedSkin() const;

    MCNAPI ::Skin const& getSelectedSkinOrDefault(bool);

    MCNAPI ::PersonaCharacter& getSelectedSlotPersonaCharacter() const;

    MCNAPI ::Skin const* getSkinBySerializableName(std::string const&) const;

    MCNAPI ::SkinHandle getSkinHandleFromCharacter(::PersonaCharacter const&) const;

    MCNAPI ::SkinPack* getSkinPackById(::mce::UUID const&) const;

    MCNAPI ::persona::PersonaCharacterHandle const&
    getTemporaryPersonaCharacterHandle(::persona::PersonaCharacterHandle&, std::function<void(const std::string&)>);

    MCNAPI ::persona::PersonaCharacterHandle const& getTemporaryPersonaHandle() const;

    MCNAPI bool hasDefaultSkin(::persona::DefaultSkinType) const;

    MCNAPI bool hasFailedAppearancesForToast();

    MCNAPI void initialize();

    MCNAPI bool isPersonaAppearanceLoading(int const) const;

    MCNAPI bool isPersonaInitializationComplete() const;

    MCNAPI bool isSelectedSkinInitialized() const;

    MCNAPI bool isSelectedSkinInitializedWithoutTimedOut() const;

    MCNAPI bool isSkinHandleDummySkin(::SkinHandle const&) const;

    MCNAPI bool isValidSelectedSkin(::mce::UUID const&, int) const;

    MCNAPI void pickCustomSkin(std::function<void(PickCustomSkinResult)>);

    MCNAPI void removeAllPersonaEmotes(::persona::PersonaCharacterHandle const&);

    MCNAPI void removeCurrentPersonaSlot();

    MCNAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const&,
        ::SharedTypes::persona::PieceSide const,
        std::function<void(bool)>
    );

    MCNAPI void removeTemporaryAppearance();

    MCNAPI void revertPersona(::persona::PersonaCharacterHandle const&, std::function<void(bool)>);

    MCNAPI void revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI bool selectNextPersonaSkinSlot();

    MCNAPI bool selectPersonaSlot(::persona::ProfileType);

    MCNAPI bool selectPreviousPersonaSkinSlot();

    MCNAPI void setSelectedSkin(::Skin const*, std::function<void(SkinHandle)>);

    MCNAPI void setSelectedSkin(std::string const&, std::function<void(SkinHandle)>);

    MCNAPI void setSelectedSkinHandle(::SkinHandle const&);

    MCNAPI void setSelectedSkinToPersona(bool);

    MCNAPI void tryFullPersonaReload(::persona::ProfileType);

    MCNAPI void trySyncPendingSplitScreenSkin();

    MCNAPI void update();

    MCNAPI void updateClassicSkinCape(::persona::PersonaCharacterHandle const&);

    MCNAPI void updatePersonaFromAppearance(::persona::ProfileType, std::function<void(SkinHandle)>);

    MCNAPI void updatePersonaFromAppearance(
        ::persona::PersonaCharacterHandle const&,
        ::persona::ProfileType,
        ::PersonaAppearance const&,
        std::function<void(SkinHandle)>
    );

    MCNAPI void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&,
        ::persona::PersonaCharacterHandle const&,
        std::function<void(bool)>
    );

    MCNAPI void updatePlayerDisplayNames(::PersonaCharacter&);

    MCNAPI void updateSelectedPersonaSkinSlot(::SkinHandle const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SkinHandle getDefaultSkinHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Skin& mInvalidSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<SkinRepository>,
        ::PersonaRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> const,
        std::weak_ptr<OptionRegistry>,
        uint const&,
        int const&,
        ::IClientInstance&,
        std::function<void()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createUpdatePersonaFromAppearance(
        ::PersonaAppearance const&,
        ::persona::ProfileType,
        std::function<void(SkinHandle)>,
        ::persona::PersonaCharacterHandle const&,
        bool,
        bool
    );

    MCNAPI ::persona::PersonaCharacterHandle $getCurrentCharacterHandle() const;

    MCNAPI ::IPersonaRepository const& $getPersonaRepository() const;

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI bool $isSelectedSkinPlatformLocked() const;

    MCNAPI void $savePersona(::persona::PersonaCharacterHandle const&);

    MCNAPI void $sendNewPlayerSkinPacket(::persona::ProfileType const, std::string const&, bool);

    MCNAPI void $setPersonaLegacySlotSkin(::SkinHandle const&) const;

    MCNAPI void $updateCharacterSkinData(::persona::PersonaCharacterHandle const&, ::SkinHandle const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    class SkinEntitlementChangeListener {};
#endif // @header-generator platform
};
