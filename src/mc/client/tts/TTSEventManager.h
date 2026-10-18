#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/tts/ITTSEventManager.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/platform/AppFocusState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class ProfanityContext;
class TTSEvent;
class TextToSpeechClient;
namespace OreUI { class Router; }
namespace OreUI { class RouterLocation; }
// clang-format on

class TTSEventManager : public ::ITTSEventManager, public ::AppPlatformListener {
public:
    // TTSEventManager inner types define
    using TTSUnreadableCharacterLocalizationMap = std::unordered_map<char, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<AppFocusState>> mAppFocusOverride;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<TTSEvent>>> mQueue;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TTSEvent>> mActiveEvent;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastMessageTimePoint;
    ::ll::UntypedStorage<8, 24> mProfanityContext;
    ::ll::TypedStorage<8, 16, std::weak_ptr<TextToSpeechClient>> mTTSClient;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMainUIRouterOnRouteChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mClientUIRouterOnRouteChangedSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TTSEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TTSEventManager();

    virtual void enqueueTTSEvent(std::string const&, ::ProfanityFilterContext, bool, std::string const&, bool, bool, bool);

    virtual bool isChatTextToSpeechEnabled() const;

    virtual bool isUITextToSpeechEnabled() const;

    virtual bool isTTSClientIdle() const;

    virtual void clearAllTTSEvents(bool const);

    virtual void clearInterruptibleTTSEventsByFocusChange();

    virtual bool ttsEventQueued() const;

    virtual void onAppFocusLost();

    virtual void stopSpeaking(bool const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TTSEventManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const&,
        std::weak_ptr<TextToSpeechClient>,
        std::shared_ptr<OptionRegistry>,
        ::OreUI::Router*,
        ::OreUI::Router*
    );

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string _getSpeakableCharacter(char const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const&,
        std::weak_ptr<TextToSpeechClient>,
        std::shared_ptr<OptionRegistry>,
        ::OreUI::Router*,
        ::OreUI::Router*
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
    MCNAPI void
    $enqueueTTSEvent(std::string const&, ::ProfanityFilterContext, bool, std::string const&, bool, bool, bool);

    MCNAPI bool $isChatTextToSpeechEnabled() const;

    MCNAPI bool $isUITextToSpeechEnabled() const;

    MCNAPI bool $isTTSClientIdle() const;

    MCNAPI void $clearAllTTSEvents(bool const);

    MCNAPI void $clearInterruptibleTTSEventsByFocusChange();

    MCNAPI bool $ttsEventQueued() const;

    MCNAPI void $onAppFocusLost();

    MCNAPI void $stopSpeaking(bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TTSEventManager {};
#endif // @header-generator platform
