#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/screens/models/BossInfo.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/util/ChatMessageRestrictions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/MultiplayerSettingsPacketType.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/util/HudElement.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
class Block;
class BlockActor;
class BlockEventListener;
class BlockPos;
class BlockSource;
class BookScreenManager;
class BossEventPacket;
class BoundingBox;
class ClientInputHandler;
class CommandOrigin;
class ContainerContentChangeListener;
class GuiData;
class GuiMessage;
class HashedString;
class HudContainerManagerController;
class ItemEventListener;
class ItemStack;
class MinecartCommandBlockManager;
class MinecraftglTFExporter;
class MobEffectInstance;
class NpcEventListener;
class PlayerEventListener;
class PortfolioScreenManager;
class RectangleArea;
class ResourceLocation;
class StructureBlockActor;
class StructureEditorData;
class StructureSettings;
class StructureTemplate;
class TitleMessage;
class Vec3;
struct ModalScreenData;
struct PhotoRecord;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::Safety { class RedactableString; }
namespace Core { class Path; }
namespace OreUI { class Router; }
namespace Social { class User; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ClientInstanceScreenModel : public ::MinecraftScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, BossInfo>> mBossInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceScreenModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPhotoToPortfolio(std::string const&, std::string const&);

    MCNAPI void addToDevConsoleMessageHistory(std::string const&);

    MCNAPI void addToSentMessageHistory(std::string const&);

    MCNAPI void calculatePlacePos(uchar&, ::BlockPos&) const;

    MCNAPI bool canAttachBalloonToBlock(::BlockPos const&) const;

    MCNAPI bool canAttachLeashedActorsToBlock(::BlockPos const&) const;

    MCNAPI bool canCollectFromCauldron(::BlockPos const&) const;

    MCNAPI bool canDrinkMedicine(::ItemStack const&) const;

    MCNAPI bool canEmptyIntoCauldron(::BlockPos const&) const;

    MCNAPI bool canHangItemFrame(::ItemStack const&, uchar, ::BlockPos) const;

    MCNAPI bool canInteractWhileKeyboardIsOpen() const;

    MCNAPI bool canPlaceCamera(::ItemStack const&, ::BlockPos const&, uchar) const;

    MCNAPI bool canPlaceChalkboard(::ItemStack const&, ::BlockPos const&, uchar) const;

    MCNAPI bool canPlaceHeldBlock() const;

    MCNAPI bool canPlaceHeldItem() const;

    MCNAPI bool canPlaceWaterlily() const;

    MCNAPI bool canPlayerFly() const;

    MCNAPI bool canTipArrows(::BlockPos const&) const;

    MCNAPI bool canUseReed() const;

    MCNAPI bool canUseSeed() const;

    MCNAPI void clearActiveControlOptions();

    MCNAPI void clearInvalidDownKeys();

    MCNAPI void clearTitleMessages();

    MCNAPI bool connectedToThirdPartyServer() const;

    MCNAPI void consumeNewScreenModal(::ModalScreenData&) const;

    MCNAPI std::unique_ptr<BookScreenManager> createBookScreenManager(int, ::BlockActor*);

    MCNAPI std::unique_ptr<MinecartCommandBlockManager> createCommandBlockManager(bool, ::BlockPos, ::ActorUniqueID);

    MCNAPI std::shared_ptr<HudContainerManagerController> createHudContainerManagerController();

    MCNAPI void createPhotoItem(::PhotoRecord const&);

    MCNAPI std::unique_ptr<PortfolioScreenManager> createPortfolioScreenManager();

    MCNAPI void deleteContainerManager();

    MCNAPI ::BoundingBox detectStructureBlockCorners(::BlockPos const&);

    MCNAPI void displaySubtitleMessage(std::string const&, ::SoundDirection, bool);

    MCNAPI void displaySystemMessage(std::string const&, std::string const&, ::ProfanityFilterContext);

    MCNAPI float distanceSqrFromPlayerToBlockCenter(::Vec3 const&);

    MCNAPI bool doOtherConfigsExistInThisCategory() const;

    MCNAPI bool doesPlatformShowHideKeyboardButton() const;

    MCNAPI bool endPortalFrameBlockHasEye(::BlockPos const&) const;

    MCNAPI ::ChatMessageRestrictions executeCommand(std::string const&);

    MCNAPI bool exportStructureBlock(std::string const&, ::Core::Path const&);

    MCNAPI bool findStructure(::StructureEditorData&);

    MCNAPI bool forceAllowEating() const;

