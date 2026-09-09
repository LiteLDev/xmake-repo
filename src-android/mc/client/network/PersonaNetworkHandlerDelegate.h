#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/IPersonaNetworkHandlerDelegate.h"
#include "mc/client/network/PersonaSessionManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class ILevel;
class IMinecraftEventing;
class PersonaAppearance;
class PersonaService;
class Player;
class SerializedSkinRef;
class SkinProcessingRequest;
namespace mce { struct Image; }
namespace persona { class PieceHandle; }
// clang-format on

class PersonaNetworkHandlerDelegate : public ::IPersonaNetworkHandlerDelegate {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::PersonaSessionManager> mPersonaSessionManager;
    ::ll::UntypedStorage<8, 24> mPersonaService;
    ::ll::UntypedStorage<8, 24> mEventing;
    ::ll::TypedStorage<8, 24, std::string> mDeviceId;
    ::ll::TypedStorage<1, 1, schar> mClientSubId;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinProcessingRequest>>> mPendingPersonaSkinsToProcess;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinProcessingRequest>>> mPendingLegacySkinsToProcess;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinProcessingRequest>>> mSkinsCurrentlyProcessing;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, uint>> mLastSkinRequestId;
    ::ll::TypedStorage<4, 4, uint> mSkinsRemainingToProcess;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSkinBeganProcessingTimePoint;
    ::ll::TypedStorage<4, 4, uint> mSkinRequestIdCount;
    ::ll::UntypedStorage<8, 24> mClientLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistanceTracker;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaNetworkHandlerDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaNetworkHandlerDelegate();

    virtual void setClientLevel(::Bedrock::NonOwnerPointer<ILevel>);

    virtual void onTick(::IClientInstance&);

    virtual void onEntityRemoved(::Actor&);

    virtual void onLevelDestruction();

    virtual void addSkinToQueue(::mce::UUID const&, ::SerializedSkinRef const&);

    virtual void eraseSessionPersona(::mce::UUID const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaNetworkHandlerDelegate(
        ::PersonaSessionManager&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>> const&,
        std::string,
        schar
    );

    MCNAPI void _applyPlayerSkin(
        ::IClientInstance&,
        ::SkinProcessingRequest const&,
        ::SerializedSkinRef const&,
        ::mce::Image const*,
        ::mce::Image const*
    );

    MCNAPI void _enqueuePlayerSkins(::IClientInstance&, std::vector<std::shared_ptr<SkinProcessingRequest>>&);

    MCNAPI void
    _fetchLodSkinTexture(::IClientInstance&, std::string const&, std::string, std::string const&, std::weak_ptr<bool>);

    MCNAPI bool
    _findAndRemovePendingSkinRequests(::mce::UUID const&, std::vector<std::shared_ptr<SkinProcessingRequest>>&);

    MCNAPI void
    _processPersonaSkin(::IClientInstance&, ::PersonaAppearance const&, std::shared_ptr<SkinProcessingRequest>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PersonaSessionManager&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>> const&,
        std::string,
        schar
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
    MCNAPI void $setClientLevel(::Bedrock::NonOwnerPointer<ILevel>);

    MCNAPI void $onTick(::IClientInstance&);

    MCNAPI void $onEntityRemoved(::Actor&);

    MCNAPI void $onLevelDestruction();

    MCNAPI void $addSkinToQueue(::mce::UUID const&, ::SerializedSkinRef const&);

    MCNAPI void $eraseSessionPersona(::mce::UUID const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
