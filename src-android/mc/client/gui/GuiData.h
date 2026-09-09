#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/game/IConfigListener.h"
#include "mc/client/gui/ContentLogMessage.h"
#include "mc/client/gui/GuiMessage.h"
#include "mc/client/gui/ScreenSizeData.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/screens/MenuPointer.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/PlayerInventorySlotData.h"

// auto generated forward declare list
// clang-format off
class Config;
class DevConsoleLogger;
class IClientInstance;
class IOptionRegistry;
class ItemStackBase;
class TextObjectRoot;
class Vec2;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GuiData : public ::IConfigListener, public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // GuiData inner types declare
    // clang-format off
    struct MessageConfig;
    // clang-format on

    // GuiData inner types define
    struct MessageConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>                            messageType;
        ::ll::TypedStorage<8, 24, std::string>                username;
        ::ll::TypedStorage<8, 24, std::string>                message;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> filteredMessage;
        ::ll::TypedStorage<8, 24, std::string>                ttsMessage;
        ::ll::TypedStorage<4, 4, float>                       lifeTime;
        ::ll::TypedStorage<1, 1, bool>                        forceVisible;
        ::ll::TypedStorage<1, 1, bool>                        ttsRequired;
        ::ll::TypedStorage<8, 24, std::string>                xuid;
        ::ll::TypedStorage<8, 24, std::string const>          platformId;
        ::ll::TypedStorage<1, 1, bool>                        enableEmoticonify;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageConfig& operator=(MessageConfig const&);
        MessageConfig();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MessageConfig(::GuiData::MessageConfig const&);

        MCNAPI MessageConfig(
            ::GuiMessage::MessageType,
            std::string const&,
            std::string const&,
            std::optional<std::string> const&,
            std::string const&,
            float,
            bool,
            bool,
            std::string const&,
            std::string const&
        );

        MCNAPI ~MessageConfig();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::GuiData::MessageConfig const&);

        MCNAPI void* $ctor(
            ::GuiMessage::MessageType,
            std::string const&,
            std::string const&,
            std::optional<std::string> const&,
            std::string const&,
            float,
            bool,
            bool,
            std::string const&,
            std::string const&
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 24, ::ScreenSizeData> mScreenSizeData;
    ::ll::TypedStorage<1, 1, bool> mScreenSizeDataValid;
    ::ll::TypedStorage<4, 4, float> mGuiScale;
    ::ll::TypedStorage<4, 4, float> mInvGuiScale;
    ::ll::TypedStorage<1, 1, bool> mOverlappingControlsExist;
    ::ll::TypedStorage<1, 1, bool> mIsCurrentlyActive;
    ::ll::TypedStorage<8, 24, std::set<int>> mPostedErrors;
    ::ll::UntypedStorage<1, 2> mMenuPointer;
    ::ll::TypedStorage<2, 2, short> mPointerX;
    ::ll::TypedStorage<2, 2, short> mPointerY;
    ::ll::TypedStorage<1, 1, bool> mHasShowPreexistingMessages;
    ::ll::TypedStorage<1, 1, bool> mToolbarWasRendered;
    ::ll::TypedStorage<4, 4, int> mPrevSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID> mPrevSelectedInventoryContainer;
    ::ll::TypedStorage<4, 4, int> mFlashSlotId;
    ::ll::TypedStorage<8, 8, double> mFlashSlotStartTime;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mToolbarArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mToolbarAreaContainer;
    ::ll::TypedStorage<8, 24, std::string> mLastPopupText;
    ::ll::TypedStorage<8, 24, std::string> mLastPopupSubtitleText;
    ::ll::TypedStorage<8, 24, std::string> mLastJukeboxPopupText;
    ::ll::TypedStorage<8, 24, std::string> mLastJukeboxPopupSubtitleText;
    ::ll::TypedStorage<4, 4, int> mTickCount;
    ::ll::TypedStorage<4, 4, float> mItemNameOverlayTime;
    ::ll::TypedStorage<4, 4, float> mJukeboxNameOverlayTime;
    ::ll::TypedStorage<1, 1, bool> mPopupNoticeDirty;
    ::ll::TypedStorage<1, 1, bool> mJukeboxPopupNoticeDirty;
    ::ll::TypedStorage<8, 24, std::vector<GuiMessage>> mGuiMessages;
    ::ll::TypedStorage<8, 24, std::vector<GuiMessage>> mSubtitleMessages;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDevConsoleMessages;
    ::ll::TypedStorage<4, 4, int> mMaxDevConsoleMessages;
    ::ll::TypedStorage<8, 24, std::vector<ContentLogMessage>> mContentLogMessages;
    ::ll::TypedStorage<8, 8, ulong> mContentLogErrorCount;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPerfTurtleMessages;
    ::ll::TypedStorage<8, 312, std::optional<ModalScreenData>> mModalScreenData;
    ::ll::TypedStorage<8, 184, ::TitleMessage> mTitleMessage;
    ::ll::TypedStorage<4, 52, std::array<HudVisibility, 13>> mHudVisibilityState;
    ::ll::TypedStorage<4, 4, uint> mServerSettingsId;
    ::ll::TypedStorage<8, 24, std::string> mServerSettings;
    ::ll::TypedStorage<1, 1, bool> mMuteChat;
    ::ll::TypedStorage<4, 4, float> mCurrentDropTicks;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData> mCurrentDropSlot;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData> mLastSelectedSlot;
    ::ll::TypedStorage<1, 1, bool> mShowProgress;
    ::ll::TypedStorage<8, 24, std::string> mTipMessage;
    ::ll::TypedStorage<4, 4, float> mTipMessageLength;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mRcFeedbackOuter;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mRcFeedbackInner;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mVignette;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mInvFillMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mCursorMat;
    ::ll::UntypedStorage<8, 24> mDevConsoleLogger;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTickTime;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<GuiMessage>>> mDelayedMessages;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mQueuedDevConsoleMessages;
    ::ll::TypedStorage<4, 40, std::mutex> mQueuedDevMessagesMutex;
    ::ll::TypedStorage<1, 1, bool> mUseEditorGuiScale;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mHUDHotbarRectangle;
    ::ll::TypedStorage<1, 1, ::CoordinateCaptureType> mCoordinateCaptureType;
    ::ll::UntypedStorage<8, 88> mOnGuiScaleUpdatedPublisher;
    ::ll::UntypedStorage<8, 88> mServerFormDataAvailable;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GuiData& operator=(GuiData const&);
    GuiData(GuiData const&);
    GuiData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuiData();

    virtual void onConfigChanged(::Config const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GuiData(::IClientInstance&);

    MCNAPI void _addMessage(::GuiData::MessageConfig, ::ProfanityFilterContext);

    MCNAPI void _addMessage(::GuiMessage, ::ProfanityFilterContext);

    MCNAPI void _setSubtitleInternal(std::string const&, std::optional<std::string> const);

    MCNAPI void _setTitleInternal(std::string const&, std::optional<std::string> const);

    MCNAPI void addContentLogMessage(::ContentLogMessage const&);

    MCNAPI void addDevConsoleMessage(std::string const&);

    MCNAPI void addSubtitle(std::string const&, ::SoundDirection, bool);

    MCNAPI float calculateGuiScale(::Vec2 const&, ::Vec2 const&, float, ::cg::math::Rect<float> const&);

    MCNAPI int calculateMaxGuiScaleIndex(::Vec2 const&) const;

    MCNAPI int calculateOptimalGuiScaleIndex(::Vec2 const&) const;

    MCNAPI float ceilAlignToScreenPixel(float) const;

    MCNAPI ::Vec2 ceilToGuiScale(::Vec2 const&) const;

    MCNAPI void clearContentLogMessages();

    MCNAPI void clearDevConsoleScreenMessages();

    MCNAPI void clearPlayerMessages();

    MCNAPI void clearSessionState();

    MCNAPI void clearTitle();

    MCNAPI void clearTitleMessages();

    MCNAPI void consumeScreenModal(::ModalScreenData&);

    MCNAPI void displayAnnouncementMessage(
        std::string const&,
        std::optional<std::string> const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void displayChatMessage(
        std::string const&,
        std::string const&,
        std::optional<std::string> const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void displayClientMessage(std::string const&, std::optional<std::string> const&, bool);

    MCNAPI void displayDevConsoleMessage(std::string const&);

    MCNAPI void
    displayLocalizableMessage(std::string const&, std::optional<std::string> const&, std::vector<std::string> const&);

    MCNAPI void displayLocalizedMessage(std::string const&, std::optional<std::string> const&);

    MCNAPI void displaySystemMessage(
        std::string const&,
        std::optional<std::string> const&,
        std::string const&,
        ::ProfanityFilterContext
    );

    MCNAPI void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    MCNAPI void displayTextObjectWhisperMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    MCNAPI void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    MCNAPI void displayWhisperMessage(
        std::string const&,
        std::string const&,
        std::optional<std::string> const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void flashSlot(int);

    MCNAPI float floorAlignToScreenPixel(float) const;

    MCNAPI void flushQueuedDevConsoleMessages();

    MCNAPI int getClampedGuiScaleOffset() const;

    MCNAPI ::Vec2 getClientWindowOffset() const;

    MCNAPI std::vector<ContentLogMessage> const& getContentLogMessages() const;

    MCNAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCNAPI ::PlayerInventorySlotData getCurrentDropSlot() const;

    MCNAPI float getCurrentDropTicks() const;

    MCNAPI ::mce::MaterialPtr const& getCursorMat() const;

    MCNAPI std::vector<std::string> const& getDevConsoleScreenMessages();

    MCNAPI float getGuiScale() const;

    MCNAPI ::RectangleArea const& getHUDHotbarRectangle() const;

    MCNAPI std::array<HudVisibility, 13> const& getHudVisibilityState() const;

    MCNAPI ::mce::MaterialPtr const& getInvFillMat() const;

    MCNAPI float getInvGuiScale() const;

    MCNAPI std::string const& getLastChatMessage();

    MCNAPI std::string const& getLastContentLogMessage() const;

    MCNAPI std::string const& getLastDevConsoleMessage();

    MCNAPI std::string const getLastFilteredChatMessage();

    MCNAPI ::RectangleArea getLayoutCustomizationMainPanelRectangle() const;

    MCNAPI ::RectangleArea getLayoutCustomizationSubPanelRectangle() const;

    MCNAPI std::vector<GuiMessage>& getMessageList();

    MCNAPI bool getNewJukeboxPopupNotice(std::string&, std::string&);

    MCNAPI bool getNewPopupNotice(std::string&, std::string&);

    MCNAPI ulong getNumContentLogErrors() const;

    MCNAPI int getNumSlots() const;

    MCNAPI ::IOptionRegistry const& getOptions() const;

    MCNAPI short getPointerX() const;

    MCNAPI short getPointerY() const;

    MCNAPI std::vector<GuiMessage> getPreexistingMessages();

    MCNAPI ::mce::Mesh& getRcFeedbackInner();

    MCNAPI ::mce::Mesh& getRcFeedbackOuter();

    MCNAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCNAPI ::ScreenSizeData const& getScreenSizeData() const;

    MCNAPI std::string const& getServerSettings();

    MCNAPI uint getServerSettingsId();

    MCNAPI bool getShowProgress() const;

    MCNAPI std::vector<GuiMessage>& getSubtitleList();

    MCNAPI bool getTipMessage(std::string&);

    MCNAPI ::TitleMessage const& getTitleMessage() const;

    MCNAPI ::mce::Mesh& getVignette();

    MCNAPI ::RectangleArea getWYSIWYGBottomHudReservedArea() const;

    MCNAPI ::RectangleArea getWYSIWYGBottomReservedArea() const;

    MCNAPI ::RectangleArea getWYSIWYGLeftReservedArea() const;

    MCNAPI ::RectangleArea getWYSIWYGRightReservedArea() const;

    MCNAPI ::RectangleArea getWYSIWYGSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea getWYSIWYGTopReservedArea() const;

    MCNAPI float getXToScreenRatio(float) const;

    MCNAPI float getYToScreenRatio(float) const;

    MCNAPI bool handleClick();

    MCNAPI bool hasScreenModal() const;

    MCNAPI bool isHudElementVisible(::HudElement) const;

    MCNAPI bool isMuteChat() const;

    MCNAPI bool isOddGuiScale() const;

    MCNAPI void postError(int);

    MCNAPI ::RectangleArea const& recomputeHUDHotbarRectangle(float);

    MCNAPI ::Bedrock::PubSub::Subscription registerToGuiScaleChangedEvent(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription registerToServerFormDataAvailableEvent(std::function<void()>);

    MCNAPI void resetTitle();

    MCNAPI bool screenSizeDataValid() const;

    MCNAPI void setActionBarMessage(std::string const&, std::optional<std::string> const&);

    MCNAPI void setCoordinateCaptureType(::CoordinateCaptureType);

    MCNAPI void setHudVisibilityState(std::vector<HudElement> const&, ::HudVisibility);

    MCNAPI void setLastSelectedSlot(int, ::ContainerID);

    MCNAPI void setMenuPointerPressed(bool);

    MCNAPI void setMuteChat(bool);

    MCNAPI void setOverlappingControlsExist(bool);

    MCNAPI void setScreenSizeData(::ScreenSizeData const&);

    MCNAPI void setServerSettings(uint const, std::string const&);

    MCNAPI void setShowProgress(bool);

    MCNAPI void setSubtitle(std::string const&, std::optional<std::string> const);

    MCNAPI void setTextToSpeechEnabled(bool);

    MCNAPI void setTitle(std::string const&, std::optional<std::string> const);

    MCNAPI void setTitleAnimationTimes(int, int, int);

    MCNAPI ::RectangleArea setTouchToolbarArea(::RectangleArea const&);

    MCNAPI void showJukeboxPopupNotice(std::string const&, std::string const&);

    MCNAPI void showPopupNotice(std::string const&, std::string const&);

    MCNAPI void showScreenModal(::ModalScreenData&&);

    MCNAPI void showTipMessage(std::string const&);

    MCNAPI void tick();

    MCNAPI void toggleMuteChat();

    MCNAPI void
    updateGuiScaleAndScreenSize(::Vec2 const&, ::Vec2 const&, float, ::Vec2 const&, ::cg::math::Rect<float> const&);

    MCNAPI void updatePointerLocation(short, short);

    MCNAPI void useEditorGuiScale(bool);

    MCNAPI bool wasToolbarClicked() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int calculateMinimumAllowedScale(int const);

    MCNAPI static float resolveGuiScale(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& BUTTONS_TRANSPARENCY();

    MCNAPI static float const& DropTicks();

    MCNAPI static std::array<float, 8> const& GUI_SCALE_VALUES();

    MCNAPI static float const& MINIMUM_GUI_SCALE_PERCENTAGE();

    MCNAPI static int const& NUM_HOTBAR_SLOTS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onConfigChanged(::Config const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
