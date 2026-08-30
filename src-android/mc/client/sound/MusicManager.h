#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Category.h"
#include "mc/client/sound/CustomMusic.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/sound/MusicRepeatMode.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class LocalPlayer;
class Music;
class Player;
class ResourceLoadManager;
class ResourcePackManager;
class SoundPlayerInterface;
struct BiomeIdType;
namespace Bedrock::Resources { class PreloadedPathHandle; }
// clang-format on

class MusicManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CustomMusic>                                          mCustomMusic;
    ::ll::TypedStorage<1, 1, bool>                                                     mPaused;
    ::ll::TypedStorage<4, 4, int>                                                      mNextSongDelay;
    ::ll::UntypedStorage<8, 24>                                                        mSoundPlayer;
    ::ll::UntypedStorage<8, 24>                                                        mCurrentMusic;
    ::ll::UntypedStorage<8, 24>                                                        mPausedMusic;
    ::ll::TypedStorage<4, 4, ::Category>                                               mLastMusicCategory;
    ::ll::TypedStorage<8, 24, std::string>                                             mCurrentMusicName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<Music>>> mMusicDefinitions;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker>                      mDeferMusicRefCount;
    ::ll::TypedStorage<8, 16, std::shared_ptr<void*>>                                  mInitLoadingDeferment;
    ::ll::TypedStorage<8, 16, std::shared_ptr<void*>>                                  mResumeLoadingDeferment;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mOnPauseStateChangeSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsMusicReady;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MusicManager(::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> const&);

    MCNAPI ::Bedrock::NonOwnerPointer<Music>
    _findBiomeSpecificMusic(::Player const&, std::string const&, std::optional<std::string> const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<Music> _getMusic(std::string const&);

    MCNAPI void fadeToStopMusic();

    MCNAPI bool isEnabled() const;

    MCNAPI void load(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::shared_ptr<std::vector<Bedrock::Resources::PreloadedPathHandle>>
    );

    MCNAPI void playCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    MCNAPI void queueCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>&);

    MCNAPI void setInitLoadingActive(bool);

    MCNAPI void setMusicCommandVolumeMultiplier(float);

    MCNAPI void setResumeLoadingActive(bool);

    MCNAPI void stopCustomMusic(float);

    MCNAPI void update(::LocalPlayer const*, bool const, bool const);

    MCNAPI ~MusicManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldPlayCreativeMusic(bool, ::BiomeIdType const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
