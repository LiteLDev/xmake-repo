#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/util/ChatMessageRestrictions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/util/HudElement.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockEventListener;
class BlockPos;
class BlockSource;
class BookScreenManager;
class BoundingBox;
class CommandOrigin;
class GuiMessage;
class HudContainerManagerController;
class ItemStack;
class MinecartCommandBlockManager;
class MinecraftglTFExporter;
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
struct BossInfo;
struct ModalScreenData;
struct PhotoRecord;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::Safety { class RedactableString; }
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ClientInstanceScreenModel : public ::MinecraftScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::BossInfo>> mBossInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceScreenModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addPhotoToPortfolio(::std::string const& photoName, ::std::string const& newPhotoName);

    MCAPI void addToDevConsoleMessageHistory(::std::string const& message);

    MCAPI void addToSentMessageHistory(::std::string const& message);

    MCAPI void calculatePlacePos(uchar& face, ::BlockPos& pos) const;

    MCAPI bool canAttachBalloonToBlock(::BlockPos const& blockPos) const;

    MCAPI bool canAttachLeashedActorsToBlock(::BlockPos const& blockPos) const;

    MCAPI bool canCollectFromCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canDrinkMedicine(::ItemStack const& medicine) const;

    MCAPI bool canEmptyIntoCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canHangItemFrame(::ItemStack const& heldItemInstance, uchar face, ::BlockPos blockPos) const;

    MCAPI bool canPlaceCamera(::ItemStack const& camera, ::BlockPos const& blockPos, uchar facing) const;

    MCAPI bool canPlaceChalkboard(::ItemStack const& chalkboard, ::BlockPos const& blockPos, uchar facing) const;

    MCAPI bool canPlaceHeldBlock() const;

    MCAPI bool canPlaceHeldItem() const;

    MCAPI bool canPlaceWaterlily() const;

    MCAPI bool canTipArrows(::BlockPos const& blockPos) const;

    MCAPI bool canUseReed() const;

    MCAPI bool canUseSeed() const;

    MCAPI void clearInvalidDownKeys();

    MCAPI void clearTitleMessages();

    MCAPI void consumeNewScreenModal(::ModalScreenData& outModalScreenData) const;

    MCAPI ::std::unique_ptr<::BookScreenManager> createBookScreenManager(int bookSlot, ::BlockActor* lectern);

    MCAPI ::std::unique_ptr<::MinecartCommandBlockManager>
    createCommandBlockManager(bool isMinecart, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCAPI ::std::shared_ptr<::HudContainerManagerController> createHudContainerManagerController();

    MCAPI void createPhotoItem(::PhotoRecord const& record);

    MCAPI ::std::unique_ptr<::PortfolioScreenManager> createPortfolioScreenManager();

    MCAPI ::BoundingBox detectStructureBlockCorners(::BlockPos const& pos);

    MCAPI void displaySubtitleMessage(::std::string const& message, ::SoundDirection direction, bool isLocalPlayer);

    MCAPI void displaySystemMessage(
        ::std::string const&     message,
        ::std::string const&     ttsMessage,
        ::ProfanityFilterContext profanityFilterContext
    );

    MCAPI float distanceSqrFromPlayerToBlockCenter(::Vec3 const& pos);

    MCAPI bool doOtherConfigsExistInThisCategory() const;

    MCAPI bool endPortalFrameBlockHasEye(::BlockPos const& blockPos) const;

    MCAPI bool exportStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCAPI bool findStructure(::StructureEditorData& structureData);

    MCAPI bool forceAllowEating() const;

    MCAPI ::Block const& getBlockAt(::BlockPos const& blockPos) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const& pos, ::BlockActorType blockEntityType);

    MCAPI ::mce::Color getBossBarColor(int index) const;

    MCAPI float getBossHealthPercentage(int index) const;

    MCAPI ::Bedrock::Safety::RedactableString getBossName(int index) const;

    MCAPI ::ChalkboardSize getChalkboardType(::BlockPos const& pos);

    MCAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> getDevConsoleCommandOrigin() const;

    MCAPI ::std::vector<::GuiMessage>& getGuiMessageList();

    MCAPI ::std::string getInteractionText() const;

    MCAPI int getItemNameOffset(bool showClassicUI, bool showSurvivalUI, bool showLocatorBar) const;

    MCAPI ::std::string const& getLastChatMessage();

    MCAPI ::std::string const getLastFilteredChatMessage();

    MCAPI ::Block const& getLiquidBlockAt(::BlockPos const& blockPos) const;

    MCAPI ::Bedrock::Threading::Async<::ResourceLocation> getLocalThirdPartyGamerpic() const;

    MCAPI int getNumberOfActiveConfigs() const;

    MCAPI int getNumberOfDaysPlayed() const;

    MCAPI ::ItemStack const& getOffhandSlot() const;

    MCAPI int getPlayerArmorValue() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> getPlayerCommandOrigin() const;

    MCAPI float getPlayerExp();

    MCAPI int getPlayerLevel();

    MCAPI ::Vec3 getPlayerPosition() const;

    MCAPI ::BlockSource* getPlayerRegion() const;

    MCAPI ::std::vector<::GuiMessage> getPreexistingChatMessages();

    MCAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI int getStackSplittingTrigger() const;

    MCAPI ::std::string const& getStoreName() const;

    MCAPI ::std::vector<::GuiMessage>& getSubtitleList();

    MCAPI ::Bedrock::Threading::Async<::ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const& playerId, ::std::string const& platformOnlineID) const;

    MCAPI ::TitleMessage const& getTitleMessage() const;

    MCAPI ::WYSIWYGState getWYSIWYGState() const;

    MCAPI float getXToScreenRatio(float x) const;

    MCAPI float getYToScreenRatio(float y) const;

    MCAPI void handleQuitButtonPress();

    MCAPI bool hasNewScreenModal() const;

    MCAPI bool hasPlayerSleepFlagSet() const;

    MCAPI ::StructureTemplate* importStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCAPI void initiateGLBFileSave(
        ::std::string const&        defaultName,
        ::Core::Path const&         originPath,
        ::std::function<void(bool)> onComplete
    );

    MCAPI ::std::shared_ptr<::MinecraftglTFExporter> initiateStructureModelExport(
        ::BlockPos const&            position,
        ::StructureEditorData const& structureEditorData,
        ::std::function<void(bool)>  onFileReady
    );

    MCAPI void insertStructureBlockRequest(::std::string const& structureName, ::StructureTemplate const& temp);

    MCAPI bool isBossProperlyRegistered(int index) const;

    MCFOLD bool isChatMute() const;

    MCAPI bool isDimensionReady() const;

    MCAPI bool isEmoteChatMute() const;

    MCAPI bool const isHudElementVisible(::HudElement hudElement) const;

    MCAPI bool isInteracting() const;

    MCAPI bool isNoConfigSelected() const;

    MCAPI bool isPlayerHungry() const;

    MCAPI bool isPlayerInWater() const;

    MCAPI bool isPlayerOnGround() const;

    MCAPI bool isPlayerRidingActorType(::ActorType type) const;

    MCAPI bool isRemoteProfanityFilterEnabled() const;

    MCAPI bool isTextToSpeechEnabled() const;

    MCAPI bool isTouchPressed() const;

    MCAPI bool isUsingItem() const;

    MCAPI bool itemFrameFilled(::BlockPos const& blockPos) const;

    MCAPI void loadMode(::BlockPos const& pos, ::StructureBlockActor* act);

    MCAPI void makeStructureBlockRequest(
        ::std::string const&                structureName,
        ::BlockPos const&                   structureBlockPosition,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation exportOperation
    );

    MCAPI bool mayEditChalkboard(::BlockPos const& blockPos) const;

    MCAPI void navigateToImmersiveReaderScreen(::std::string readerText);

    MCAPI void navigateToLeaveLevelScreen(bool switchScreen);

    MCAPI void navigateToModalScreen(::ModalScreenData const& modalScreenData);

    MCAPI void navigateToServerStoreScreen();

    MCAPI void queryBossInfo() const;

    MCAPI void registerBlockEventListener(::BlockEventListener& listener);

    MCAPI void registerClientPlayerEventCoordinatorListener(::PlayerEventListener& listener);

    MCAPI void registerNpcEventListener(::NpcEventListener& listener);

    MCAPI void requestClipboardData(::std::function<void(::std::string const&)> callback) const;

    MCAPI void requestDisconnectPlayer(::std::string const& userName);

    MCAPI void resetCanTakeScreenshot();

    MCAPI void sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCAPI ::ChatMessageRestrictions sendChatMessage(::std::string const& message);

    MCAPI void sendCommandBlockUpdatePacket(::ActorUniqueID const& entityId);

    MCAPI void sendCommandBlockUpdatePacket(::BlockPos const& pos);

    MCAPI void sendRespawnRequest() const;

    MCAPI void sendStructureBlockUpdatePacket(
        ::BlockPos const&            pos,
        ::StructureEditorData const& structureEditorData,
        bool                         trigger
    );

    MCAPI void setClipboardToPosition(::Vec3 const& pos);

    MCAPI void setClipboardToPosition(::BlockPos const& pos);

    MCAPI void setCoordinateCaptureType(::CoordinateCaptureType coordinateCaptureType);

    MCAPI void setMenuPointerPressed(bool pressed);

    MCAPI void setMuteChat(bool isMuted);

    MCAPI void setPauseIntent(bool intent);

    MCAPI bool shouldDisplayDaysPlayed() const;

    MCAPI bool shouldDisplayPlayerPosition() const;

    MCAPI void splitVibrate(int milliSeconds);

    MCAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(::std::function<void(bool, bool)> callback);

    MCAPI bool thirdPartyGamerpicAllowed(::mce::UUID const& playerId) const;

    MCAPI void toggleChatMute();

    MCAPI void toggleEmoteChatMute();

    MCAPI bool tryBroadcastGlobalPause(bool status);

    MCAPI bool tryGetAgentPosition(::BlockPos& result) const;

    MCAPI void unregisterBlockEventListener(::BlockEventListener& listener);

    MCAPI void unregisterClientPlayerEventCoordinatorListener(::PlayerEventListener& listener);

    MCAPI void unregisterNpcEventListener(::NpcEventListener& listener);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
#else // @header-generator platform
class ClientInstanceScreenModel {};
#endif // @header-generator platform
#endif // @header-generator platform