    MCNAPI std::set<uint> const& getActiveControlOptions() const;

    MCNAPI std::vector<OptionID> getActiveOptionIDs(::ControlOptionType) const;

    MCNAPI std::vector<MobEffectInstance> const& getAllPlayerEffects() const;

    MCNAPI ::Block const& getBlockAt(::BlockPos const&) const;

    MCNAPI ::BlockActor* getBlockEntity(::BlockPos const&, ::BlockActorType);

    MCNAPI ::mce::Color getBossBarColor(int) const;

    MCNAPI float getBossHealthPercentage(int) const;

    MCNAPI ::Bedrock::Safety::RedactableString getBossName(int) const;

    MCNAPI ::ChalkboardSize getChalkboardType(::BlockPos const&);

    MCNAPI ::Social::User& getClientUser();

    MCNAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCNAPI ::OreUI::Router& getCurrentUIRouter();

    MCNAPI std::unique_ptr<CommandOrigin> getDevConsoleCommandOrigin() const;

    MCNAPI std::deque<std::string> const& getDevConsoleMessageHistory();

    MCNAPI ::Actor* getEntity(::ActorUniqueID const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> getGuiData() const;

    MCNAPI std::vector<GuiMessage>& getGuiMessageList();

    MCNAPI ::ClientInputHandler* getInput();

    MCNAPI std::string getInteractionText() const;

    MCNAPI int getItemNameOffset(bool, bool, bool) const;

    MCNAPI std::string const& getLastChatMessage();

    MCNAPI std::string const getLastFilteredChatMessage();

    MCNAPI ::Block const& getLiquidBlockAt(::BlockPos const&) const;

    MCNAPI ::Bedrock::Threading::Async<ResourceLocation> getLocalThirdPartyGamerpic() const;

    MCNAPI int getNumberOfActiveConfigs() const;

    MCNAPI int getNumberOfDaysPlayed() const;

    MCNAPI ::ItemStack const& getOffhandSlot() const;

    MCNAPI float getPickRange() const;

    MCNAPI int getPlayerArmorValue() const;

    MCNAPI std::unique_ptr<CommandOrigin> getPlayerCommandOrigin() const;

    MCNAPI std::optional<BlockPos> const getPlayerCursorBlockHitPosition() const;

    MCNAPI float getPlayerExp();

    MCNAPI int getPlayerLevel();

    MCNAPI ::Vec3 getPlayerPosition() const;

    MCNAPI ::BlockSource* getPlayerRegion() const;

    MCNAPI std::vector<GuiMessage> getPreexistingChatMessages();

    MCNAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCNAPI ::ItemStack const& getSelectedItem() const;

    MCNAPI std::deque<std::string> const& getSentMessageHistory();

    MCNAPI int getStackSplittingTrigger() const;

    MCNAPI std::string const& getStoreName() const;

    MCNAPI std::vector<GuiMessage>& getSubtitleList();

    MCNAPI ::Bedrock::Threading::Async<ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const&, std::string const&) const;

    MCNAPI ::TitleMessage const& getTitleMessage() const;

    MCNAPI ::UIProfile getUIProfile() const;

    MCNAPI ::WYSIWYGState getWYSIWYGState() const;

    MCNAPI float getXToScreenRatio(float) const;

    MCNAPI float getYToScreenRatio(float) const;

    MCNAPI void handleQuitButtonPress();

    MCNAPI bool hasNewScreenModal() const;

    MCNAPI bool hasPlayerSleepFlagSet() const;

    MCNAPI ::StructureTemplate* importStructureBlock(std::string const&, ::Core::Path const&);

    MCNAPI void initiateGLBFileSave(std::string const&, ::Core::Path const&, std::function<void(bool)>);

    MCNAPI std::shared_ptr<MinecraftglTFExporter>
           initiateStructureModelExport(::BlockPos const&, ::StructureEditorData const&, std::function<void(bool)>);

    MCNAPI void insertStructureBlockRequest(std::string const&, ::StructureTemplate const&);

    MCNAPI bool isAbleToRespawn() const;

    MCNAPI bool isBossProperlyRegistered(int) const;

    MCNAPI bool isChatMute() const;

    MCNAPI bool isDimensionReady() const;

    MCNAPI bool isEmoteChatMute() const;

    MCNAPI bool const isHudElementVisible(::HudElement) const;

    MCNAPI bool isInEditorToolMode() const;

    MCNAPI bool isInteracting() const;

    MCNAPI bool isNoConfigSelected() const;

    MCNAPI bool isPlayerFlying() const;

    MCNAPI bool isPlayerHungry() const;

    MCNAPI bool isPlayerInPortal() const;

    MCNAPI bool isPlayerInWater() const;

    MCNAPI bool isPlayerOnDescendableBlock() const;

    MCNAPI bool isPlayerOnGround() const;

    MCNAPI bool isPlayerRiding() const;

    MCNAPI bool isPlayerRidingActorType(::ActorType) const;

    MCNAPI bool isRemoteProfanityFilterEnabled() const;

    MCNAPI bool isTextToSpeechEnabled() const;

    MCNAPI bool isTouchPressed() const;

    MCNAPI bool isUsingItem() const;

    MCNAPI bool itemFrameFilled(::BlockPos const&) const;

    MCNAPI void loadMode(::BlockPos const&, ::StructureBlockActor*);

    MCNAPI void makeStructureBlockRequest(
        std::string const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTemplateRequestOperation
    );

    MCNAPI bool mayEditChalkboard(::BlockPos const&) const;

    MCNAPI void navigateToChatScreen();

    MCNAPI void navigateToImmersiveReaderScreen(std::string);

    MCNAPI void navigateToInventoryScreen(::CraftingType);

    MCNAPI void navigateToLeaveLevelScreen(bool);

    MCNAPI void navigateToModalScreen(::ModalScreenData const&);

    MCNAPI void navigateToServerStoreScreen();

    MCNAPI void queryBossInfo() const;

    MCNAPI void registerBlockEventListener(::BlockEventListener&);

    MCNAPI void registerClientPlayerEventCoordinatorListener(::PlayerEventListener&);

    MCNAPI void registerContentChangeListener(::ContainerContentChangeListener&);

    MCNAPI void registerNpcEventListener(::NpcEventListener&);

    MCNAPI void requestClipboardData(std::function<void(const std::string&)>) const;

    MCNAPI void requestDisconnectPlayer(std::string const&);

    MCNAPI void resetCanTakeScreenshot();

    MCNAPI void sendBlockEntityUpdatePacket(::BlockPos const&);

    MCNAPI ::ChatMessageRestrictions sendChatMessage(std::string const&);

    MCNAPI void sendCommandBlockUpdatePacket(::BlockPos const&);

    MCNAPI void sendCommandBlockUpdatePacket(::ActorUniqueID const&);

    MCNAPI void sendMultiplayerSettingsPacket(::MultiplayerSettingsPacketType);

    MCNAPI void sendRespawnRequest() const;

    MCNAPI void sendStructureBlockUpdatePacket(::BlockPos const&, ::StructureEditorData const&, bool);

    MCNAPI void setClipboardToPosition(::Vec3 const&);

    MCNAPI void setClipboardToPosition(::BlockPos const&);

    MCNAPI void setControlTipsTimeElapsedStart();

    MCNAPI void setCoordinateCaptureType(::CoordinateCaptureType);

    MCNAPI void setInteractActiveState(bool);

    MCNAPI void setMenuPointerPressed(bool);

    MCNAPI void setMuteChat(bool);

    MCNAPI void setPauseIntent(bool);

    MCNAPI void setWYSIWYGState(::WYSIWYGState);

    MCNAPI bool shouldDisplayDaysPlayed() const;

    MCNAPI bool shouldDisplayPlayerPosition() const;

    MCNAPI bool shouldRequestThirdPartyDisplayPicture(::mce::UUID const&) const;

    MCNAPI void splitVibrate(int);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void(BossEventUpdateType)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToBossEvent(std::function<void(BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(std::function<void(bool, bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToSoundEvent(
        std::function<
            void(const std::string&, std::optional<std::string>, const Vec3&, float, const Vec3&, const Vec3&, bool)>
    );

    MCNAPI bool thirdPartyGamerpicAllowed(::mce::UUID const&) const;

    MCNAPI void toggleChatMute();

    MCNAPI void toggleEmoteChatMute();

    MCNAPI bool tryBroadcastGlobalPause(bool);

    MCNAPI bool tryGetAgentPosition(::BlockPos&) const;

    MCNAPI void unregisterBlockEventListener(::BlockEventListener&);

    MCNAPI void unregisterClientPlayerEventCoordinatorListener(::PlayerEventListener&);

    MCNAPI void unregisterContentChangeListener(::ContainerContentChangeListener&);

    MCNAPI void unregisterNpcEventListener(::NpcEventListener&);

    MCNAPI bool useMsaGamertagsOnly() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
